P2_UNIT(du,trooper);

class ls_clone_du_doom: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Doom";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_du";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_101st_doom.jpg);

    uniformClass = "ls_cloneUniform_du_doom";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\du\data\uniforms\legacy\doom_upper_co.paa),
        QPATHTOF(units\du\data\uniforms\legacy\doom_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_du_doom", "ls_cloneVest_kama_du_doom", "lsd_gar_p2Commander_v2_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_du_doom", "ls_cloneVest_kama_du_doom", "lsd_gar_p2Commander_v2_nvg", LINKED_ITEMS_CLONE};
};

SPAWN_UNITS_FULL(du,phase2);
