class Mode_SemiAuto;

class CfgWeapons {
    class CannonCore;
    class autocannon_35mm: CannonCore {
        class manual;
    };
    class ls_weapon_tx130_aa: autocannon_35mm {
        displayName = "TX-130 Light AA-V Gun";
        displayNameShort = "TX-130 MG";
        author = AUTHOR;
        maxZeroing = 2000;
        magazines[] = {
            "ls_magazine_tx130_AA"
        };
        reloadTime = 5;
        magazineReloadTime = 6;

        class manual: manual {
            textureType = "fullAuto";
            autoFire = 1;
            burst = 2;
            sounds[] = {"StandardSound"};
            soundContinuous = 0;
            soundBurst = 0;
            reloadTime = 0.0545455;
            dispersion = 0.0045;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            displayName = "test";

            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,vehicles\tx130\Saber_MG_shot.wss), 1.5, 1, 2100};
                soundBegin[] = {"begin1", 1};
                // soundsetshot[] = {"Autocannon35mm_Shot_SoundSet", "Autocannon35mm_Tail_SoundSet"};
            };
        };

        class close: manual {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 12;
            burstRangeMax = 28;
            aiRateOfFire = 0.5;
            aiRateOfFireDispersion = 0.5;
            aiRateOfFireDistance = 200;
            minRange = 1;
            minRangeProbab = 0.1;
            midRange = 100;
            midRangeProbab = 0.75;
            maxRange = 400;
            maxRangeProbab = 0.85;
        };

        class short: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 18;
            burstRangeMax = 42;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 300;
            minRange = 200;
            minRangeProbab = 0.3;
            midRange = 400;
            midRangeProbab = 0.85;
            maxRange = 750;
            maxRangeProbab = 0.85;
        };

        class medium: short {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 18;
            burstRangeMax = 42;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 800;
            minRange = 600;
            minRangeProbab = 0.6;
            midRange = 750;
            midRangeProbab = 0.85;
            maxRange = 1250;
            maxRangeProbab = 0.6;
        };

        class far: medium {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 18;
            burstRangeMax = 42;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 1200;
            minRange = 1000;
            minRangeProbab = 0.7;
            midRange = 1250;
            midRangeProbab = 0.6;
            maxRange = 2500;
            maxRangeProbab = 0.1;
        };

    };
    class ls_weapon_tx130_top_ap: autocannon_35mm {
        displayName = "TX-130 AP";
        displayNameShort = "TX-130 AP";
        author = AUTHOR;
        magazines[] = {};
        reloadTime = 5;
        magazineReloadTime = 6;
    };

    class cannon_120mm: CannonCore {
        class GunParticles;
        class TopDown;
    };
    class ls_weapon_tx130_cannon: cannon_120mm {
        author = AUTHOR;
        displayName = "TX-130 cannon";
        displayNameShort = "TX-130";
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss", 2.5118864, 1, 10};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss", 2.5118864, 1, 10};
        magazines[] = {
            "ls_magazine_tx130_cannon"
        };
        reloadTime = 0.1;
        magazineReloadTime = 2;
        modes[] = {
            "player",
            "close",
            "short",
            "medium",
            "far"
        };
        class GunParticles {
            class FirstEffect {
                effectName = "CannonFired";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
            class SecondEffect {
                effectName = "CannonFired";
                positionName = "Usti hlavne 2";
                directionName = "Konec hlavne 2";
            };
        };

        class player: Mode_SemiAuto {
            sounds[] = {
                "StandardSound"
            };
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,vehicles\tx130\Saber_heavy_shot.wss), 3.1622777, 1, 1500};
                soundBegin[] = {"begin1", 1};
            };
            soundContinuous = 0;
            reloadTime = 6;
            magazineReloadTime = 6;
            autoReload = 1;
            autoFire = 0;
            dispersion = 0.00057;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class TopDown: player {
            textureType = "topDown";
            displayName = "$STR_A3_FireMode_TopDown0";
            minRange = 150;
            minRangeProbab = 0.4;
            midRange = 400;
            midRangeProbab = 0.95;
            maxRange = 8000;
            maxRangeProbab = 0.95;
        };
        class close: player {
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 0.5;
            aiRateOfFireDistance = 500;
            minRange = 5;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1000;
            maxRangeProbab = 0.85;
        };
        class short: close {
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 6;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 1000;
            minRange = 500;
            minRangeProbab = 0.3;
            midRange = 1000;
            midRangeProbab = 0.85;
            maxRange = 1500;
            maxRangeProbab = 0.85;
        };
        class medium: close {
            dispersion = 0.0007125;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 8;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 1250;
            minRange = 1000;
            minRangeProbab = 0.6;
            midRange = 1500;
            midRangeProbab = 0.85;
            maxRange = 2000;
            maxRangeProbab = 0.8;
        };
        class far: close {
            dispersion = 0.0007125;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 1;
            aiRateOfFire = 10;
            aiRateOfFireDispersion = 8;
            aiRateOfFireDistance = 1500;
            minRange = 1500;
            minRangeProbab = 0.75;
            midRange = 2000;
            midRangeProbab = 0.8;
            maxRange = 3500;
            maxRangeProbab = 0.05;
        };
    };
};
