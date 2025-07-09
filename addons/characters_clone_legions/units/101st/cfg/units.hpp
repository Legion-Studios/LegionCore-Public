class ls_clone_101st_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_101st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_101st_trooper.jpg);

    uniformClass = "ls_cloneUniform_101st_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\101st\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\101st\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_101st_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_101st_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_101st_doom: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Doom";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_101st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_101st_doom.jpg);

    uniformClass = "ls_cloneUniform_101st_doom";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\101st\data\uniforms\doom_upper_co.paa),
        QPATHTOF(units\101st\data\uniforms\doom_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_101st_doom", "ls_cloneVest_kama_101st_doom", "lsd_gar_p2Commander_v2_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_101st_doom", "ls_cloneVest_kama_101st_doom", "lsd_gar_p2Commander_v2_nvg", LINKED_ITEMS_CLONE};
};
