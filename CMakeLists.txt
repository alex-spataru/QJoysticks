cmake_minimum_required(VERSION 3.20)

project(QJoysticks
    VERSION 1.0.0
    DESCRIPTION "Qt joystick input library (SDL2 statically embedded)"
    LANGUAGES C CXX)

option(QJOYSTICKS_BUILD_SHARED "Build QJoysticks as a shared library" ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
find_package(SDL2 REQUIRED)

# Prefer the regular target, but fall back to the static-only target so a
# static SDL2 build (used for the self-contained library) works unchanged.
if(TARGET SDL2::SDL2)
    set(QJ_SDL2_TARGET SDL2::SDL2)
elseif(TARGET SDL2::SDL2-static)
    set(QJ_SDL2_TARGET SDL2::SDL2-static)
elseif(SDL2_LIBRARIES)
    set(QJ_SDL2_TARGET ${SDL2_LIBRARIES})
else()
    message(FATAL_ERROR "SDL2 was found but provides no usable target")
endif()

set(QJ_LIB_TYPE STATIC)
if(QJOYSTICKS_BUILD_SHARED)
    set(QJ_LIB_TYPE SHARED)
endif()

add_library(QJoysticks ${QJ_LIB_TYPE}
    src/QJoysticks.cpp
    src/QJoysticks/SDL_Joysticks.cpp
    src/QJoysticks/VirtualJoystick.cpp
    etc/resources/qjoysticks-res.qrc)

target_include_directories(QJoysticks
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
        $<INSTALL_INTERFACE:include>)

# Same defines the qmake build (QJoysticks.pri / lib/SDL/SDL.pri) uses.
target_compile_definitions(QJoysticks PRIVATE SDL_SUPPORTED SDL_MAIN_HANDLED)
if(WIN32)
    target_compile_definitions(QJoysticks PRIVATE SDL_WIN)
endif()

target_link_libraries(QJoysticks
    PUBLIC
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
    PRIVATE
        ${QJ_SDL2_TARGET})

# Export the public QJoysticks class on Windows via QJOYSTICKS_EXPORT.
# (WINDOWS_EXPORT_ALL_SYMBOLS is NOT used: it breaks with AUTORCC-generated
# objects under the Visual Studio generator.)
if(QJOYSTICKS_BUILD_SHARED)
    target_compile_definitions(QJoysticks PRIVATE QJOYSTICKS_LIBRARY)
else()
    target_compile_definitions(QJoysticks PUBLIC QJOYSTICKS_STATIC)
endif()

if(UNIX AND NOT APPLE AND QJOYSTICKS_BUILD_SHARED)
    # Self-contained .so (apart from Qt and system libs):
    #  - hide every symbol coming from the statically linked SDL2 archive so
    #    it can never clash with an app's own SDL2
    #  - fail the build if any symbol is left unresolved
    # NOTE: the C++ API must stay exported, so do NOT use hidden visibility
    # or static libstdc++ here.
    target_link_options(QJoysticks PRIVATE
        -Wl,--exclude-libs,ALL
        -Wl,--no-undefined
        -Wl,--as-needed)
endif()

include(GNUInstallDirs)
install(TARGETS QJoysticks
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
# Only the headers consumers need: QJoysticks.h pulls in JoysticksCommon.h.
# (SDL_Joysticks.h includes <SDL.h> and is intentionally not shipped.)
install(FILES src/QJoysticks.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES src/QJoysticks/JoysticksCommon.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/QJoysticks)
