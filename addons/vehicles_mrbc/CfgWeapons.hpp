class Mode_SemiAuto;
class Mode_Burst;

class CfgWeapons {
    class HMG_static;
    class MGun;
    class ls_weapon_mrbc: HMG_static {
        scope = 2;
        author = AUTHOR;
        displayName = "MRBC MK-I Turret";

        magazines[] = {"ls_magazine_30mw_500Rnd_blue"};
        maxZeroing = 2000;
        showAimCursorInternal = 0;

        modes[] = {"manual", "close", "short", "medium", "far"};
        muzzles[] = {"this"};
        class manual: MGun {
            reloadTime = 0.0429;
            dispersion = 0.00052;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {"ls_z6_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
            };
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

        class GunParticles {};
    };

    class ls_weapon_mrbc_proxy: ls_weapon_mrbc {
        magazineReloadTime = 0.5;
    };

    class ls_launcher_base;
    class ls_launcher_mrbc_carry: ls_launcher_base {
        scope = 1;
        author = AUTHOR;

        displayName = "Folded MK-I MRBC";

        model = QPATHTOF(ls_turret_mrbc_alternateCarry.p3d);
        picture = QPATHTOF(data\ui\mrbc_carry_ui_ca.paa);

        modes[] = {};

        class ACE_CSW {
            type = "mount";
            deploy = "ls_vehicle_mrbc";
            deployTime = 4;
            pickupTime = 4;
        };
    };

    class ls_weapon_autoTurret_mg: ls_weapon_mrbc {
        scope = 2;
        author = AUTHOR;
        displayName = "Medium Defense Cannon";

        // TODO: Make magazine well
        magazines[] = {
            "ls_magazine_autoTurretMG_120Rnd_red"
        };
        magazineReloadTime = 2;

        class manual: manual {
            class StandardSound: StandardSound {
                soundSetShot[] = {
                    "ls_mediumBlaster_Shot_SoundSet",
                    "ls_mediumBlaster_Tail_SoundSet"
                };
            };
        };
        class close: close {
            class StandardSound: StandardSound {
                soundSetShot[] = {
                    "ls_mediumBlaster_Shot_SoundSet",
                    "ls_mediumBlaster_Tail_SoundSet"
                };
            };
        };
        class short: short {
            class StandardSound: StandardSound {
                soundSetShot[] = {
                    "ls_mediumBlaster_Shot_SoundSet",
                    "ls_mediumBlaster_Tail_SoundSet"
                };
            };
        };
        class medium: medium {
            class StandardSound: StandardSound {
                soundSetShot[] = {
                    "ls_mediumBlaster_Shot_SoundSet",
                    "ls_mediumBlaster_Tail_SoundSet"
                };
            };
        };
        class far: far {
            class StandardSound: StandardSound {
                soundSetShot[] = {
                    "ls_mediumBlaster_Shot_SoundSet",
                    "ls_mediumBlaster_Tail_SoundSet"
                };
            };
        };
    };

    class ls_weapon_acpa_base;
    class ls_weapon_autoTurret_cqc: ls_weapon_acpa_base {
        scope = 1;
        author = AUTHOR;
        displayName = "CQC Close Round Burst";

        // TODO: Make magazine well
        magazines[] = {
            "ls_magazine_autoTurretCQC_15Rnd_red"
        };
    };
};
