class ls_grenade_thermalDetClassA_ammo: ls_grenade_ammo_base {
    model = QPATHTOF(thermalDet\ls_grenade_thermalDet.p3d);

    hit = 30;
    indirectHit = 30;
    indirectHitRange = 20;
    dangerRadiusHit = 100;
    suppressionRadiusHit = 50;
    timeToLive = 24;

    explosionEffectRadius = 1.5;
    craterEffects = "ArtyShellCrater";

    ace_grenades_pullPinSound[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_pin.wss), 4, 1, 10};
    soundFly[] = {QPATHTOEF(sounds,weapons\grenade\thermalDetClassA_fuse.wss), 1, 5, 20};
    soundHit1[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_explode.wss), 2.51189, 1, 1500};
    soundHit2[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_explode.wss), 2.51189, 1, 1500};
    soundHit3[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_explode.wss), 2.51189, 1, 1500};
    soundHit4[] = {QPATHTOEF(sounds,weapons\grenade\thermalDet_explode.wss), 2.51189, 1, 1500};
    soundSetExplosion[] = {"Mortar_Exp_SoundSet", "Mortar_Tail_SoundSet", "Explosion_Debris_SoundSet"};

    class CamShakeExplode {
        distance = 110;
        duration = 1;
        frequency = 30;
        power = 20;
    };
};

class ls_grenade_thermalDetClassB_ammo: ls_grenade_thermalDetClassA_ammo {
    hit = 15;
    indirectHit = 15;
    indirectHitRange = 10;
    dangerRadiusHit = 80;
    suppressionRadiusHit = 30;
    timeToLive = 12;

    explosionEffectRadius = 3;
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
    hit = 8;
    indirectHit = 8;
    indirectHitRange = 6;
    dangerRadiusHit = 60;
    suppressionRadiusHit = 24;
    timeToLive = 6;

    explosionEffectRadius = 1.5;
    craterEffects = "GrenadeCrater";
    soundFly[] = {QPATHTOEF(sounds,weapons\grenade\thermalDetClassC_fuse.wss), 1, 5, 20};
    soundSetExplosion[] = {"GrenadeHe_Exp_SoundSet", "GrenadeHe_Tail_SoundSet", "Explosion_Debris_SoundSet"};

    class CamShakeExplode {
        distance = 56;
        duration = 0.8;
        frequency = 20;
        power = 3.2;
    };
};
