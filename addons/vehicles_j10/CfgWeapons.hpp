class CfgWeapons {
    class HMG_static;
    class MGun;
    class ls_weapon_j10: HMG_static {
        scope = 1;
        displayName = "J-10 Dual Blaster Cannon";
        type = TYPE_WEAPON_VEHICLE;  // Allow ace vehicle weapon reloading
        magazines[] = {
            "ls_magazine_30mw_500Rnd_red"
        };
        magazineReloadTime = 6;
        maxZeroing = 2000;
        showAimCursorInternal = 1;
        class GunParticles {};
        class manual: MGun {
            displayName = "J-10 Dual Blaster Cannon";
            sounds[] = {"StandardSound"};
            class StandardSound {
                weaponSoundEffect = "";
                begin1[] = {QPATHTOEF(sounds,weapons\ls150\shot1.wss), 1, 1, 1800};
                soundBegin[] = {"begin1", 1};
            };
            reloadTime = 0.05;
            dispersion = 0.00052;
        };
        class close: manual {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 8;
            burstRangeMax = 16;
            aiRateOfFire = 0.5;
            aiRateOfFireDispersion = 1.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
        };
        class short: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 6;
            burstRangeMax = 16;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 150;
            minRange = 100;
            minRangeProbab = 0.7;
            midRange = 400;
            midRangeProbab = 0.75;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class medium: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 4;
            burstRangeMax = 12;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 400;
            minRange = 400;
            minRangeProbab = 0.75;
            midRange = 800;
            midRangeProbab = 0.7;
            maxRange = 1500;
            maxRangeProbab = 0.1;
        };
        class far: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 3;
            burstRangeMax = 12;
            aiRateOfFire = 4;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 800;
            minRange = 800;
            minRangeProbab = 0.6;
            midRange = 1500;
            midRangeProbab = 0.25;
            maxRange = 2000;
            maxRangeProbab = 0.05;
        };
    };

    class ls_weapon_j10_proxy: ls_weapon_j10 {
        magazineReloadTime = 0.5;
    };
};
