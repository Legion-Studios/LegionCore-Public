class ls_clone_34th_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Assassin";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_34th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_34th_trooper.jpg);

    uniformClass = "ls_cloneUniform_34th_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\34th\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\34th\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_barc_34th_assassin", "ls_cloneVest_kama_34th", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_barc_34th_assassin", "ls_cloneVest_kama_34th", LINKED_ITEMS_CLONE};
};
