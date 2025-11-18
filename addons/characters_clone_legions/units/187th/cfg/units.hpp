class ls_clone_187th_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_187th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_187th_trooper.jpg);

    uniformClass = "ls_cloneUniform_187th_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\187th\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\187th\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_187th_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_187th_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_187th_officer: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Officer";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_187th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_187th_officer.jpg);

    uniformClass = "ls_cloneUniform_187th_officer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\187th\data\uniforms\officer_upper_co.paa),
        QPATHTOF(units\187th\data\uniforms\officer_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_187th_officer", "ls_gar_officer_vest", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_187th_officer", "ls_gar_officer_vest", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
};
