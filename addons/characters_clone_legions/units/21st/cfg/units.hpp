P2_UNIT(21st,trooper);

class ls_clone_21st_officer: lsd_gar_phase2_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Clone Officer";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_21st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_21st_officer.jpg);

    uniformClass = "ls_cloneUniform_21st_officer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\21st\data\uniforms\legacy\officer_upper_co.paa),
        QPATHTOF(units\21st\data\uniforms\legacy\officer_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_21st_officer", "ls_gar_officer_vest", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_21st_officer", "ls_gar_officer_vest", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
};

SPAWN_UNITS_FULL(21st,phase2);
