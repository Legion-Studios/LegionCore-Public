class ls_clone_21st_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_21st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_21st_trooper.jpg);

    uniformClass = "ls_cloneUniform_21st_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\21st\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\21st\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_21st_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_21st_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_21st_officer: ls_clone_21st_trooper {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Officer";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_21st_officer.jpg);

    uniformClass = "ls_cloneUniform_21st_officer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\21st\data\uniforms\officer_upper_co.paa),
        QPATHTOF(units\21st\data\uniforms\officer_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_21st_officer", "ls_gar_officer_vest", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_21st_officer", "ls_gar_officer_vest", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
};
