class ls_clone_5th_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_5th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_5th_trooper.jpg);

    uniformClass = "ls_cloneUniform_5th_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\5th\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\5th\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_5th_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_5th_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_5th_medic: ls_clone_5th_trooper {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Medic";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_5th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_5th_medic.jpg);

    uniformClass = "ls_cloneUniform_5th_medic";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\5th\data\uniforms\medic_upper_co.paa),
        QPATHTOF(units\5th\data\uniforms\medic_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_5th_medic", "ls_gar_medic_vest", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_5th_medic", "ls_gar_medic_vest", LINKED_ITEMS_CLONE};
    backpack = "ls_gar_medic_backpack";
    ROLE_MEDIC;
};

class ls_clone_5th_nco: ls_clone_5th_trooper {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Sergeant";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_5th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_5th_nco.jpg);

    uniformClass = "ls_cloneUniform_5th_nco";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\5th\data\uniforms\nco_upper_co.paa),
        QPATHTOF(units\5th\data\uniforms\nco_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_5th_nco", "ls_gar_reconNCO_vest", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_5th_nco", "ls_gar_reconNCO_vest", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
};

class ls_clone_5th_officer: ls_clone_5th_trooper {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Officer";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_5th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_5th_officer.jpg);

    uniformClass = "ls_cloneUniform_5th_officer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\5th\data\uniforms\officer_upper_co.paa),
        QPATHTOF(units\5th\data\uniforms\officer_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_5th_officer", "ls_gar_officer_vest", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_5th_officer", "ls_gar_officer_vest", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
};
