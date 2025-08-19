class ls_character_pathfinder_base: ls_indfor_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Pathfinder";
    model = QPATHTOF(uniforms\pathfinder\ls_uniform_pathfinder.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2",
        "camo3"
    };

    uniformClass = "ls_uniform_pathfinder";
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

class ls_character_pathfinder_brown_base: ls_character_pathfinder_base {
    scope = 2;
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

// navy
class ls_character_pathfinder_navy_base: ls_character_pathfinder_base {
    scope = 2;
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

// navy alt
class ls_character_pathfinder_navy_alt_base: ls_character_pathfinder_base {
    scope = 2;
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

// rolled
class ls_character_pathfinder_base_r: ls_character_pathfinder_base {
    displayName = "Pathfinder (Rolled)";
    model = QPATHTOF(uniforms\pathfinder\ls_uniform_pathfinder_r.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1",
        "camo2",
        "camo3",
        "camo4"
    };

    uniformClass = "ls_uniform_pathfinder_r";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\top_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\pants_co.paa),
        QPATHTOF(uniforms\pathfinder\data\rolled_sleeves_co.paa)
    };
};

// Brown
class ls_character_pathfinder_brown_base_r: ls_character_pathfinder_base_r {
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

// alt rolled navy
class ls_character_pathfinder_navy_base_r: ls_character_pathfinder_base_r {
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

// alt rolled navy alt
class ls_character_pathfinder_navy_alt_base_r: ls_character_pathfinder_base_r {
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
