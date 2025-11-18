class Mode_SemiAuto;
class Mode_Burst;

class CfgWeapons {
    class mortar_82mm;
    class ls_weapon_mortar_82mm: mortar_82mm {
        displayName = "Mortar Launcher";
        magazines[] = {"ls_5Rnd_82mm_mortar_HE"};

        MORTAR_LAUNCHER_SOUNDS;

        reloadTime = 1.8;
        magazineReloadTime = 3;

        class Single1: Mode_SemiAuto {
            displayName = "$STR_A3_mortar_82mm_single10";
            sounds[] = {"StandardSound"};

            MORTAR_LAUNCHER_SOUNDS;

            reloadTime = 1.3;
            artilleryDispersion = 1.9;
            artilleryCharge = 0.35;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class Single2: Single1 {
            displayName = "$STR_A3_mortar_82mm_single20";
            artilleryCharge = 0.7;
        };
        class Single3: Single1 {
            displayName = "$STR_A3_mortar_82mm_single30";
            artilleryCharge = 1;
        };

        class Burst1: Mode_Burst {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_burst10";
            burst = 4;
            aiBurstTerminable = 1;
            sounds[] = {"StandardSound"};

            MORTAR_LAUNCHER_SOUNDS;

            reloadTime = 1.3;
            soundServo[] = {"", 0.0001, 1};
            soundBurst = 0;
            artilleryDispersion = 2.2;
            artilleryCharge = 0.35;
            minRange = 60;
            minRangeProbab = 0.5;
            midRange = 290;
            midRangeProbab = 0.7;
            maxRange = 665;
            maxRangeProbab = 0.5;
        };
        class Burst2: Burst1 {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_burst20";
            artilleryCharge = 0.7;
            minRange = 230;
            minRangeProbab = 0.4;
            midRange = 1175;
            midRangeProbab = 0.6;
            maxRange = 2660;
            maxRangeProbab = 0.4;
        };
        class Burst3: Burst1 {
            showToPlayer = 0;
            displayName = "$STR_A3_mortar_82mm_burst30";
            artilleryCharge = 1;
            minRange = 540;
            minRangeProbab = 0.3;
            midRange = 2355;
            midRangeProbab = 0.4;
            maxRange = 5500;
            maxRangeProbab = 0.3;
        };
    };

    class ls_weapon_mortar_82mm_proxy: ls_weapon_mortar_82mm {
        magazineReloadTime = 0.5;
    };

    class ls_launcher_base;
    class ls_launcher_mortar_carry_base: ls_launcher_base {
        scope = 0;
        author = AUTHOR;

        displayName = "Mortar Launcher";

        model = QPATHTOF(ls_turret_mortar_alternateCarry.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };

        modes[] = {};

        class ACE_CSW {
            type = "mount";
            deploy = "ls_vehicle_mortar_base";
            deployTime = 4;
            pickupTime = 4;
        };
    };

    class ls_launcher_mortar_carry_gar: ls_launcher_mortar_carry_base {
        scope = 1;
        author = AUTHOR;

        displayName = "Republic Mortar Launcher";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };
        picture = "\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_ca.paa";

        class ACE_CSW: ACE_CSW {
            deploy = "ls_vehicle_mortar_gar";
        };
    };

    class ls_launcher_mortar_carry_cis: ls_launcher_mortar_carry_base {
        scope = 1;
        author = AUTHOR;

        displayName = "CIS Mortar Launcher";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\cis\camo1_co.paa)
        };
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";

        class ACE_CSW: ACE_CSW {
            deploy = "ls_vehicle_mortar_cis";
        };
    };

    class ls_launcher_mortar_carry_mercenary: ls_launcher_mortar_carry_base {
        scope = 1;
        author = AUTHOR;

        displayName = "Mercenary Mortar Launcher";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\mercenary\camo1_co.paa)
        };
        picture = "\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\icon_launch_I_Titan_F_ca.paa";

        class ACE_CSW: ACE_CSW {
            deploy = "ls_vehicle_mortar_mercenary";
        };
    };
};
