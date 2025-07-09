class CfgWeapons {
    class MGun;
    class gatling_20mm;
    class ls_weapon_laati_turret_50mm_he: gatling_20mm {
        scope = 2;
        author = AUTHOR;

        displayName = "LAAT/i Nose Guns (HE)";
        magazines[] = {"ls_magazine_50mm_200Rnd_HE_green"};
        modes[] = {
            "FullAuto",
            "close",
            "short",
            "medium",
        };

        reloadTime = 0.1375;
        magazineReloadTime = 10;
        magazineReloadSwitchPhase = 5;

        class GunParticles {};

        class FullAuto: MGun {
            reloadTime = 0.1375;
            dispersion = 0;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;

            sounds[] = {"StandardSound"};

            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,vehicles\laat\turret_shot.wss), 1.77828, 1, 1300, {2, 35740}};
                soundBegin[] = {"begin1", 1};
            };
        };

        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.1375;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };

        class short: close {
            aiRateOfFireDistance = 300;
            minRange = 50;
            midRange = 150;
            maxRange = 300;
        };

        class medium: close {
            aiRateOfFireDistance = 600;
            minRange = 200;
            midRange = 300;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
    };

    class ls_weapon_laati_turret_50mm_ap: ls_weapon_laati_turret_50mm_he {
        displayName = "LAAT/i Nose Guns (AP)";
        magazines[] = {"ls_magazine_50mm_200Rnd_APFSDS_green"};
    };

    class missiles_DAR;
    class ls_weapon_laati_missiles: missiles_DAR {
        scope = 2;
        author = AUTHOR;
    };
};
