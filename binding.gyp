{
    "targets": [{
        "target_name": "hello",
        "sources": ["main.cpp"],
        "libraries" : [
            '<(module_root_dir)/portaudio/lib/.libs/libportaudio.a',
            '/Library/Frameworks/CoreAudio.framework',
            '/Library/Frameworks/AudioToolbox.framework',
            '/Library/Frameworks/AudioUnit.framework',
            '/Library/Frameworks/CoreServices.framework',
            '/Library/Frameworks/Carbon.framework'
        ],
        'cflags!': [ '-fno-exceptions' ],
        'cflags_cc!': [ '-fno-exceptions' ],
        'cflags_cc': [ '-std=c++0x' ]
    }]
}
