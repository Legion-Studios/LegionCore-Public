class Mode_SemiAuto;

class CfgWeapons {
    // Common vehicle weapons
    class GMG_F;
    class CMFlareLauncher;
    class ls_weapon_CMFlareLauncher: CMFlareLauncher {
        magazines[] = {
            "60Rnd_CMFlareMagazine",
            "120Rnd_CMFlareMagazine",
            "240Rnd_CMFlareMagazine",
            "60Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "192Rnd_CMFlare_Chaff_Magazine",
            "168Rnd_CMFlare_Chaff_Magazine",
            "300Rnd_CMFlare_Chaff_Magazine",
            "ls_mag_60rnd_CMFlare_red",
            "ls_mag_120rnd_CMFlare_red",
            "ls_mag_240rnd_CMFlare_red",
            "ls_mag_60rnd_CMFlareChaff_red",
            "ls_mag_120rnd_CMFlareChaff_red",
            "ls_mag_168rnd_CMFlareChaff_red",
            "ls_mag_192rnd_CMFlareChaff_red",
            "ls_mag_240rnd_CMFlareChaff_red",
            "ls_mag_300rnd_CMFlareChaff_red",
            "ls_mag_60rnd_CMFlare_yellow",
            "ls_mag_120rnd_CMFlare_yellow",
            "ls_mag_240rnd_CMFlare_yellow",
            "ls_mag_60rnd_CMFlareChaff_yellow",
            "ls_mag_120rnd_CMFlareChaff_yellow",
            "ls_mag_168rnd_CMFlareChaff_yellow",
            "ls_mag_192rnd_CMFlareChaff_yellow",
            "ls_mag_240rnd_CMFlareChaff_yellow",
            "ls_mag_300rnd_CMFlareChaff_yellow",
            "ls_mag_60rnd_CMFlare_green",
            "ls_mag_120rnd_CMFlare_green",
            "ls_mag_240rnd_CMFlare_green",
            "ls_mag_60rnd_CMFlareChaff_green",
            "ls_mag_120rnd_CMFlareChaff_green",
            "ls_mag_168rnd_CMFlareChaff_green",
            "ls_mag_192rnd_CMFlareChaff_green",
            "ls_mag_240rnd_CMFlareChaff_green",
            "ls_mag_300rnd_CMFlareChaff_green",
            "ls_mag_60rnd_CMFlare_blue",
            "ls_mag_120rnd_CMFlare_blue",
            "ls_mag_240rnd_CMFlare_blue",
            "ls_mag_60rnd_CMFlareChaff_blue",
            "ls_mag_120rnd_CMFlareChaff_blue",
            "ls_mag_168rnd_CMFlareChaff_blue",
            "ls_mag_192rnd_CMFlareChaff_blue",
            "ls_mag_240rnd_CMFlareChaff_blue",
            "ls_mag_300rnd_CMFlareChaff_blue",
            "ls_mag_60rnd_CMFlare_cyan",
            "ls_mag_120rnd_CMFlare_cyan",
            "ls_mag_240rnd_CMFlare_cyan",
            "ls_mag_60rnd_CMFlareChaff_cyan",
            "ls_mag_120rnd_CMFlareChaff_cyan",
            "ls_mag_168rnd_CMFlareChaff_cyan",
            "ls_mag_192rnd_CMFlareChaff_cyan",
            "ls_mag_240rnd_CMFlareChaff_cyan",
            "ls_mag_300rnd_CMFlareChaff_cyan",
            "ls_mag_60rnd_CMFlare_purple",
            "ls_mag_120rnd_CMFlare_purple",
            "ls_mag_240rnd_CMFlare_purple",
            "ls_mag_60rnd_CMFlareChaff_purple",
            "ls_mag_120rnd_CMFlareChaff_purple",
            "ls_mag_168rnd_CMFlareChaff_purple",
            "ls_mag_192rnd_CMFlareChaff_purple",
            "ls_mag_240rnd_CMFlareChaff_purple",
            "ls_mag_300rnd_CMFlareChaff_purple"
        };
    };

    class CannonCore;
    class cannon_120mm: CannonCore {
        class GunParticles;
        class TopDown;
    };

    class Cannon_30mm_Plane_CAS_02_F: CannonCore {
        class LowROF;
    };

    class MissileLauncher;

    class ls_cannon_120mm: cannon_120mm {
        scope = 1;
        displayName = "120mm Cannon";
        reloadSound[] = {"\A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss", 2.5118864, 1, 10};
        reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01.wss", 2.5118864, 1, 10};
        magazines[] = {
            "ls_magazine_120mm_30Rnd_HE_blue",
            "ls_magazine_120mm_30Rnd_HE_red",
            "ls_magazine_120mm_30Rnd_HE_green",
            "ls_magazine_120mm_30Rnd_APFSDS_red",
            "ls_magazine_120mm_30Rnd_APFSDS_red",
            "ls_magazine_120mm_30Rnd_APFSDS_green"
        };
        reloadTime = 6;
        magazineReloadTime = 6;
        autoReload = 1;
        modes[] = {"player", "close", "short", "medium", "far"};

        class GunParticles {
            class FirstEffect {
                effectName = "CannonFired";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
        };

        class player: Mode_SemiAuto {
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,vehicles\aat\weapon\main_shot.wss), 3.1622777, 1, 1500};
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

    class ls_gmg_40mm: GMG_F {
        scope = 1;
        displayName = "Anti-personnel 40mm HE";
        magazines[] = {
            "ls_magazine_40mm_50Rnd_G_blue",
            "ls_magazine_40mm_50Rnd_G_red",
            "ls_magazine_40mm_50Rnd_G_green"
        };
        reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons_static\Static_GMG\reload_static_GMG.wss", 0.8912509, 1, 20};

        class GunClouds {};
        class GunParticles {
            class effect1 {
                positionName = "gun_driver_l";
                directionName = "gun_driver_l_2";
                effectName = "GrenadeLauncherCloud";
            };
            class effect2 {
                positionName = "gun_driver_r";
                directionName = "gun_driver_r_2";
                effectName = "GrenadeLauncherCloud";
            };
        };
        maxZeroing = 2000;

        modes[] = {"manual", "close", "short", "medium", "far"};
        class manual: GMG_F {
            displayName = "$STR_A3_GMG_20mm0";
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,vehicles\aat\weapon\launcher_shot_ext.wss), 1.1220185, 1, 1200};
                soundBegin[] = {"begin1", 1};
            };
            soundContinuous = 0;
            soundBurst = 0;
            reloadTime = 0.24;
            dispersion = 0.0038;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 4;
            burstRangeMax = 6;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 50;
            minRange = 16;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 400;
            maxRangeProbab = 0.2;
        };
        class short: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 3;
            burstRangeMax = 5;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 200;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.7;
        };
        class medium: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 2;
            burstRangeMax = 5;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 700;
            minRange = 700;
            minRangeProbab = 0.7;
            midRange = 1000;
            midRangeProbab = 0.8;
            maxRange = 1500;
            maxRangeProbab = 0.75;
        };
        class far: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 3;
            aiRateOfFire = 4;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 1000;
            minRange = 1000;
            minRangeProbab = 0.8;
            midRange = 1500;
            midRangeProbab = 0.75;
            maxRange = 2000;
            maxRangeProbab = 0.1;
        };
    };

    class MGun;
    class LMG_RCWS;
    class ls_weapon_lmg_127mm: LMG_RCWS {
        scope = 1;
        author = AUTHOR;

        displayName = "12.7mm Turret";

        magazines[] = {
            "ls_magazine_127x99_500Rnd_blue",
            "ls_magazine_127x99_500Rnd_red",
            "ls_magazine_127x99_500Rnd_green"
        };

        maxZeroing = 2000;
        showAimCursorInternal = 0;

        modes[] = {"manual", "close", "short", "medium", "far"};

        class manual: MGun {
            displayName = "12.7mm Turret";
            textureType = "fullAuto";

            reloadTime = 0.1;
            dispersion = 0.0012;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;

            soundContinuous = 0;
            soundBurst = 0;
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,vehicles\aat\weapon\main_shot.wss), 1.5848932, 1, 2100};
                soundBegin[] = {"begin1", 1};
            };
        };

        class close: manual {
            showToPlayer = 0;
            burst = 8;
            burstRangeMax = 16;

            aiBurstTerminable = 1;
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

        class GunParticles {
            class effect1 {
                directionName = "konec hlavne";
                positionName = "usti hlavne";
                effectName = "MachineGunCloud";
            };
        };
    };
    DEPRECATED(ls_lmg_127,ls_weapon_lmg_127mm);

    class ls_speeder_AP: GMG_F {
        scope = 1;
        displayName = "Anti-personnel HE Plasma";
        magazines[] = {
            "ls_magazine_speederHE_belt"
        };
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\reload_static_GMG.wss",0.8912509,1,20};
        class GunClouds {};
        class GunParticles {
            class effect1 {
                positionName = "gun_driver_l";
                directionName = "gun_driver_l_2";
                effectName = "GrenadeLauncherCloud";
            };
            class effect2 {
                positionName = "gun_driver_r";
                directionName = "gun_driver_r_2";
                effectName = "GrenadeLauncherCloud";
            };
        };
        maxZeroing = 2000;
        modes[] = {"manual","close","short","medium","far"};

        class manual: GMG_F {
            displayName = "$STR_A3_GMG_20mm0";
            sounds[] = {"StandardSound"};
            class StandardSound {
                begin1[] = {QPATHTOEF(sounds,vehicles\barc\shot.wss),1.1220185,1.0,1200};
                soundBegin[] = {"begin1",1};
            };
            soundContinuous = 0;
            soundBurst = 0;
            reloadTime = 0.24;
            dispersion = 0.0038;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 4;
            burstRangeMax = 6;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 50;
            minRange = 16;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 400;
            maxRangeProbab = 0.2;
        };
        class short: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 3;
            burstRangeMax = 5;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 200;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.7;
        };
        class medium: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 2;
            burstRangeMax = 5;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 700;
            minRange = 700;
            minRangeProbab = 0.7;
            midRange = 1000;
            midRangeProbab = 0.8;
            maxRange = 1500;
            maxRangeProbab = 0.75;
        };
        class far: close {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 3;
            aiRateOfFire = 4;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 1000;
            minRange = 1000;
            minRangeProbab = 0.8;
            midRange = 1500;
            midRangeProbab = 0.75;
            maxRange = 2000;
            maxRangeProbab = 0.1;
        };
    };

    #include "weapons\guns.hpp"
    #include "weapons\missiles.hpp"
};
