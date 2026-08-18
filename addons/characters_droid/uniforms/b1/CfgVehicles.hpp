class ls_droid_b1: ls_droid_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1);

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1.jpg);
    genericNames = "ls_droid_b1";
    identityTypes[] = {"ls_b1BattleDroid"};

    uniformClass = "ls_droidUniform_b1";
    model = QPATHTOF(uniforms\b1\ls_uniform_droid_b1.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };

    magazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_10("ls_magazine_e5")
    };
    respawnMagazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_10("ls_magazine_e5")
    };
    linkedItems[] = {"ls_droidHelmet_b1", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1";

    class HitPoints: HitPoints {
        class HitPelvis: HitPelvis {
            armor = 5;
            passThrough = 0.7;
        };
        class HitDiaphragm: HitDiaphragm {
            armor = 5;
            passThrough = 0.7;
        };
        class HitChest: HitChest {
            armor = 5;
            passThrough = 0.7;
        };
        class HitHands: HitHands {
            armor = 5;
            passThrough = 0.7;
        };
        class HitLegs: HitLegs {
            armor = 5;
            passThrough = 0.7;
        };
        ADD_ACE_HITPOINTS;
        class HitBody: HitBody {};
    };
};
class ls_droid_b1_advanced: ls_droid_b1 {
    author = AUTHOR;

    editorSubcategory = "ls_edsubcat_cis_advancedDroids";
    uniformClass = "ls_droidUniform_b1_advanced";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\advanced\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\advanced\camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b1\data\advanced\camo1.rvmat),
        QPATHTOF(uniforms\b1\data\advanced\camo2.rvmat)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_advanced.jpg);

    linkedItems[] = {"ls_droidHelmet_b1_advanced", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_advanced", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_advanced";

    class HitPoints: HitPoints {
        class HitPelvis: HitPelvis {
            armor = 6;
        };
        class HitDiaphragm: HitDiaphragm {
            armor = 6;
        };
        class HitChest: HitChest {
            armor = 7;
        };
        class HitHands: HitHands {
            armor = 7;
        };
        // class HitBody: HitBody {};
    };
};
class ls_droid_b1_geonosis: ls_droid_b1 {
    author = AUTHOR;

    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosis.jpg);

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_geonosis";
};
class ls_droid_b1_training: ls_droid_b1 {
    author = AUTHOR;

    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_training.jpg);

    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_training";
};

class ls_droid_b1_saboteur: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_saboteur);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_saboteur.jpg);

    ROLE_ENGINEER;

    uniformClass = "ls_droidUniform_b1_saboteur";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\saboteur_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\saboteur_camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_saboteur", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_saboteur", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_saboteur_predef_demo";
};

class ls_droid_b1_firefighter: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_firefighter);

    uniformClass = "ls_droidUniform_b1_firefighter";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\firefighter_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\firefighter_camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_firefighter.jpg);

    weapons[] = {THROW_PUT};
    respawnWeapons[] = {THROW_PUT};
    magazines[] = {ITEM_2("SmokeShell")};
    respawnMagazines[] = {ITEM_2("SmokeShell")};
    linkedItems[] = {"ls_droidHelmet_b1_firefighter", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_firefighter", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_firefighter";
};

class ls_droid_b1_scout: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_scout);

    uniformClass = "ls_droidUniform_b1_scout";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\scout_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\scout_camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_scout.jpg);

    linkedItems[] = {"ls_droidHelmet_b1_scout", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_scout", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1";
};
class ls_droid_b1_scout_geonosis: ls_droid_b1_scout {
    author = AUTHOR;

    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_scout_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_scout_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\scout_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\scout_camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_scout_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_scout_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_geonosis";
};

class ls_droid_b1_marine: ls_droid_b1 {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_marine);

    uniformClass = "ls_droidUniform_b1_marine";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\marine_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_marine.jpg);

    ROLE_AT;

    weapons[] = {"ls_weapon_e5", "ls_weapon_rps6", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rps6", THROW_PUT};
    magazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_rps6_heat_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {"ls_magazine_rps6_heat_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    backpack = "ls_droidBackpack_b1_marine_predef_at";
};

class ls_droid_b1_crew: ls_droid_b1 {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_crew);

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_crew.jpg);

    ROLE_CREWMAN;

    uniformClass = "ls_droidUniform_b1_crew";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\crew_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\crew_camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_crew", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_crew", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_crew";
};
class ls_droid_b1_crew_geonosis: ls_droid_b1_crew {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_crew_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_crew_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\crew_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\crew_camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_crew_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_crew_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_crew_geonosis";
};

class ls_droid_b1_engineer: ls_droid_b1 {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_engineer);

    uniformClass = "ls_droidUniform_b1_engineer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\engineer_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_engineer.jpg);

    ROLE_ENGINEER;

    backpack = "ls_droidBackpack_b1_engineer";
    items[] = {ITEM_3("FirstAidKit"), "ToolKit"};
    respawnItems[] = {ITEM_3("FirstAidKit"), "ToolKit"};
};
class ls_droid_b1_engineer_geonosis: ls_droid_b1_engineer {
    author = AUTHOR;

    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_engineer_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_engineer_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\engineer_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_engineer_geonosis";
};

class ls_droid_b1_grenadier: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier);

    uniformClass = "ls_droidUniform_b1_grenadier";
    hiddenselectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\grenadier_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_grenadier.jpg);

    ROLE_GRENADIER;

    weapons[] = {"ls_weapon_rd4", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_rd4", THROW_PUT};
    magazines[] = {
        ITEM_5("ls_magazine_3Rnd_40mw_IM41"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_5("ls_magazine_3Rnd_40mw_IM41"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    linkedItems[] = {"ls_droidHelmet_b1_grenadier", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_grenadier", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_grenadier";
};
class ls_droid_b1_grenadier_geonosis: ls_droid_b1_grenadier {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_grenadier_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_grenadier_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\grenadier_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_grenadier_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_grenadier_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_grenadier_geonosis";
};
class ls_droid_b1_grenadier_training: ls_droid_b1_grenadier {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_grenadier_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
};
class ls_droid_b1_grenadier_advanced: ls_droid_b1_advanced {
    author = AUTHOR;
    displayName = CSTRING(b1_grenadier);

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_grenadier_advanced.jpg);

    ROLE_GRENADIER;

    weapons[] = {"ls_weapon_rd4", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_rd4", THROW_PUT};
    magazines[] = {
        ITEM_5("ls_magazine_3Rnd_40mw_IM41"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_5("ls_magazine_3Rnd_40mw_IM41"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};

class ls_droid_b1_heavy: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_heavy);

    uniformClass = "ls_droidUniform_b1_heavy";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\heavy_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\heavy_camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavy.jpg);

    ROLE_MG;

    weapons[] = {"ls_weapon_e5c", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_e5c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_e5c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_droidBackpack_b1_heavy";
};
class ls_droid_b1_heavy_geonosis: ls_droid_b1_heavy {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavy_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_heavy_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\heavy_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\heavy_camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_heavy_geonosis";
};
class ls_droid_b1_heavy_training: ls_droid_b1_heavy {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavy_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_training";
};
class ls_droid_b1_heavy_advanced: ls_droid_b1_advanced {
    author = AUTHOR;
    displayName = CSTRING(b1_heavy);

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavy_advanced.jpg);

    ROLE_MG;

    weapons[] = {"ls_weapon_e5c", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_e5c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_e5c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};

class ls_droid_b1_oom_base: ls_droid_b1 {
    scope = 0;
    genericNames = "ls_droid_oom";
    editorSubCategory = "ls_edsubcat_cis_oomDroids";
    backpack = "";
};

class ls_droid_b1_commander: ls_droid_b1_oom_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_commander);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_commander.jpg);

    uniformClass = "ls_droidUniform_b1_commander";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\commander_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };

    ROLE_OFFICER;

    linkedItems[] = {"ls_droidHelmet_b1_commander", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_commander", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_antenna";
};
class ls_droid_b1_commander_geonosis: ls_droid_b1_commander {
    author = AUTHOR;

    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_commander_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_commander_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\commander_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_commander_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_commander_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_antenna_geonosis";
};
class ls_droid_b1_commander_advanced: ls_droid_b1_advanced {
    author = AUTHOR;

    uniformClass = "ls_droidUniform_b1_commander_advanced";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\advanced\commander_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\advanced\camo2_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_commander_advanced.jpg);

    ROLE_OFFICER;

    linkedItems[] = {"ls_droidHelmet_b1_commander_advanced", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_commander_advanced", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_antenna_advanced";
};

class ls_droid_b1_pilot: ls_droid_b1_oom_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_pilot);

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_pilot.jpg);

    ROLE_PILOT;

    uniformClass = "ls_droidUniform_b1_pilot";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\pilot_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    backpack = "ls_droidBackpack_b1_pilot";
};
class ls_droid_b1_pilot_geonosis: ls_droid_b1_pilot {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_pilot_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_pilot_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\pilot_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_pilot_geonosis";
};

class ls_droid_b1_security: ls_droid_b1_oom_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(b1_security);

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_security.jpg);

    uniformClass = "ls_droidUniform_b1_security";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\security_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\camo2_co.paa)
    };
    backpack = "ls_droidBackpack_b1_security";
};
class ls_droid_b1_security_geonosis: ls_droid_b1_security {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_security_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_security_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\security_camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_security_geonosis";
};

class ls_droid_b1_junkyard: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_junkyard);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_junkyard.jpg);

    uniformClass = "ls_droidUniform_b1_junkyard";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\junkyard\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\junkyard\camo2_co.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOF(uniforms\b1\data\junkyard\camo1.rvmat),
        QPATHTOF(uniforms\b1\data\junkyard\camo2.rvmat)
    };

    linkedItems[] = {"ls_droidHelmet_b1_junkyard", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_junkyard", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_junkyard";
};

class ls_droid_b1_hologram: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_hologram);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_hologram.jpg);

    uniformClass = "ls_droidUniform_b1_hologram";
    model = QPATHTOF(uniforms\b1\ls_uniform_droid_b1_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };

    backpack = "ls_droidBackpack_b1_hologram";
    linkedItems[] = {"ls_droidHelmet_b1_hologram", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_hologram", "ls_droidVest", LINKED_ITEMS_DROID};
};

class ls_droid_b1_simulation: ls_droid_b1_hologram {
    author = AUTHOR;
    displayName = CSTRING(b1_simulation);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_simulation.jpg);

    uniformClass = "ls_droidUniform_b1_simulation";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\redHologram_ca.paa)
    };

    backpack = "ls_droidBackpack_b1_simulation";
    linkedItems[] = {"ls_droidHelmet_b1_simulation", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_simulation", "ls_droidVest", LINKED_ITEMS_DROID};
};
