class ls_clone_327th_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_327th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_327th_trooper.jpg);

    uniformClass = "ls_cloneUniform_327th_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\327th\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\327th\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_327th_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_327th_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_327th_bly: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Bly";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_327th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_327th_bly.jpg);

    uniformClass = "ls_cloneUniform_327th_bly";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\327th\data\uniforms\bly_upper_co.paa),
        QPATHTOF(units\327th\data\uniforms\bly_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_327th_bly", "ls_cloneVest_commander_327th", "lsd_gar_standardSPC_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_327th_bly", "ls_cloneVest_commander_327th", "lsd_gar_standardSPC_nvg", LINKED_ITEMS_CLONE};
};
