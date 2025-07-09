class ls_weapon_AD3M_AAM: MissileLauncher {
    displayName = "AD-3M AAM";
    reloadTime = 2.5;
    magazineReloadTime = 5;
    cursor = "EmptyCursor";
    cursoraim = "EmptyCursor";
    reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher.wss", 0.8912509, 0.825, 10};
    sounds[] = {"StandardSound"};
    class StandardSound {
        begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan", 1.4125376, 0.5, 1100};
        soundBegin[] = {"begin1", 1};
        soundSetShot[] = {"Launcher_Vorona_Shot_SoundSet", "Launcher_Vorona_Tail_SoundSet"};
    };
    holdsterAnimValue = 1;
    soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss", 1, 0.675,700};
    lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan.wss", 0.56234133, 1};
    lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan.wss", 0.56234133, 2.5};
    magazines[] = {
        "ls_magazine_AD3M_3Rnd_pylon"
    };
    minRange = 50;
    minRangeProbab = 0.4;
    midRange = 500;
    midRangeProbab = 0.85;
    maxRange = 2000;
    maxRangeProbab = 0.85;
    aiRateOfFire = 24;
    aiRateOfFireDistance = 2000;
    aiRateOfFireDispersion = -16;
    canLock = 2;
    lockAcquire = 0;
    weaponLockDelay = 3.5;
    weaponLockSystem = 8;
    textureType = "semi";
};

class ls_weapon_148mw_K2M_ATGM: MissileLauncher {
    displayName = "K-2M Fletch ATGM";
    scope = 2;
    reloadTime = 0.5;
    magazineReloadTime = 5;
    ballisticsComputer = 0;
    reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher.wss", 0.8912509, 0.825, 10};
    sounds[] = {
        "StandardSound"
    };
    class StandardSound {
        begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan", 1.4125376, 0.5, 1100};
        soundBegin[] = {"begin1", 1};
        soundSetShot[] = {"Launcher_Vorona_Shot_SoundSet", "Launcher_Vorona_Tail_SoundSet"};
    };
    holdsterAnimValue = 1;
    soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly.wss", 1, 0.675,700};
    lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan.wss", 0.56234133, 1};
    lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan.wss", 0.56234133, 2.5};
    magazines[] = {
        "ls_magazine_148mm_4Rnd_Fletch"
    };
    minRange = 50;
    minRangeProbab = 0.4;
    midRange = 500;
    midRangeProbab = 0.85;
    maxRange = 2000;
    maxRangeProbab = 0.85;
    aiRateOfFire = 24;
    aiRateOfFireDistance = 2000;
    aiRateOfFireDispersion = -16;
    canLock = 0;
    weaponLockSystem = 0;
    textureType = "semi";
};
