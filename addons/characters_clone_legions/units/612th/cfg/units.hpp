class ls_clone_612th_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_612th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_612th_trooper.jpg);

    uniformClass = "ls_cloneUniform_612th_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\612th\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\612th\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_612th_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_612th_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_612th_ganch: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Ganch";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_612th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_612th_ganch.jpg);

    uniformClass = "ls_cloneUniform_612th_ganch";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\612th\data\uniforms\ganch_upper_co.paa),
        QPATHTOF(units\612th\data\uniforms\ganch_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_612th_ganch", "ls_cloneVest_forceReconCommander_612th_ganch", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_612th_ganch", "ls_cloneVest_forceReconCommander_612th_ganch", LINKED_ITEMS_CLONE};
};
