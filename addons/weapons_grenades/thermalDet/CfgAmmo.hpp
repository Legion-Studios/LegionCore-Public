class ls_grenade_thermalDetClassA_ammo: ls_grenade_ammo_base {
    scope = 2;
    author = AUTHOR;

    model = QPATHTOF(thermalDet\ls_grenade_thermalDet.p3d);
    ace_grenades_pullPinSound[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_pin.wss), 4, 1, 10};
    soundFly[] = {QPATHTOEF(sounds,weapons\grenade\thermalDetClassA_fuse.wss), 1, 5, 20};
    soundHit1[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_explode.wss), 2.51189, 1, 1500};
    soundHit2[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_explode.wss), 2.51189, 1, 1500};
    soundHit3[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_explode.wss), 2.51189, 1, 1500};
    soundHit4[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_explode.wss), 2.51189, 1, 1500};
    SoundSetExplosion[] = {"Mortar_Exp_SoundSet", "Mortar_Tail_SoundSet", "Explosion_Debris_SoundSet"};
    craterEffects = "ArtyShellCrater";
    timeToLive = 24;
    hit = 30;
    indirectHit = 30;
    indirectHitRange = 20;

    class CamShakeExplode {
        distance = 110;
        duration = 1;
        frequency = 30;
        power = 20;
    };
};

class ls_grenade_thermalDetClassB_ammo: ls_grenade_thermalDetClassA_ammo {
    scope = 2;
    author = AUTHOR;

    timeToLive = 12;
    hit = 15;
    indirectHit = 15;
    indirectHitRange = 10;
    craterEffects = "ImpactEffectsMedium";
    soundFly[] = {QPATHTOEF(sounds,weapons\grenade\thermalDetClassB_fuse.wss), 1, 5, 20};
    soundSetExplosion[] = {"RocketsLight_Exp_SoundSet", "RocketsLight_Tail_SoundSet", "Explosion_Debris_SoundSet"};

    class CamShakeExplode {
        distance = 99.8178;
        duration = 1;
        frequency = 25;
        power = 10;
    };
};

class ls_grenade_thermalDetClassC_ammo: ls_grenade_thermalDetClassA_ammo {
    scope = 2;
    author = AUTHOR;

    timeToLive = 6;
    hit = 8;
    indirectHit = 8;
    indirectHitRange = 3;
    craterEffects = "GrenadeCrater";
    soundFly[] = {QPATHTOEF(sounds,weapons\grenade\thermalDetClassC_fuse.wss), 1, 5, 20};
    soundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};

    class CamShakeExplode {
        distance = 99.8178;
        duration = 1;
        frequency = 20;
        power = 6;
    };
};
