class ls_clone_74th_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_74th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_74th_trooper.jpg);

    uniformClass = "ls_cloneUniform_74th_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\74th\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\74th\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_74th_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_74th_trooper", LINKED_ITEMS_CLONE};
};
