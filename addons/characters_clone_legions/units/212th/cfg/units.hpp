class ls_clone_212th_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_212th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_212th_trooper.jpg);

    uniformClass = "ls_cloneUniform_212th_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\212th\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\212th\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_212th_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_212th_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_212th_airborne: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Airborne Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_212th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_212th_airborne.jpg);

    uniformClass = "ls_cloneUniform_212th_airborne";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\212th\data\uniforms\airborne_upper_co.paa),
        QPATHTOF(units\212th\data\uniforms\airborne_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_airborne_212th_trooper", "ls_gar_airborne_vest", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_airborne_212th_trooper", "ls_gar_airborne_vest", LINKED_ITEMS_CLONE};
};

class ls_clone_212th_boil: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Boil";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_212th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_212th_boil.jpg);

    uniformClass = "ls_cloneUniform_212th_boil";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\212th\data\uniforms\boil_upper_co.paa),
        QPATHTOF(units\212th\data\uniforms\boil_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_212th_boil", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_212th_boil", LINKED_ITEMS_CLONE};
};

class ls_clone_212th_waxer: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Waxer";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_212th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_212th_waxer.jpg);

    uniformClass = "ls_cloneUniform_212th_waxer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\212th\data\uniforms\waxer_upper_co.paa),
        QPATHTOF(units\212th\data\uniforms\waxer_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_212th_waxer", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_212th_waxer", LINKED_ITEMS_CLONE};
};

class ls_clone_marshalCommander_212th_cody: ls_gar_marshalCommander_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Cody";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_212th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_marshalCommander_212th_cody.jpg);

    uniformClass = "ls_cloneUniform_marshalCommander_212th_cody";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\212th\data\uniforms\cody_upper_co.paa),
        QPATHTOF(units\212th\data\uniforms\cody_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_212th_cody", "ls_cloneNVG_phase2MarshalCommander_212th_cody", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_212th_cody", "ls_cloneNVG_phase2MarshalCommander_212th_cody", LINKED_ITEMS_CLONE};
};
