class ls_clone_91st_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_91st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_91st_trooper.jpg);

    uniformClass = "ls_cloneUniform_91st_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\91st\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\91st\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_91st_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_91st_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_91st_medic: ls_clone_91st_trooper {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Medic";

    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_91st_medic.jpg);

    uniformClass = "ls_cloneUniform_91st_medic";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\91st\data\uniforms\medic_upper_co.paa),
        QPATHTOF(units\91st\data\uniforms\medic_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_91st_trooper", "ls_gar_medic_vest", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_91st_trooper", "ls_gar_medic_vest", LINKED_ITEMS_CLONE};
    backpack = "ls_gar_medic_backpack";
    ROLE_MEDIC;
};
