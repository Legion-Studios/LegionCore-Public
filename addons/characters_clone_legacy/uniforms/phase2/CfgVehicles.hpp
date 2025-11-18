class lsd_gar_phase2_base: ls_clone_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    uniformClass = "ls_gar_phase2_uniform";
    model = QPATHTOF(uniforms\phase2\ls_gar_phase2_uniform.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "undersuit",
        "insignia"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\phase2\data\camo1_co.paa),
        QPATHTOF(uniforms\phase2\data\camo2_co.paa),
        QPATHTOF(uniforms\phase2\data\undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\lsd_gar_phase2_base.jpg);

    weapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};

    linkedItems[] = {"ls_gar_phase2_helmet", "ls_gar_clone_vest", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_gar_phase2_helmet", "ls_gar_clone_vest", LINKED_ITEMS_CLONE};
};

class lsd_gar_bodyGloveLegArmor_base: ls_clone_unit_base {
    scope = 1; // Only exist to texture the uniform
    uniformClass = "lsd_gar_bodyGloveLegArmor_uniform";
    model = QPATHTOF(uniforms\phase2\lsd_gar_naked_uniform.p3d);
    hiddenSelections[] = {
        "bodyGlove",
        "camo_legs"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\phase2\data\bodyGlove_co.paa),
        QPATHTOF(uniforms\phase2\data\camo2_co.paa)
    };
};

class lsd_gar_bodyGlove_base: lsd_gar_bodyGloveLegArmor_base {
    displayName = "Republic Body Glove";
    uniformClass = "lsd_gar_bodyGlove_uniform";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\phase2\data\bodyGlove_co.paa),
        ""
    };
};

class lsd_bodyGlove_base: lsd_gar_bodyGlove_base {
    displayName = "Body Glove [Male]";
    uniformClass = "lsd_bodyGlove_uniform";
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\phase2\data\bodyGlove_plain_co.paa),
        ""
    };
};
