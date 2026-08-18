class ls_weapon_atrt_laserCannon_base: ls_weapon_atrt_base {
    displayName = CSTRING(laserCannon_displayName);
    baseWeapon = "ls_weapon_atrt_laserCannon";

    model = QPATHTOF(laserCannon\ls_weapon_atrt_laserCannon.p3d);
    // hiddenSelectionsTextures[] = {QPATHTOF(data\ui\laserCannon\camo1_co.paa)};
    // picture = QPATHTOF(data\ui\laserCannon_ui_ca.paa);

    magazines[] = {"ls_magazine_atrt_laserCannon"};
    magazineWell[] = {"ls_magwell_atrt", "ls_magwell_atrt_laserCannon"};

    muzzles[] = {"this"};
    modes[] = {"FullAuto", "close", "short"};
    class FullAuto: Mode_FullAuto {
        reloadTime = RPM(120);

        minRange = 0;
        minRangeProbab = 0.3;
        midRange = 5;
        midRangeProbab = 0.7;
        maxRange = 10;
        maxRangeProbab = 0.04;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dc15a_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class close: FullAuto {
        showToPlayer = 0;
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 50;
        burst = 3;

        minRange = 10;
        minRangeProbab = 0.05;
        midRange = 20;
        midRangeProbab = 0.7;
        maxRange = 50;
        maxRangeProbab = 0.04;
    };
    class short: close {
        aiRateOfFire = 2;
        aiRateOfFireDistance = 300;
        burst = 5;

        minRange = 50;
        minRangeProbab = 0.4;
        midRange = 75;
        midRangeProbab = 0.7;
        maxRange = 100;
        maxRangeProbab = 0.04;
    };
};
class ls_weapon_atrt_laserCannon: ls_weapon_atrt_laserCannon_base {
    scope = 1;
    author = AUTHOR;
};
