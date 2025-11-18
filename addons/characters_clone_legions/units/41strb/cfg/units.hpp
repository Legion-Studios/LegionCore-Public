class ls_clone_phase2_41st_gree: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Commander Gree";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_phase2_41st_gree.jpg);

    uniformClass = "ls_cloneUniform_phase2_41st_gree";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41strb\data\uniforms\gree_phase2_upper_co.paa),
        QPATHTOF(units\41strb\data\uniforms\trooper_phase2_lower_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_41st_gree", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41st_gree", LINKED_ITEMS_CLONE};
};

class ls_clone_phase2_41strb_trooper: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41strb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_phase2_41strb_trooper.jpg);

    uniformClass = "ls_cloneUniform_phase2_41strb_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41strb\data\uniforms\trooper_phase2_upper_co.paa),
        QPATHTOF(units\41strb\data\uniforms\trooper_phase2_lower_co.paa),
        QPATHTOF(units\41strb\data\uniforms\trooper_phase2_undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_41strb_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41strb_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_scout_41strb_trooper: ls_clone_scout_base {
    scope = 2;
    author = AUTHOR;

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41strb";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_scout_41strb_trooper.jpg);

    uniformClass = "ls_cloneUniform_scout_41strb_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41strb\data\uniforms\trooper_scout_camo1_co.paa),
        QPATHTOF(units\41strb\data\uniforms\trooper_scout_camo2_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_scout_41strb_trooper", "ls_cloneVest_scout_41strb_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_scout_41strb_trooper", "ls_cloneVest_scout_41strb_trooper", LINKED_ITEMS_CLONE};
};
