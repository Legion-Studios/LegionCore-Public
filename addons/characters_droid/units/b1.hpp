class ls_droid_b1_breacher: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_breacher);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_breacher.jpg);

    weapons[] = {"ls_weapon_acpa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_acpa", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_acpa"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_acpa"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};
class ls_droid_b1_breacher_geonosis: ls_droid_b1_breacher {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_breacher_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
};
class ls_droid_b1_breacher_training: ls_droid_b1_breacher {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_breacher_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
};
class ls_droid_b1_breacher_advanced: ls_droid_b1_advanced {
    author = AUTHOR;
    displayName = CSTRING(b1_breacher);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_breacher_advanced.jpg);

    weapons[] = {"ls_weapon_acpa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_acpa", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_acpa"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_acpa"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};

class ls_droid_b1_marksman: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_marksman);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_marksman.jpg);

    ROLE_SNIPER;

    weapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    respawnweapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_mercenarySniper"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_mercenarySniper"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};
class ls_droid_b1_marksman_geonosis: ls_droid_b1_marksman {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_marksman_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
};
class ls_droid_b1_marksman_training: ls_droid_b1_marksman {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_marksman_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
};
class ls_droid_b1_marksman_advanced: ls_droid_b1_advanced {
    author = AUTHOR;
    displayName = CSTRING(b1_sniper);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_marksman_advanced.jpg);

    ROLE_SNIPER;

    weapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    respawnweapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    magazines[] = {
        ITEM_6("ls_magazine_mercenarySniper"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_mercenarySniper"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
};

class ls_droid_b1_squadLeader: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_squadLeader);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_squadLeader.jpg);

    ROLE_LEADER;

    backpack = "ls_droidBackpack_b1_antenna";
};
class ls_droid_b1_squadLeader_geonosis: ls_droid_b1_squadLeader {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_squadLeader_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_antenna_geonosis";
};
class ls_droid_b1_squadLeader_training: ls_droid_b1_squadLeader {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_squadLeader_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_antenna_training";
};
class ls_droid_b1_squadLeader_advanced: ls_droid_b1_advanced {
    author = AUTHOR;
    displayName = CSTRING(b1_squadLeader);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_squadLeader_advanced.jpg);

    linkedItems[] = {"ls_droidHelmet_b1_commander_advanced", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_commander_advanced", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_antenna_advanced";
};

class ls_droid_b1_at: ls_droid_b1 {
    author = AUTHOR;
    displayName = CSTRING(b1_AT);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_at.jpg);

    ROLE_AT;

    weapons[] = {"ls_weapon_e5", "ls_weapon_rps6", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rps6", THROW_PUT};
    magazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_rps6_heat_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_rps6_heat_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_droidBackpack_b1_predef_at";
};
class ls_droid_b1_at_geonosis: ls_droid_b1_at {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_at_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_geonosis_predef_at";
};
class ls_droid_b1_at_training: ls_droid_b1_at {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_at_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_training_predef_at";
};
class ls_droid_b1_at_advanced: ls_droid_b1_advanced {
    author = AUTHOR;
    displayName = CSTRING(b1_AT);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_at_advanced.jpg);

    ROLE_AT;

    weapons[] = {"ls_weapon_e5", "ls_weapon_rps6", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rps6", THROW_PUT};
    magazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_rps6_heat_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_rps6_heat_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_droidBackpack_b1_advanced_predef_at";
};

class ls_droid_b1_heavyAT: ls_droid_b1_at {
    author = AUTHOR;
    displayName = CSTRING(b1_heavyAT);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAT.jpg);

    weapons[] = {"ls_weapon_e5", "ls_weapon_e60r_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_e60r_at", THROW_PUT};
    magazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_e60r_at_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_e60r_at_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_droidBackpack_b1_predef_heavyAT";
};
class ls_droid_b1_heavyAT_geonosis: ls_droid_b1_heavyAT {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAT_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_geonosis_predef_heavyAT";
};
class ls_droid_b1_heavyAT_training: ls_droid_b1_heavyAT {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAT_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_training_predef_heavyAT";
};
class ls_droid_b1_heavyAT_advanced: ls_droid_b1_advanced {
    author = AUTHOR;
    displayName = CSTRING(b1_heavyAT);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAT_advanced.jpg);

    weapons[] = {"ls_weapon_e5", "ls_weapon_e60r_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_e60r_at", THROW_PUT};
    magazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_e60r_at_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_e60r_at_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_droidBackpack_b1_advanced_predef_heavyAT";
};

class ls_droid_b1_heavyAA: ls_droid_b1_at {
    author = AUTHOR;
    displayName = CSTRING(b1_heavyAA);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAA.jpg);

    weapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    magazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_e60r_aa_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_e60r_aa_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_droidBackpack_b1_predef_heavyAA";
};
class ls_droid_b1_heavyAA_geonosis: ls_droid_b1_heavyAA {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAA_geonosis.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_geonosis_predef_heavyAA";
};
class ls_droid_b1_heavyAA_training: ls_droid_b1_heavyAA {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAA_training.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", "ls_droidVest", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_training_predef_heavyAA";
};
class ls_droid_b1_heavyAA_advanced: ls_droid_b1_at_advanced {
    author = AUTHOR;
    displayName = CSTRING(b1_heavyAA);
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAA_advanced.jpg);

    weapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    magazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_e60r_aa_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_10("ls_magazine_e5"),
        "ls_magazine_e60r_aa_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    backpack = "ls_droidBackpack_b1_advanced_predef_heavyAA";
};

// Needed for WebKnight Droids
DEPRECATED(lsd_cis_b1_standard,ls_droid_b1);
DEPRECATED(lsd_cis_b1Shotgun_standard,ls_droid_b1_breacher);
DEPRECATED(lsd_cis_b1Heavy_standard,ls_droid_b1_heavy);
DEPRECATED(lsd_cis_b1SquadLead_standard,ls_droid_b1_squadLeader);
DEPRECATED(lsd_cis_oomOfficer_standard,ls_droid_b1_commander);
// To standardize unit naming scheme
DEPRECATED(ls_droid_b1_geonosisHeavy,ls_droid_b1_heavy_geonosis);
DEPRECATED(ls_droid_b1_trainingHeavy,ls_droid_b1_heavy_training);
DEPRECATED(ls_droid_b1_geonosisShotgun,ls_droid_b1_breacher_geonosis);
DEPRECATED(ls_droid_b1_trainingShotgun,ls_droid_b1_breacher_training);
DEPRECATED(ls_droid_b1_geonosisMarksman,ls_droid_b1_marksman_geonosis);
DEPRECATED(ls_droid_b1_trainingMarksman,ls_droid_b1_marksman_training);
DEPRECATED(ls_droid_b1_geonosisGrenadier,ls_droid_b1_grenadier_geonosis);
DEPRECATED(ls_droid_b1_trainingGrenadier,ls_droid_b1_grenadier_training);
DEPRECATED(ls_droid_b1_geonosisSquadLeader,ls_droid_b1_squadLeader_geonosis);
DEPRECATED(ls_droid_b1_trainingSquadLeader,ls_droid_b1_squadLeader_training);
DEPRECATED(ls_droid_b1_geonosisAT,ls_droid_b1_at_geonosis);
DEPRECATED(ls_droid_b1_trainingAT,ls_droid_b1_at_training);
DEPRECATED(ls_droid_b1_geonosisHeavyAT,ls_droid_b1_heavyAT_geonosis);
DEPRECATED(ls_droid_b1_trainingHeavyAT,ls_droid_b1_heavyAT_training);
DEPRECATED(ls_droid_b1_geonosisHeavyAA,ls_droid_b1_heavyAA_geonosis);
DEPRECATED(ls_droid_b1_trainingHeavyAA,ls_droid_b1_heavyAA_training);
