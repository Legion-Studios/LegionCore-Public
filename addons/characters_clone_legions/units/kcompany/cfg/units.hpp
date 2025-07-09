class ls_clone_kcompany_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_kcompany";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_kcompany_trooper.jpg);

    uniformClass = "ls_cloneUniform_kcompany_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\kcompany\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\kcompany\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_kcompany_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_kcompany_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_kcompany_deviss: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Deviss";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_kcompany";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_kcompany_deviss.jpg);

    uniformClass = "ls_cloneUniform_kcompany_deviss";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\kcompany\data\uniforms\deviss_upper_co.paa),
        QPATHTOF(units\kcompany\data\uniforms\deviss_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_kcompany_deviss", "ls_cloneVest_officer_kCompany_deviss", "lsd_gar_standardSPC_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_kcompany_deviss", "ls_cloneVest_officer_kCompany_deviss", "lsd_gar_standardSPC_nvg", LINKED_ITEMS_CLONE};
};
