class ls_mandalorian_base: ls_indfor_unit_base {
    scope = 1; // Scope 1 because uniforms use this class for textures
    author = AUTHOR;
    displayName = ECSTRING(units_mandalorian,warrior);

    faction = "ls_mandalorians";
    editorSubcategory = "ls_edsubcat_mandalorians_traditional";
    genericNames = "ls_mandalorian_male";

    uniformClass = "ls_mandalorianUniform";
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\undersuit\data\undersuit_co.paa)
    };

    identityTypes[] = {"LanguageENG_F", "Head_NATO", "ls_head_randomSpecies"};

    weapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_westar35c", "ls_weapon_westar35sa", THROW_PUT};

    magazines[] = {
        ITEM_6("ls_magazine_westar35c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };
    respawnMagazines[] = {
        ITEM_6("ls_magazine_westar35c"),
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine")
    };

    linkedItems[] = {"ls_mandalorianHelmet_traditional", "ls_mandalorianVest_standard", LINKED_ITEMS_MANDALORIAN};
    respawnLinkedItems[] = {"ls_mandalorianHelmet_traditional", "ls_mandalorianVest_standard", LINKED_ITEMS_MANDALORIAN};
};
