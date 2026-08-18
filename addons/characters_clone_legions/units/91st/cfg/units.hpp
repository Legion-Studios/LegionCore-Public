P2_UNIT(91st,trooper);

class ls_clone_phase1_91st_ponds: ls_clone_phase1_standard_commander {
    scope = 2;
    author = AUTHOR;
    displayName = "Commander Ponds";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_91st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\91st\ls_clone_phase1_91st_ponds.jpg);

    uniformClass = "ls_cloneUniform_phase1_91st_ponds";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\91st\data\uniforms\ponds_phase1_upper_co.paa),
        QPATHTOF(units\91st\data\uniforms\ponds_phase1_lower_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase1_91st_ponds", "ls_cloneVest_kama", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_91st_ponds", "ls_cloneVest_kama", LINKED_ITEMS_CLONE};
};

class ls_clone_91st_medic: lsd_gar_phase2_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Clone Medic";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_91st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_91st_medic.jpg);

    uniformClass = "ls_cloneUniform_91st_medic";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\91st\data\uniforms\legacy\medic_upper_co.paa),
        QPATHTOF(units\91st\data\uniforms\legacy\medic_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_91st_medic", "ls_gar_medic_vest", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_91st_medic", "ls_gar_medic_vest", LINKED_ITEMS_CLONE};
    backpack = "ls_gar_medic_backpack";
    ROLE_MEDIC;
};

SPAWN_UNITS_FULL(91st,phase2);
