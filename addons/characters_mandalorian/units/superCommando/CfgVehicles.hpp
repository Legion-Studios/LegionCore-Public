HELMET_GH("Super Commando Grunt Helmet",ls_mandalorianHelmet_superCommandoGrunt);
HELMET_GH("Super Commando Sergeant Helmet",ls_mandalorianHelmet_superCommandoSergeant);
HELMET_GH("Super Commando Captain Helmet",ls_mandalorianHelmet_superCommandoCaptain);

class ls_mandalorian_superCommandoWarrior: ls_mandalorian_traditionalWarrior {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_mandalorians_superCommando";
    side = OPFOR;

    uniformClass = "ls_mandalorianUniform_superCommandoGrunt";
    model = QPATHTOF(uniforms\protectorMale\ls_uniform_mandalorian_protectorMale.p3d);
    hiddenSelections[] = {
        "camo_upper",
        "camo_lower",
        "camo_undersuit",
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\superCommando\data\grunt_upper_co.paa),
        QPATHTOF(units\superCommando\data\grunt_lower_co.paa),
        QPATHTOF(units\superCommando\data\grunt_undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoWarrior.jpg);

    backpack = "ls_mandalorianBackpack_predef_standard";
    linkedItems[] = {"ls_mandalorianHelmet_superCommandoGrunt", "ls_mandalorianVest_superCommandoGrunt", LINKED_ITEMS_MANDALORIAN};
    respawnLinkedItems[] = {"ls_mandalorianHelmet_superCommandoGrunt", "ls_mandalorianVest_superCommandoGrunt", LINKED_ITEMS_MANDALORIAN};
};

class ls_mandalorian_superCommandoRTO: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "Comms Specialist";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoRTO.jpg);
    backpack = "ls_mandalorianBackpack_radio_predef_rto";
};

class ls_mandalorian_superCommandoHeavy: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "Heavy Warrior";

    weapons[] = {"ls_weapon_westar35s_scoped", "ls_weapon_westar35sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35s_scoped", "ls_weapon_westar35sa", THROW_PUT};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoHeavy.jpg);
    backpack = "ls_mandalorianBackpack_heavy_predef_heavy";
};

class ls_mandalorian_superCommandoMedic: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "Medic";

    ROLE_MEDIC;

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoMedic.jpg);
    backpack = "ls_mandalorianBackpack_medic_predef_medic";
};

class ls_mandalorian_superCommandoMarksman: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "Marksman";

    ROLE_SNIPER;

    weapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    magazines[] = {ITEM_7("ls_magazine_mercenarySniper")};
    respawnMagazines[] = {ITEM_7("ls_magazine_mercenarySniper")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoMarksman.jpg);
    backpack = "ls_mandalorianBackpack_predef_marksman";
};

class ls_mandalorian_superCommandoSupportGunner: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "Support Gunner";

    icon = "ls_iconManSupportGunner";

    weapons[] = {"ls_weapon_zh73_scoped", "ls_weapon_westar35sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_zh73_scoped", "ls_weapon_westar35sa", THROW_PUT};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoSupportGunner.jpg);
    backpack = "ls_mandalorianBackpack_heavy_predef_supportGunner";
};

class ls_mandalorian_superCommandoAT: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "AT Specialist";

    ROLE_AT;

    weapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_rps6_disposable", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_rps6_disposable", THROW_PUT};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoAT.jpg);
    backpack = "ls_mandalorianBackpack_predef_standard";
};

class ls_mandalorian_superCommandoHeavyAT: ls_mandalorian_superCommandoAT {
    author = AUTHOR;
    displayName = "Rocket Specialist (AT)";

    weapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_plx1_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_plx1_at", THROW_PUT};

    magazines[] = {"ls_magazine_plx1_at"};
    respawnMagazines[] = {"ls_magazine_plx1_at"};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoHeavyAT.jpg);
};

class ls_mandalorian_superCommandoHeavyAA: ls_mandalorian_superCommandoAT {
    author = AUTHOR;
    displayName = "Rocket Specialist (AA)";

    weapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_plx1_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_plx1_aa", THROW_PUT};

    magazines[] = {"ls_magazine_plx1_aa"};
    respawnMagazines[] = {"ls_magazine_plx1_aa"};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoHeavyAT.jpg);
};

class ls_mandalorian_superCommandoDemo: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "Demo Specialist";

    ROLE_ENGINEER;

    weapons[] = {"ls_weapon_rd4", "ls_weapon_westar35sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_rd4", "ls_weapon_westar35sa", THROW_PUT};

    magazines[] = {"ls_magazine_3Rnd_40mw_IM41"};
    respawnMagazines[] = {"ls_magazine_3Rnd_40mw_IM41"};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoDemo.jpg);
    backpack = "ls_mandalorianBackpack_demo_predef_demo";
};

class ls_mandalorian_superCommandoSergeant: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "Sergeant";

    uniformClass = "ls_mandalorianUniform_superCommandoSergeant";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\superCommando\data\sergeant_upper_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_lower_co.paa),
        QPATHTOF(units\superCommando\data\sergeant_undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoSergeant.jpg);

    ROLE_LEADER;

    linkedItems[] = {"ls_mandalorianHelmet_superCommandoSergeant", "ls_mandalorianVest_superCommandoSergeant", LINKED_ITEMS_MANDALORIAN};
    respawnLinkedItems[] = {"ls_mandalorianHelmet_superCommandoSergeant", "ls_mandalorianVest_superCommandoSergeant", LINKED_ITEMS_MANDALORIAN};
};

class ls_mandalorian_superCommandoCaptain: ls_mandalorian_superCommandoWarrior {
    author = AUTHOR;
    displayName = "Captain";

    uniformClass = "ls_mandalorianUniform_superCommandoSergeant";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_superCommandoCaptain.jpg);

    ROLE_OFFICER;

    linkedItems[] = {"ls_mandalorianHelmet_superCommandoCaptain", "ls_mandalorianVest_superCommandoSergeant", LINKED_ITEMS_MANDALORIAN};
    respawnLinkedItems[] = {"ls_mandalorianHelmet_superCommandoCaptain", "ls_mandalorianVest_superCommandoSergeant", LINKED_ITEMS_MANDALORIAN};
};
