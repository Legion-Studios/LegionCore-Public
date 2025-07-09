class ls_clone_104th_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_104th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_104th_trooper.jpg);

    uniformClass = "ls_cloneUniform_104th_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\104th\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\104th\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_104th_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_104th_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_104th_wolffe: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Wolffe";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_104th";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_104th_wolffe.jpg);

    uniformClass = "ls_cloneUniform_104th_wolffe";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\104th\data\uniforms\wolffe_upper_co.paa),
        QPATHTOF(units\104th\data\uniforms\wolffe_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_barc_104th_wolffe", "ls_cloneVest_kamaAntenna_104th_wolffe", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_barc_104th_wolffe", "ls_cloneVest_kamaAntenna_104th_wolffe", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
};
