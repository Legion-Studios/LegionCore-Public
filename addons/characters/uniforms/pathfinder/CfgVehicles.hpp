class ls_pathfinder_unit_base: ls_indfor_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Pathfinder";

    uniformClass = "ls_uniform_pathfinder";
    model = QPATHTOF(uniforms\pathfinder\ls_uniform_pathfinder.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2",
        "camo3"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa)
    };

    magazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
    };
    respawnMagazines[] = {
        ITEM_2("SmokeShell"),
        ITEM_2("ls_grenade_n20_magazine"),
    };

    linkedItems[] = {
        "ls_helmet_jockey",
        "ls_vest_flakJacket",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_helmet_jockey",
        "ls_vest_flakJacket",
        LINKED_ITEMS_RADIO
    };
};

class ls_pathfinder_brown_base: ls_pathfinder_unit_base {
    author = AUTHOR;
    displayName = "Pathfinder (L. Brown)";

    uniformClass = "ls_uniform_pathfinder_brown";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_lightBrown_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_lightBrown_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_lightBrown_co.paa)
    };
};

class ls_pathfinder_navy_base: ls_pathfinder_unit_base {
    author = AUTHOR;
    displayName = "Pathfinder (Navy)";

    uniformClass = "ls_uniform_pathfinder_navy";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa)
    };

    linkedItems[] = {
        "ls_helmet_jockey_navy",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_helmet_jockey_navy",
        LINKED_ITEMS_RADIO
    };
};

class ls_pathfinder_navy_alt_base: ls_pathfinder_unit_base {
    author = AUTHOR;
    displayName = "Pathfinder (Navy Alt)";

    uniformClass = "ls_uniform_pathfinder_navy_alt";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_navy_co.paa)
    };

    linkedItems[] = {
        "ls_helmet_jockey_navy_alt",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_helmet_jockey_navy_alt",
        LINKED_ITEMS_RADIO
    };
};

class ls_pathfinder_unit_base_r: ls_pathfinder_unit_base {
    author = AUTHOR;
    displayName = "Pathfinder (Rolled)";

    uniformClass = "ls_uniform_pathfinder_r";
    model = QPATHTOF(uniforms\pathfinder\ls_uniform_pathfinder_r.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\rolled_sleeves_co.paa)
    };
};

class ls_pathfinder_brown_base_r: ls_pathfinder_unit_base_r {
    author = AUTHOR;
    displayName = "Pathfinder (L. Brown, Rolled)";

    uniformClass = "ls_uniform_pathfinder_brown_r";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_lightBrown_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_lightBrown_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_lightBrown_co.paa),
        QPATHTOF(uniforms\pathfinder\data\rolled_sleeves_navy_co.paa)
    };
};

class ls_pathfinder_navy_base_r: ls_pathfinder_unit_base_r {
    author = AUTHOR;
    displayName = "Pathfinder (Navy, Rolled)";

    uniformClass = "ls_uniform_pathfinder_navy_r";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\rolled_sleeves_navy_co.paa)
    };
};

class ls_pathfinder_navy_alt_base_r: ls_pathfinder_unit_base_r {
    author = AUTHOR;
    displayName = "Pathfinder (Navy Alt, Rolled)";

    uniformClass = "ls_uniform_pathfinder_navy_alt_r";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_navy_co.paa),
        QPATHTOF(uniforms\pathfinder\data\rolled_sleeves_co.paa)
    };
};
