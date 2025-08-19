class ls_jabiim_nimbusCommando: ls_indfor_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Nimbus Commando";

    faction = "ls_jabiim";
    editorSubcategory = "ls_edsubcat_jabiim_nimbusCommandos";

    uniformClass = "ls_jabiimUniform_nimbusCommando";
    model = QPATHTOF(uniforms\nimbusCommando\ls_uniform_nimbusCommando.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "camo3"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\nimbusCommando\data\body_upper_co.paa),
        QPATHTOF(uniforms\nimbusCommando\data\body_lower_co.paa),
        QPATHTOF(uniforms\nimbusCommando\data\rig_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_jabiim_nimbusCommando.jpg);

    weapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_e5", "ls_weapon_rg4d", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d")};
    respawnMagazines[] = {ITEM_10("ls_magazine_e5"), ITEM_3("ls_magazine_rg4d")};

    linkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    respawnLinkedItems[] = {"ls_jabiimHelmet_nimbusCommando", LINKED_ITEMS_JABIIM};
    backpack = "ls_jabiimBackpack_nimbusCommando";
};
