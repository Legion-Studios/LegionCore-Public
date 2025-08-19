class lsd_gar_phase2Insulated_base: ls_clone_unit_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Insulated Clone Trooper";

    uniformClass = "lsd_gar_phase2Insulated_uniform";
    model = QPATHTOF(uniforms\phase2Insulated\ls_gar_phase2Insulated_uniform.p3d);
    hiddenSelections[] = {
        "_upper",
        "_lower",
        "_undersuit",
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(uniforms\phase2Insulated\data\upper_co.paa),
        QPATHTOF(uniforms\phase2Insulated\data\lower_co.paa),
        QPATHTOF(uniforms\phase2Insulated\data\undersuit_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\lsd_gar_phase2Insulated_base.jpg);

    weapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15a"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};

    linkedItems[] = {"ls_gar_phase2Insulated_helmet", "ls_gar_marine_vest", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_gar_phase2Insulated_helmet", "ls_gar_marine_vest", LINKED_ITEMS_CLONE};
};
