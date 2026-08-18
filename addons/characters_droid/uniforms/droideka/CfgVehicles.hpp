class ls_droid_droideka_base: ls_droid_base {
    scope = 1;
    author = AUTHOR;
    displayName = CSTRING(droideka);

    EGVAR(droids,hasShield) = 1;
    ace_dragging_cloneClass = "ls_droid_droideka_clone";

    moves = "CfgMovesDroideka_ls";
    movesFatigue = "CfgMovesDroideka_ls";
    gestures = "CfgGesturesDroideka_ls";
    triggerAnim = "addons\animations\data\battledroids\ls_droideka\droideka_recoil.rtm";
    uniformClass = "ls_droidUniform_droideka";
    nakedUniform = "ls_droidUniform_droideka";
    model = QPATHTOF(uniforms\droideka\ls_uniform_droideka.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {QPATHTOF(uniforms\droideka\data\camo1_co.paa), QPATHTOF(uniforms\droideka\data\camo2_co.paa)};

    boneHead = "head";
    boneHeadCutScene = "";
    boneLEye = "";
    boneLEyelidDown = "";
    boneLEyelidUp = "";
    BoneLPupil = "";
    bonePrimaryWeapon = "weapon";
    boneREye = "";
    boneREyelidDown = "";
    boneREyelidUp = "";
    boneRPupil = "";
    handGunBone = "weapon";

    breathingBubblesEffect = "";
    breathingBubblesPoint = "";
    breathingBubblesPointDir = "";

    faction = "ls_cis";
    editorSubcategory = "ls_edsubcat_cis_standardDroids";

    identityTypes[] = {"ls_head_droideka", "ls_voice_none"};

    picture = QPATHTOF(data\ui\droideka_icon_side_ca.paa);
    role = "MachineGunner";
    icon = QPATHTOF(data\ui\droideka_icon_ca.paa);
    nameSound = "veh_infantry_MG_s";
    textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
    textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";

    extCameraPosition[] = {0.5, 1, -2};

    weapons[] = {"ls_weapon_wristblaster_droideka"};
    respawnWeapons[] = {"ls_weapon_wristblaster_droideka"};
    magazines[] = {ITEM_4("ls_magazine_wristblaster_droideka")};
    respawnMagazines[] = {ITEM_4("ls_magazine_wristblaster_droideka")};
    linkedItems[] = {LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {LINKED_ITEMS_DROID};

    faceType = "ls_droideka";
    genericNames = "ls_droid_droideka";

    class ViewPilot: ViewPilot {
        maxAngleY = 100;
        minAngleY = -100;
    };

    #include "\ls\core\addons\characters_droid\cfg\droidekaSounds.hpp"

    #define DROIDEKA_ARMOR 30
    class HitPoints: HitPoints {
        class HitFace: HitFace {
            armor = DROIDEKA_ARMOR;
        };
        class HitNeck: HitNeck {
            armor = DROIDEKA_ARMOR;
        };
        class HitHead: HitHead {
            armor = DROIDEKA_ARMOR;
        };
        class HitAbdomen: HitAbdomen {
            armor = DROIDEKA_ARMOR;
        };
        class HitDiaphragm: HitDiaphragm {
            armor = DROIDEKA_ARMOR;
        };
        class HitChest: HitChest {
            armor = DROIDEKA_ARMOR;
        };
        class HitArms: HitArms {
            armor = DROIDEKA_ARMOR;
        };
        class HitLegs: HitLegs {
            armor = DROIDEKA_ARMOR;
        };
        ADD_ACE_HITPOINTS;
    };
    #undef DROIDEKA_ARMOR

    class Wounds {
        tex[] = {};
        mat[] = {
            QPATHTOF2(uniforms\droideka\data\camo1.rvmat),
            QPATHTOF2(uniforms\droideka\data\camo1_injury.rvmat),
            QPATHTOF2(uniforms\droideka\data\camo1_injury.rvmat),
            QPATHTOF2(uniforms\droideka\data\camo2.rvmat),
            QPATHTOF2(uniforms\droideka\data\camo2_injury.rvmat),
            QPATHTOF2(uniforms\droideka\data\camo2_injury.rvmat),
            "a3\characters_f\heads\data\hl_white.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
        };
    };
};
class ls_droid_droideka: ls_droid_droideka_base {
    scope = 2;
    author = AUTHOR;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_droideka.jpg);
};
class ls_droid_droideka_noShield: ls_droid_droideka_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(droideka_noShield);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_droideka.jpg);

    EGVAR(droids,hasShield) = 0;
};

class ls_droid_droideka_training: ls_droid_droideka {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    uniformClass = "ls_droidUniform_droideka_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\droideka\data\training\camo1_co.paa),
        QPATHTOF(uniforms\droideka\data\training\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_droideka_training.jpg);
};
class ls_droid_droideka_noShield_training: ls_droid_droideka_noShield {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    uniformClass = "ls_droidUniform_droideka_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\droideka\data\training\camo1_co.paa),
        QPATHTOF(uniforms\droideka\data\training\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_droideka_training.jpg);
};

class ls_droid_droideka_imperial: ls_droid_droideka {
    author = AUTHOR;
    faction = "ls_imperial";
    uniformClass = "ls_droidUniform_droideka_imperial";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\droideka\data\imperial\camo1_co.paa),
        QPATHTOF(uniforms\droideka\data\imperial\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_droideka_imperial.jpg);
};
class ls_droid_droideka_noShield_imperial: ls_droid_droideka_noShield {
    author = AUTHOR;
    faction = "ls_imperial";
    uniformClass = "ls_droidUniform_droideka_imperial";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\droideka\data\imperial\camo1_co.paa),
        QPATHTOF(uniforms\droideka\data\imperial\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_droideka_imperial.jpg);
};

class ls_droid_droideka_junkyard: ls_droid_droideka {
    author = AUTHOR;
    displayName = CSTRING(droideka_junkyard);
    uniformClass = "ls_droidUniform_droideka_junkyard";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\droideka\data\junkyard\camo1_co.paa),
        QPATHTOF(uniforms\droideka\data\junkyard\camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\droideka\data\junkyard\camo1.rvmat),
        QPATHTOF(uniforms\droideka\data\junkyard\camo2.rvmat)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_droideka_junkyard.jpg);
};
class ls_droid_droideka_noShield_junkyard: ls_droid_droideka_noShield {
    author = AUTHOR;
    displayName = CSTRING(droideka_junkyard_noShield);
    uniformClass = "ls_droidUniform_droideka_junkyard";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\droideka\data\junkyard\camo1_co.paa),
        QPATHTOF(uniforms\droideka\data\junkyard\camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\droideka\data\junkyard\camo1.rvmat),
        QPATHTOF(uniforms\droideka\data\junkyard\camo2.rvmat)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_droideka_junkyard.jpg);
};
