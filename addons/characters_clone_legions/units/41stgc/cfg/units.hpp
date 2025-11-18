class ls_clone_41stgc_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41stgc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_41stgc_trooper.jpg);

    uniformClass = "ls_cloneUniform_41stgc_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41stgc\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\41stgc\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_41stgc_gree: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Gree";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41stgc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_41stgc_gree.jpg);

    uniformClass = "ls_cloneUniform_41stgc_gree";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41stgc\data\uniforms\gree_upper_co.paa),
        QPATHTOF(units\41stgc\data\uniforms\gree_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_gree", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_gree", LINKED_ITEMS_CLONE};
};
