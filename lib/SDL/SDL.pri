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
    LIBS += -L$$PWD/bin/mac-osx/ -lSDL2

    LIBS += -framework AudioToolbox
    LIBS += -framework Cocoa
    LIBS += -framework CoreAudio
    LIBS += -framework IOKit
    LIBS += -framework Metal
    LIBS += -framework CoreFoundation
    LIBS += -framework Carbon
    LIBS += -framework ForceFeedback
    LIBS += -framework CoreVideo
    LIBS += -framework CoreHaptics
    LIBS += -framework GameController

    QMAKE_LFLAGS += -F /System/Library/Frameworks/AudioToolbox.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/Cocoa.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/CoreAudio.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/IOKit.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/Metal.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/CoreFoundation.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/Carbon.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/ForceFeedback.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/CoreVideo.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/CoreHaptics.framework/
    QMAKE_LFLAGS += -F /System/Library/Frameworks/GameController.framework/
}

linux:!android {
    LIBS += -lSDL2
}
