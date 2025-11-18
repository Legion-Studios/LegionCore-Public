class ls_newRepublic_naval_trooper: ls_naval_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "New Republic Naval Uniform";

    faction = "ls_newRepublic";
    genericNames = "ls_civilian_male";

    uniformClass = "ls_newRepublicUniform_naval";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\naval\data\camo_co.paa),
        QPATHTOF(uniforms\naval\data\camo1_co.paa),
        "",
        ""
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
        "ls_helmet_service",
        "ls_newRepublicVest_naval",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_helmet_service",
        "ls_newRepublicVest_naval",
        LINKED_ITEMS_RADIO
    };
};

class ls_newRepublic_naval_trooper_alt1: ls_newRepublic_naval_trooper {
    displayName = "New Republic Naval Trooper (Alt 1)";
    uniformClass = "ls_newRepublicUniform_naval_alt1";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\naval\data\camo_co.paa),
        QPATHTOF(uniforms\naval\data\camo1_co.paa),
        QPATHTOF(uniforms\naval\data\camo_co.paa),
        ""
    };
};

class ls_newRepublic_naval_trooper_alt2: ls_newRepublic_naval_trooper {
    displayName = "New Republic Naval Trooper (Alt 2)";
    uniformClass = "ls_newRepublicUniform_naval_alt2";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\naval\data\camo_co.paa),
        QPATHTOF(uniforms\naval\data\camo1_co.paa),
        "",
        QPATHTOF(uniforms\naval\data\camo_co.paa)
    };
};
