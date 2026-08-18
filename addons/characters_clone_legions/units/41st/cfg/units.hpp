class ls_clone_41st_trooper: lsd_gar_phase2_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_41st_trooper.jpg);

    uniformClass = "ls_cloneUniform_41st_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41st\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\41st\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_gar_phase2_helmet", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_gar_phase2_helmet", LINKED_ITEMS_CLONE};
};

class ls_clone_41st_officer: lsd_gar_phase2_base {
    scope = 1;
    author = AUTHOR;

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41st";

    uniformClass = "ls_cloneUniform_41st_officer";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41st\data\uniforms\officer_upper_co.paa),
        QPATHTOF(units\41st\data\uniforms\officer_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };
};
