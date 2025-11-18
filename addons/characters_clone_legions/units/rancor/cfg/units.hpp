class ls_clone_rancor_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_rancor";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_rancor_trooper.jpg);
    uniformClass = "ls_cloneUniform_rancor_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\rancor\data\uniforms\trooper_upper_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo2_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase1Arf_rancor_trooper", "ls_gar_arf_vest", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1Arf_rancor_trooper", "ls_gar_arf_vest", LINKED_ITEMS_CLONE};
};

class ls_clone_rancor_colt: lsd_gar_arc_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Colt";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_rancor";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_rancor_colt.jpg);
    uniformClass = "ls_cloneUniform_rancor_colt";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\rancor\data\uniforms\colt_upper_co.paa),
        QPATHTOF(units\rancor\data\uniforms\colt_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_arc_rancor_colt", "ls_cloneVest_arc_rancor_colt", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_arc_rancor_colt", "ls_cloneVest_arc_rancor_colt", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
};

class ls_clone_rancor_blitz: lsd_gar_arc_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Blitz";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_rancor";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_rancor_blitz.jpg);
    uniformClass = "ls_cloneUniform_rancor_blitz";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\rancor\data\uniforms\blitz_upper_co.paa),
        QPATHTOF(units\rancor\data\uniforms\blitz_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_arc_rancor_blitz", "ls_cloneVest_arc_rancor_blitz", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_arc_rancor_blitz", "ls_cloneVest_arc_rancor_blitz", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
};

class ls_clone_rancor_havoc: lsd_gar_arc_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Havoc";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_rancor";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_rancor_havoc.jpg);
    uniformClass = "ls_cloneUniform_rancor_havoc";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\rancor\data\uniforms\havoc_upper_co.paa),
        QPATHTOF(units\rancor\data\uniforms\havoc_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_arc_rancor_havoc", "ls_cloneVest_arc_rancor_havoc", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_arc_rancor_havoc", "ls_cloneVest_arc_rancor_havoc", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
};
