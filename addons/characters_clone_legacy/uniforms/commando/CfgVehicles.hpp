class ls_sob_commando_unit: ls_clone_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commando";

    genericNames = "ls_clone_p2_rc";
    editorSubcategory = "ls_edsubcat_republic_cloneCommandos";
    editorPreview = QPATHTOF(_ui\editorPreviews\ls_sob_commando_unit.jpg);

    uniformClass = "ls_sob_commando_uniform";
    model = QPATHTOF(uniforms\commando\ls_uniform_clone_commando.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\commando\data\camo1_co.paa),
        QPATHTOF(uniforms\commando\data\camo2_co.paa)
    };

    weapons[] = {"ls_weapon_dc17m", "ls_weapon_dc15sa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc17m", "ls_weapon_dc15sa", THROW_PUT};
    magazines[] = {ITEM_7("ls_magazine_dc17m"), ITEM_3("ls_magazine_dc15sa"), "ls_grenade_n20_magazine"};
    respawnMagazines[] = {ITEM_7("ls_magazine_dc17m"), ITEM_3("ls_magazine_dc15sa"), "ls_grenade_n20_magazine"};
    linkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_vest", LINKED_ITEMS_CLONE};
    respawnLinkedItems[] = {"ls_sob_commando_helmet", "ls_sob_commando_vest", LINKED_ITEMS_CLONE};
    backpack = "ls_sob_commando_backpack";

    armor = 10;
    armorStructural = 0.6;
    explosionShielding = 0.04;
    minTotalDamageThreshold = 0.001;
    impactDamageMultiplier = 0.5;
};

class ls_sob_commando_hologram_unit: ls_sob_commando_unit {
    author = AUTHOR;
    displayName = "Clone Commando (Hologram)";

    uniformClass = "ls_sob_commando_hologram_uniform";
    model = QPATHTOF(uniforms\commando\ls_uniform_clone_commando_hologram.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
        QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
    };
};

class ls_sob_commando_activeCamo_unit: ls_sob_commando_hologram_unit {
    scope = 1;
    author = AUTHOR;

    uniformClass = "ls_sob_commando_uniform_activeCamo";
    hiddenSelectionsTextures[] = {
        QPATHTOEF(data,textures\blank_ca.paa),
        QPATHTOEF(data,textures\blank_ca.paa)
    };
    hiddenSelectionsMaterials[] = {
        QPATHTOEF(data,materials\activeCamo.rvmat),
        QPATHTOEF(data,materials\activeCamo.rvmat)
    };
};
