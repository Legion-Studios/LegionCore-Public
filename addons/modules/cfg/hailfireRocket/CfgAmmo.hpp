class ls_moduleAmmo_protonMortar: ModuleOrdnanceMortar_F_ammo {
    whistleDist = 850;
    whistleOnFire = 1;
    effectFly = "ls_concussionMissile";
    soundHit1[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit_1.wss), 2.51189, 1, 1900};
    soundHit2[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit_2.wss), 2.51189, 1, 1900};
    soundHit3[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit_3.wss), 2.51189, 1, 1900};
    soundHit4[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit_4.wss), 2.51189, 1, 1900};
    soundHit5[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\hit_5.wss), 2.51189, 1, 1900};
    soundFly[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\fly.wss), 6, 1, 1000};
    multiSoundHit[] = {
        "soundHit1", 0.2,
        "soundHit2", 0.2,
        "soundHit3", 0.2,
        "soundHit4", 0.2,
        "soundHit5", 0.2
    };
    soundFakeFall[] = {"soundFakeFall0", 0.25, "soundFakeFall1", 0.25, "soundFakeFall2", 0.25, "soundFakeFall3", 0.25};
    soundFakeFall0[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot_1.wss), 1.25893, 1, 250};
    soundFakeFall1[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot_2.wss), 1.25893, 1, 250};
    soundFakeFall2[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot_3.wss), 1.25893, 1, 250};
    soundFakeFall3[] = {QPATHTOEF(sounds,vehicles\mortar\weapon\shot_4.wss), 1.25893, 1, 250};
};
