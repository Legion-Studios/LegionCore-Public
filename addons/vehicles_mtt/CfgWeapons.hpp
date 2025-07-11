class Mode_SemiAuto;
class Mode_FullAuto;
class Optics_Armored;

class CfgWeapons {
    class ls_cannon_120mm;
    class ls_weapon_mtt_cannon_120mm_l: ls_cannon_120mm {
        displayname = "75mm MTT Ball Gun";
        magazines[] = {
            "ls_magazine_120mm_30Rnd_HE_red"
        };

        reloadTime = 2.5;
        magazineReloadTime = 6;
        class GunParticles {
            class FirstEffect {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_l_1";
                directionName = "Konec_hlavne_l_1";
            };
            class SecondEffect {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_l_2";
                directionName = "Konec_hlavne_l_2";
            };
        };

        class player: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,vehicles\aat\weapon\main_shot.wss), 3.1622777, 1, 1500};
                soundBegin[] = {"begin1", 1};
            };
            soundContinuous = 0;
            reloadTime = 2.5;
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

    class ls_weapon_mtt_cannon_120mm_r: ls_weapon_mtt_cannon_120mm_l {
        class GunParticles {
            class FirstEffect {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_r_1";
                directionName = "Konec_hlavne_r_1";
            };
            class SecondEffect {
                effectName = "CannonFired";
                positionName = "Usti_hlavne_r_2";
                directionName = "Konec_hlavne_r_2";
            };
        };
    };
};
