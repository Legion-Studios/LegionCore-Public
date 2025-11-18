class ls_rebel_honorGuard: ls_naval_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Rebel Naval Honor Guard";
    uniformClass = "ls_rebelUniform_honorGuard";

    faction = "ls_rebel";
    genericNames = "ls_civilian_male";

    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\honorGuard\data\camo_co.paa),
        QPATHTOF(uniforms\honorGuard\data\camo1_co.paa),
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
        "ls_nvg_honorGuard",
        LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        "ls_helmet_service",
        "ls_nvg_honorGuard",
        LINKED_ITEMS_RADIO
    };
};
