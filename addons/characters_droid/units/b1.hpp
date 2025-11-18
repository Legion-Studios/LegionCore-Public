class ls_droid_b1_heavy: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Heavy)";
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
};

class ls_droid_b1_geonosisHeavy: ls_droid_b1_heavy {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisHeavy.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
};

class ls_droid_b1_trainingHeavy: ls_droid_b1_heavy {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_trainingHeavy.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
};

class ls_droid_b1_shotgun: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Shotgun)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_shotgun.jpg);

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

class ls_droid_b1_geonosisShotgun: ls_droid_b1_shotgun {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisShotgun.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
};

class ls_droid_b1_trainingShotgun: ls_droid_b1_shotgun {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_trainingShotgun.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
};

class ls_droid_b1_marksman: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Marksman)";
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

class ls_droid_b1_geonosisMarksman: ls_droid_b1_marksman {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisMarksman.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
};

class ls_droid_b1_trainingMarksman: ls_droid_b1_marksman {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_trainingMarksman.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
};

class ls_droid_b1_grenadier: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Grenadier)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_grenadier.jpg);

    ROLE_GRENADIER;

    weapons[] = {"ls_weapon_rd4", THROW_PUT};
    respawnweapons[] = {"ls_weapon_rd4", THROW_PUT};
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

class ls_droid_b1_geonosisGrenadier: ls_droid_b1_grenadier {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisGrenadier.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
};

class ls_droid_b1_trainingGrenadier: ls_droid_b1_grenadier {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_trainingGrenadier.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
};

class ls_droid_b1_squadLeader: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Squad Lead)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_squadLeader.jpg);

    ROLE_LEADER;
};

class ls_droid_b1_geonosisSquadLeader: ls_droid_b1_squadLeader {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisSquadLeader.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_geonosis";
    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
};

class ls_droid_b1_trainingSquadLeader: ls_droid_b1_squadLeader {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_trainingSquadLeader.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    backpack = "ls_droidBackpack_b1_training";
    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
};

class ls_droid_b1_at: ls_droid_b1 {
    author = AUTHOR;
    displayName = "B1 Battle Droid (AT)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_at.jpg);

    ROLE_AT;

    weapons[] = {"ls_weapon_e5", "ls_weapon_rps6", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rps6", THROW_PUT};
    magazines[] = {
        ITEM_3("ls_magazine_e5"),
        "ls_magazine_rps6_heat_ai",
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {"ls_magazine_rps6_heat_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    backpack = "ls_droidBackpack_b1_predef_at";
};

class ls_droid_b1_geonosisAT: ls_droid_b1_at {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisAT.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_geonosis_predef_at";
};

class ls_droid_b1_trainingAT: ls_droid_b1_at {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_trainingAT.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_training_predef_at";
};

class ls_droid_b1_heavyAT: ls_droid_b1_at {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Missile AT)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAT.jpg);

    weapons[] = {"ls_weapon_e5", "ls_weapon_e60r_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_e60r_at", THROW_PUT};
    magazines[] = {"ls_magazine_e60r_at_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {"ls_magazine_e60r_at_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    backpack = "ls_droidBackpack_b1_predef_heavyAT";
};

class ls_droid_b1_geonosisHeavyAT: ls_droid_b1_heavyAT {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisHeavyAT.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_geonosis_predef_heavyAT";
};

class ls_droid_b1_trainingHeavyAT: ls_droid_b1_heavyAT {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_trainingHeavyAT.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_training_predef_heavyAT";
};

class ls_droid_b1_heavyAA: ls_droid_b1_at {
    author = AUTHOR;
    displayName = "B1 Battle Droid (Missile AA)";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_heavyAA.jpg);

    weapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5c", "ls_weapon_e60r_aa", THROW_PUT};
    magazines[] = {"ls_magazine_e60r_aa_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {"ls_magazine_e60r_aa_ai", ITEM_2("SmokeShell"), ITEM_2("ls_grenade_n20_magazine")};
    backpack = "ls_droidBackpack_b1_predef_heavyAA";
};

class ls_droid_b1_geonosisHeavyAA: ls_droid_b1_heavyAA {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_geonosisDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_geonosisHeavyAA.jpg);

    uniformClass = "ls_droidUniform_b1_geonosis";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\geonosis\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\geonosis\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_geonosis", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_geonosis_predef_heavyAA";
};

class ls_droid_b1_trainingHeavyAA: ls_droid_b1_heavyAA {
    author = AUTHOR;
    editorSubCategory = "ls_edsubcat_cis_trainingDroids";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_b1_trainingHeavyAA.jpg);

    uniformClass = "ls_droidUniform_b1_training";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\b1\data\training\camo1_co.paa),
        QPATHTOF(uniforms\b1\data\training\camo2_co.paa)
    };

    linkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_droidHelmet_b1_training", LINKED_ITEMS_DROID};
    backpack = "ls_droidBackpack_b1_training_predef_heavyAA";
};

// Needed for WebKnight Droids
DEPRECATED(lsd_cis_b1_standard,ls_droid_b1);
DEPRECATED(lsd_cis_b1Shotgun_standard,ls_droid_b1_shotgun);
DEPRECATED(lsd_cis_b1Heavy_standard,ls_droid_b1_heavy);
DEPRECATED(lsd_cis_b1SquadLead_standard,ls_droid_b1_squadLeader);
DEPRECATED(lsd_cis_oomOfficer_standard,ls_droid_b1_officer);
