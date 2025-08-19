#define PLACEABLE_SOUND(SOUND_NAME,SOUND_DISPLAYNAME) \
    class DOUBLES(SOUND_NAME,placeable): ls_sound_placeable_base { \
        scope = 2; \
        author = AUTHOR; \
        displayName = SOUND_DISPLAYNAME; \
        sound = QUOTE(SOUND_NAME); \
    }

// PATHTO macros in this file should use QPATHTOEF(sounds,...)
// This is so that other addons can include this file.
#define MORTAR_LAUNCHER_SOUNDS class StandardSound { \
    begin1[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot1.wss), 1.5, 1, 250}; \
    begin2[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot2.wss), 1.5, 1, 250}; \
    begin3[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot3.wss), 1.5, 1, 250}; \
    begin4[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot4.wss), 1.5, 1, 250}; \
    begin5[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot5.wss), 1.5, 1, 250}; \
    soundBegin[] = { \
        "begin1", 0.15, \
        "begin2", 0.25, \
        "begin3", 0.1, \
        "begin4", 0.3, \
        "begin5", 0.2 \
    }; \
}; \
reloadSound[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\reload.wss), 2, 1, 20}; \
reloadMagazineSound[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\reloadMagazine.wss), 1, 1, 20}

#define MORTAR_AMMO_SOUNDS soundHit1[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit1.wss), 2.51189, 1, 1900}; \
soundHit2[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit2.wss), 2.51189, 1, 1900}; \
soundHit3[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit3.wss), 2.51189, 1, 1900}; \
soundHit4[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit4.wss), 2.51189, 1, 1900}; \
soundHit5[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit5.wss), 2.51189, 1, 1900}; \
multiSoundHit[] = { \
    "soundHit1", 0.2, \
    "soundHit2", 0.2, \
    "soundHit3", 0.2, \
    "soundHit4", 0.2, \
    "soundHit5", 0.2 \
}; \
soundFly[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\fly.wss), 3, 1, 250}

// From original mortar config, but was commented out
// soundImpact1[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit1.wss), 2.51189, 1, 1900};
// soundImpact2[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit2.wss), 2.51189, 1, 1900};
// soundImpact3[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit3.wss), 2.51189, 1, 1900};
// soundImpact4[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit4.wss), 2.51189, 1, 1900};
// soundImpact5[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit5.wss), 2.51189, 1, 1900};
// soundHit[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit2.wss), 2.51189, 1, 1900};
// soundImpact[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit1.wss), 2.51189, 1, 1900};
