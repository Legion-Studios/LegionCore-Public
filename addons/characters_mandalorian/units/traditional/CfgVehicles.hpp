class ls_mandalorian_traditionalWarrior: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Warrior";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalWarrior.jpg);
    backpack = "ls_mandalorianBackpack_predef_standard";
};

class ls_mandalorian_traditionalRTO: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Comms Specialist";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalRTO.jpg);
    backpack = "ls_mandalorianBackpack_radio_predef_rto";
};

class ls_mandalorian_traditionalHeavy: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Heavy Warrior";

    weapons[] = {"ls_weapon_westar35s_scoped", "ls_weapon_westar35sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35s_scoped", "ls_weapon_westar35sa", THROW_PUT};

    magazines[] = {
        "ls_magazine_westar35s",
        "ls_magazine_westar35sa",
        ITEM_2("SmokeShell")
    };
    respawnMagazines[] = {
        "ls_magazine_westar35s",
        "ls_magazine_westar35sa",
        ITEM_2("SmokeShell")
    };

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalHeavy.jpg);
    backpack = "ls_mandalorianBackpack_heavy_predef_heavy";
};

class ls_mandalorian_traditionalMedic: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Medic";

    ROLE_MEDIC;

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalMedic.jpg);
    backpack = "ls_mandalorianBackpack_medic_predef_medic";
};

class ls_mandalorian_traditionalMarksman: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Marksman";

    ROLE_SNIPER;

    weapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_mercenarySniper_scoped", THROW_PUT};

    magazines[] = {ITEM_7("ls_magazine_mercenarySniper")};
    respawnMagazines[] = {ITEM_7("ls_magazine_mercenarySniper")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalMarksman.jpg);
    backpack = "ls_mandalorianBackpack_predef_marksman";
};

class ls_mandalorian_traditionalSupportGunner: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Support Gunner";

    icon = "ls_iconManSupportGunner";

    weapons[] = {"ls_weapon_zh73_scoped", "ls_weapon_westar35sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_zh73_scoped", "ls_weapon_westar35sa", THROW_PUT};

    magazines[] = {"ls_magazine_zh73", "ls_magazine_westar35sa", ITEM_2("SmokeShell")};
    respawnMagazines[] = {"ls_magazine_zh73", "ls_magazine_westar35sa", ITEM_2("SmokeShell")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalSupportGunner.jpg);
    backpack = "ls_mandalorianBackpack_heavy_predef_supportGunner";
};

class ls_mandalorian_traditionalAT: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "AT Specialist";

    ROLE_AT;

    magazines[] = {
        "ls_magazine_rps6_heat",
        "ls_magazine_westar35c",
        "ls_magazine_westar35sa",
        "SmokeShell"
    };
    respawnMagazines[] = {
        "ls_magazine_rps6_heat",
        "ls_magazine_westar35c",
        "ls_magazine_westar35sa",
        "SmokeShell"
    };

    weapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_rps6_disposable", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_rps6_disposable", THROW_PUT};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalAT.jpg);
    backpack = "ls_mandalorianBackpack_predef_standard";
};

class ls_mandalorian_traditionalHeavyAT: ls_mandalorian_traditionalAT {
    author = AUTHOR;
    displayName = "Rocket Specialist (AT)";

    weapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_plx1_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_plx1_at", THROW_PUT};

    magazines[] = {"ls_magazine_plx1_at"};
    respawnMagazines[] = {"ls_magazine_plx1_at"};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalHeavyAT.jpg);
};

class ls_mandalorian_traditionalHeavyAA: ls_mandalorian_traditionalAT {
    author = AUTHOR;
    displayName = "Rocket Specialist (AA)";

    weapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_plx1_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", "ls_weapon_plx1_aa", THROW_PUT};

    magazines[] = {"ls_magazine_plx1_aa"};
    respawnMagazines[] = {"ls_magazine_plx1_aa"};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalHeavyAT.jpg);
};

class ls_mandalorian_traditionalDemo: ls_mandalorian_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Demo Specialist";

    ROLE_ENGINEER;

    weapons[] = {"ls_weapon_rd4", "ls_weapon_westar35sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_rd4", "ls_weapon_westar35sa", THROW_PUT};

    magazines[] = {ITEM_3("ls_magazine_3Rnd_40mw_IM41")};
    respawnMagazines[] = {ITEM_3("ls_magazine_3Rnd_40mw_IM41")};

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_mandalorian_traditionalDemo.jpg);
    backpack = "ls_mandalorianBackpack_demo_predef_demo";
};

// Here as base classes for other units to use
class ls_mandalorian_traditionalSergeant: ls_mandalorian_traditionalWarrior {
    author = AUTHOR;
    displayName = "Sergeant";

    ROLE_LEADER;
};

class ls_mandalorian_traditionalCaptain: ls_mandalorian_traditionalWarrior {
    author = AUTHOR;
    displayName = "Captain";

    ROLE_OFFICER;
};
