class ls_clone_misc_fordo: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Captain Fordo";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_misc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_misc_fordo.jpg);

    uniformClass = "ls_cloneUniform_misc_fordo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\misc\data\uniforms\fordo_upper_co.paa),
        QPATHTOF(units\misc\data\uniforms\fordo_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    weapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s_fordo", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15a", "ls_weapon_dc17s_fordo", THROW_PUT};

    linkedItems[] = {"ls_cloneHelmet_modifiedBarc_misc_fordo", "ls_cloneVest_reconNCO_misc_fordo", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_modifiedBarc_misc_fordo", "ls_cloneVest_reconNCO_misc_fordo", LINKED_ITEMS_CLONE};
};

class ls_clone_misc_eod: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "EOD Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_misc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_misc_eod.jpg);

    uniformClass = "ls_cloneUniform_misc_eod";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\misc\data\uniforms\eod_upper_co.paa),
        QPATHTOF(units\misc\data\uniforms\eod_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_misc_eod", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_misc_eod", LINKED_ITEMS_CLONE};
};

class ls_clone_misc_commander: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Commander";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_misc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_misc_commander.jpg);

    uniformClass = "ls_cloneUniform_misc_commander";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\misc\data\uniforms\commander_upper_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo2_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase1_misc_commander", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_misc_commander", LINKED_ITEMS_CLONE};

    ROLE_OFFICER;
};


class ls_clone_misc_captain: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Captain";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_misc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_misc_captain.jpg);

    uniformClass = "ls_cloneUniform_misc_captain";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\misc\data\uniforms\captain_upper_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo2_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase1_misc_captain", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_misc_captain", LINKED_ITEMS_CLONE};

    ROLE_OFFICER;
};

class ls_clone_misc_lieutenant: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Lieutenant";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_misc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_misc_lieutenant.jpg);

    uniformClass = "ls_cloneUniform_misc_lieutenant";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\misc\data\uniforms\lieutenant_upper_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo2_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase1_misc_lieutenant", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_misc_lieutenant", LINKED_ITEMS_CLONE};

    ROLE_OFFICER;
};

class ls_clone_misc_sergeant: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Sergeant";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_misc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_misc_sergeant.jpg);

    uniformClass = "ls_cloneUniform_misc_sergeant";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\misc\data\uniforms\sergeant_upper_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\camo2_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase1_misc_sergeant", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_misc_sergeant", LINKED_ITEMS_CLONE};

    ROLE_LEADER;
};
