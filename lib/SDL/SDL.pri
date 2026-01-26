INCLUDEPATH += $$PWD/include

!android {
    DEFINES += SDL_SUPPORTED
}

win32* {
    DEFINES += SDL_WIN
    DEFINES += SDL_MAIN_HANDLED
}

win32-g++* {
    LIBS += -L$$PWD/bin/windows/mingw/ -lSDL2
}

win32-msvc* {
    contains (QMAKE_TARGET.arch, x86_64) {
        LIBS += -L$$PWD/bin/windows/msvc/x64/ -lSDL2
    }

    else {
        LIBS += -L$$PWD/bin/windows/msvc/x86/ -lSDL2
    }
}

macx* {
    # Try to use system SDL2 via sdl2-config (works with Homebrew, MacPorts, etc.)
    # Falls back to bundled library for Intel Macs if system SDL2 not found
    SDL2_CONFIG = $$system(which sdl2-config 2>/dev/null)
    !isEmpty(SDL2_CONFIG) {
        # Use system SDL2 (required for Apple Silicon, recommended for all)
        QMAKE_CFLAGS += $$system(sdl2-config --cflags)
        QMAKE_CXXFLAGS += $$system(sdl2-config --cflags)
        LIBS += $$system(sdl2-config --libs)
    } else {
        # Fallback: Try Homebrew paths (arm64: /opt/homebrew, x86_64: /usr/local)
        exists(/opt/homebrew/lib/libSDL2.dylib) {
            INCLUDEPATH += /opt/homebrew/include/SDL2
            LIBS += -L/opt/homebrew/lib -lSDL2
        } else:exists(/usr/local/lib/libSDL2.dylib) {
            INCLUDEPATH += /usr/local/include/SDL2
            LIBS += -L/usr/local/lib -lSDL2
        } else {
            # Last resort: use bundled library (x86_64 only, won't work on Apple Silicon)
            LIBS += -L$$PWD/bin/mac-osx/ -lSDL2
        }
    }

    LIBS += -framework AudioToolbox
    LIBS += -framework AudioUnit
    LIBS += -framework Cocoa
    LIBS += -framework CoreAudio
    LIBS += -framework IOKit
    LIBS += -framework OpenGL
    LIBS += -framework CoreFoundation
    LIBS += -framework Carbon
    LIBS += -framework ForceFeedback
    LIBS += -framework CoreVideo
    LIBS += -framework GameController
    LIBS += -framework CoreHaptics

    QMAKE_LFLAGS += -F /System/Library/Frameworks/AudioToolbox.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/AudioUnit.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/Cocoa.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/CoreAudio.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/IOKit.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/OpenGL.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/CoreFoundation.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/Carbon.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/ForceFeedback.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/CoreVideo.framework/
}

linux:!android {
    LIBS += -lSDL2
}
