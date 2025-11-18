class ls_weapon_dc15saw: ls_weapon_dc15a_base {
    scope = 2;
    author = AUTHOR;
    displayName = "DC-15SAW Blaster Rifle";
    baseWeapon = "ls_weapon_dc15saw";

    model = QPATHTOF(dc15saw\ls_weapon_dc15saw.p3d);
    hiddenSelections[] = {
        "camo1",
        "magazine"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15a\data\camo1_co.paa),
        QPATHTOF(dc15a\data\mag_co.paa)
    };

    recoil = "recoil_pistol_p07";

    modes[] = {"Single", "FullAuto", "close", "short", "medium"};
    class Single: Single {
        class StandardSound: StandardSound {
            soundSetShot[] = {"ls_dc15l_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class FullAuto: FullAuto {
        reloadTime = 0.12;
        dispersion = 0.0014545;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        class StandardSound: StandardSound {
            soundSetShot[] = {"ls_dc15l_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class close: close {
        class StandardSound: StandardSound {
            soundSetShot[] = {"ls_dc15l_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class short: short {
        class StandardSound: StandardSound {
            soundSetShot[] = {"ls_dc15l_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class medium: medium {
        class StandardSound: StandardSound {
            soundSetShot[] = {"ls_dc15l_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };

    class OpticsModes {
        class sight {
            opticsID = 1;
            useModelOptics = 1;
            opticsPPEffects[] = {};
            opticsDisablePeripherialVision = 0;
            opticsZoomMin = 0.25;
            opticsZoomMax = 0.5;
            opticsZoomInit = 0.75;
            discreteInitIndex = 0;
            distanceZoomMin = 200;
            distanceZoomMax = 200;
            memoryPointCamera = "eye";
            visionMode[] = {};
            opticsFlare = 0;
            cameraDir = "";
        };
    };
};

class ls_weapon_dc15saw_wooden: ls_weapon_dc15saw {
    scope = 2;
    author = AUTHOR;
    displayName = "DC-15SAW Blaster Rifle (Wooden)";

    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15a\data\camo1_wooden_co.paa),
        QPATHTOF(dc15a\data\mag_co.paa)
    };
};
