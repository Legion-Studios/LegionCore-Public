class ls_droid_bx_assassain: ls_droid_bx {
    author = AUTHOR;
    displayName = "BX Assassain Droid";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_assassain.jpg);

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

class ls_droid_bx_cloneDisguise_phase2: ls_droid_bx {
    author = AUTHOR;
    displayName = "BX Commando Droid (Clone Disguise, P2)";

    uniformClass = "ls_droidUniform_bx_cloneDisguise";
    model = QPATHTOEF(characters_clone_legacy,uniforms\phase2\ls_gar_phase2_uniform.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "undersuit",
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo1_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo2_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_cloneDisguise_phase2.jpg);

    weapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
    respawnweapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {
        ITEM_10("ls_30Rnd_192mw_mag_blue"),
        ITEM_2("ls_30Rnd_12mw_mag_blue"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_2("SmokeShell"),
        "SmokeShellGreen",
        "SmokeShellOrange",
        "SmokeShellBlue",
        "ls_grenade_chemlightGreen_magazine"
    };
    respawnMagazines[] = {
        ITEM_10("ls_30Rnd_192mw_mag_blue"),
        ITEM_2("ls_30Rnd_12mw_mag_blue"),
        ITEM_2("ls_grenade_n20_magazine"),
        ITEM_2("SmokeShell"),
        "SmokeShellGreen",
        "SmokeShellOrange",
        "SmokeShellBlue",
        "ls_grenade_chemlightGreen_magazine"
    };
    linkedItems[] = {"ls_gar_phase2_helmet", "lsd_gar_clone_vest", "ls_nvg_invisible", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_gar_phase2_helmet", "lsd_gar_clone_vest", "ls_nvg_invisible", LINKED_ITEMS_DROID};
};

class ls_droid_bx_cloneDisguise_phase1: ls_droid_bx_cloneDisguise_phase2 {
    author = AUTHOR;
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droid_bx_cloneDisguise_phase1.jpg);
    linkedItems[] = {"ls_gar_phase1_helmet", "lsd_gar_clone_vest", "ls_nvg_invisible", LINKED_ITEMS_DROID};
    respawnLinkedItems[] = {"ls_gar_phase1_helmet", "lsd_gar_clone_vest", "ls_nvg_invisible", LINKED_ITEMS_DROID};
};
