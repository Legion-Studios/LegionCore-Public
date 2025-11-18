class ls_clone_horncompany_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_horncompany";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_horncompany_trooper.jpg);

    uniformClass = "ls_cloneUniform_horncompany_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\horncompany\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\horncompany\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_horncompany_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_horncompany_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_horncompany_lock: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Lock";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_horncompany";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_horncompany_lock.jpg);

    uniformClass = "ls_cloneUniform_horncompany_lock";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\horncompany\data\uniforms\lock_upper_co.paa),
        QPATHTOF(units\horncompany\data\uniforms\lock_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_horncompany_lock", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_horncompany_lock", "lsd_gar_p2Commander_nvg", LINKED_ITEMS_CLONE};
};
