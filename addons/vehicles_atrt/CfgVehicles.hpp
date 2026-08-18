class CfgVehicles {
    class ls_blufor_unit_base;
    class ls_vehicle_atrt_base: ls_blufor_unit_base {
        scope = 1;
        author = AUTHOR;
        displayName = CSTRING(displayName);

        faction = "ls_gar";
        editorSubcategory = "ls_edsubcat_walkers";

        moves = "CfgMovesAtrt_ls";
        gestures = "";

        boneHead = "";
        boneHeadCutScene = "";
        boneLEye = "";
        boneLEyelidDown = "";
        boneLEyelidUp = "";
        boneLPupil = "";
        bonePrimaryWeapon = "turret.001";
        boneREye = "";
        boneREyelidDown = "";
        boneREyelidUp = "";
        boneRPupil = "";

        dustBackLeftPos = "";
        dustBackRightPos = "";
        dustFrontLeftPos = "";
        dustFrontRightPos = "";

        handGunBone = "turret.001";
        launcherBone = "turret.001";
        triggerAnim = "";
        weaponBone = "turret.001";

        leftHip = "";
        leftShoulder = "";
        leftWrist = "";
        leftFoot []= {"leg_l8"};
        leftHeel = "leg_l8";
        leftLegFromKnee[] = {"leg_L", 0,"leg_L2", .20,"leg_L3", .65,"leg_L4", .85,"leg_L5", 1,"leg_L6", 1,"leg_L7", 1,"leg_L8", 1,};
        leftLegPoints[] = {"leg_L","leg_L2","leg_L3","leg_L4","leg_L5","leg_L6","leg_L7","leg_L8",};
        leftLegToKnee[] = {"leg_L", 0,"leg_L2", .20,"leg_L3", .65,"leg_L4", .85,"leg_L5", 1,"leg_L6", 1,"leg_L7", 1,"leg_L8", 1,};

        rightHip = "";
        rightShoulder = "";
        rightWrist = "";
        rightFoot []= {"leg_r8"};
        rightHeel = "leg_r8";
        rightLegFromKnee[] = {"leg_R",  0,"leg_R2", .20,"leg_R3", .65,"leg_R4", .85,"leg_R5", 1,"leg_R6", 1,"leg_R7", 1,"leg_R8", 1,};
        rightLegPoints[] = {"leg_R","leg_R2","leg_R3","leg_R4","leg_R5","leg_R6","leg_R7","leg_R8",};
        rightLegToKnee[] = {"leg_R",  0,"leg_R2", .20,"leg_R3", .65,"leg_R4", .85,"leg_R5", 1,"leg_R6", 1,"leg_R7", 1,"leg_R8", 1,};

        model = QPATHTOF(ls_vehicle_atrt.p3d);
        uniformClass = "ls_uniform_atrt";
        nakedUniform = "ls_uniform_atrt";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa),
            QPATHTOF(data\camo2_co.paa),
            QPATHTOF(data\camo3_co.paa),
            QPATHTOF(data\camo4_co.paa)
        };

        icon = QPATHTOF(data\ui\atrt_icon_ca.paa);
        picture = QPATHTOF(data\ui\atrt_icon_side_ca.paa);

        extCameraPosition[] = {0.5, 1, -3};
        identityTypes[] = {"ls_head_atrt", "ls_voice_none"};
        faceType = "ls_atrt";

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";

        weapons[] = {"ls_weapon_atrt_laserCannon"};
        respawnWeapons[] = {"ls_weapon_atrt_laserCannon"};
        magazines[] = {ITEM_4("ls_magazine_atrt_laserCannon")};
        respawnMagazines[] = {ITEM_4("ls_magazine_atrt_laserCannon")};
        linkedItems[] = {LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {LINKED_ITEMS_RADIO};

        #include "\ls\core\addons\vehicles_atrt\cfg\atrtSounds.hpp"
    };
    class ls_vehicle_atrt: ls_vehicle_atrt_base {
        scope = 2;
        author = AUTHOR;

        ls_crew = "ls_clone_phase2_standard_atrtDriver";
    };
    class ls_vehicle_atrt_rotaryBlaster: ls_vehicle_atrt {
        author = AUTHOR;
        displayName = CSTRING(rotaryBlaster_displayName);

        weapons[] = {"ls_weapon_atrt_rotaryBlaster"};
        respawnWeapons[] = {"ls_weapon_atrt_rotaryBlaster"};
        magazines[] = {ITEM_2("ls_magazine_z6")};
        respawnMagazines[] = {ITEM_2("ls_magazine_z6")};
    };
    class ls_vehicle_atrt_flamethrower: ls_vehicle_atrt {
        scope = 1;
        author = AUTHOR;
        displayName = CSTRING(flamethrower_displayName);
    };

    LEGION_ATRT(41strb,ls_clone_phase2_41strb_atrtDriver);

    class Lamps_base_f;
    class ls_lighting_default: Lamps_base_f {
        class Reflectors;
    };
    class ls_lighting_whiteHigh: ls_lighting_default {
        class Reflectors: Reflectors {
            class Light_1;
        };
    };
    class ls_lighting_atrtWhite: ls_lighting_whiteHigh {
        author = AUTHOR;
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                intensity = 3000;
            };
        };
    };

    class ls_lighting_redHigh: ls_lighting_default {
        class Reflectors: Reflectors {
            class Light_1;
        };
    };
    class ls_lighting_atrtRed: ls_lighting_redHigh {
        author = AUTHOR;
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                intensity = 3000;
            };
        };
    };

    class ls_lighting_blueHigh: ls_lighting_default {
        class Reflectors: Reflectors {
            class Light_1;
        };
    };
    class ls_lighting_atrtBlue: ls_lighting_blueHigh {
        author = AUTHOR;
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                intensity = 3000;
            };
        };
    };
};
