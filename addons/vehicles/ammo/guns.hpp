class ls_20mm_PS56D_HEI: B_20mm {
    displayName = "20mw PS56D HE-I";
    hit = 135;
    indirectHit = 23;
    indirectHitRange = 3;
    explosive= 0.6;
    warheadName = "SAPHEI";
    caliber = 1;
    deflecting = 1;
    cost = 40;
    airFriction = 0;
    timeToLive = 10;
    initSpeed=1030;
    aiAmmoUsageFlags = AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES + AMMO_USAGE_AIRCRAFT + AMMO_USAGE_ARMORED_VEHICLES;
    model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
    effectFly = "ls_plasma_blue";
    tracerColor[] = {"Blue"};
    tracerScale = 1.5;
    tracerStartTime = 0.1;
    tracerEndTime = 20;
    brightness = 100000;
    muzzleEffect = "";
    typicalSpeed = 100;
    allowAgainstInfantry = 1;
    coefGravity = 0;
    waterFriction = 0;
    submunitionAmmo = "";
    submunitionDirectionType = "SubmunitionModelDirection";
    submunitionInitSpeed = 1;
    submunitionParentSpeedCoef = 0;
    submunitionInitialOffset[]= {0, 0, -0.2};
    triggerOnImpact = 1;
    deleteParentWhenTriggered = 0;
    trackLead = 1000;
    trackOversteer = 1000;
    soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01.wss", 3.1622777, 1, 1500};
    soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02.wss", 3.1622777, 1, 1500};
    soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03.wss", 3.1622777, 1, 1500};
    soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04.wss", 3.1622777, 1, 1500};
    multiSoundHit[] = {
        "soundHit1", 0.25,
        "soundHit2", 0.25,
        "soundHit3", 0.25,
        "soundHit4", 0.25
    };
};
