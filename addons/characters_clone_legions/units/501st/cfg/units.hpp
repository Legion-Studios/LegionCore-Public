class ls_clone_501st_echo: lsd_gar_arc_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Echo";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_echo.jpg);

    uniformClass = "ls_cloneUniform_501st_echo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\echo_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\echo_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_arc_501st_echo", "ls_cloneVest_arc_501st_echo", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_arc_501st_echo", "ls_cloneVest_arc_501st_echo", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
};

class ls_clone_501st_fives: lsd_gar_arc_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Fives";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_fives.jpg);

    uniformClass = "ls_cloneUniform_501st_fives";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\fives_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\fives_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_arc_501st_fives", "ls_cloneVest_arc_501st_fives", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_arc_501st_fives", "ls_cloneVest_arc_501st_fives", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
};

class ls_clone_501st_hardcase: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Hardcase";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_hardcase.jpg);

    uniformClass = "ls_cloneUniform_501st_hardcase";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\hardcase_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\hardcase_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    weapons[] = {"ls_weapon_z6", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_z6", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_2("ls_magazine_z6"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {ITEM_2("ls_magazine_z6"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};

    linkedItems[] = {"ls_cloneHelmet_phase2_501st_hardcase", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_501st_hardcase", LINKED_ITEMS_CLONE};
    ROLE_MG;
};

class ls_clone_501st_jesse: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Jesse";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_jesse.jpg);

    uniformClass = "ls_cloneUniform_501st_jesse";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\jesse_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\jesse_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_501st_jesse", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_501st_jesse", LINKED_ITEMS_CLONE};
};

class ls_clone_501st_rex: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Rex";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_rex.jpg);

    uniformClass = "ls_cloneUniform_501st_rex";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\rex_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\rex_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_rex_501st_rex", "ls_cloneVest_officer_501st_rex", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_rex_501st_rex", "ls_cloneVest_officer_501st_rex", "lsd_gar_rangefinder_nvg", LINKED_ITEMS_CLONE};
};

class ls_clone_501st_dogma: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Dogma";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_dogma.jpg);

    uniformClass = "ls_cloneUniform_501st_dogma";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\dogma_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\dogma_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_501st_dogma", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_501st_dogma", LINKED_ITEMS_CLONE};
};

class ls_clone_501st_tup: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Tup";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_tup.jpg);

    uniformClass = "ls_cloneUniform_501st_tup";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\tup_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\tup_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_501st_tup", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_501st_tup", LINKED_ITEMS_CLONE};
};

class ls_clone_501st_kix: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Kix";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_kix.jpg);

    uniformClass = "ls_cloneUniform_501st_kix";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\kix_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\kix_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_501st_kix", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_501st_kix", LINKED_ITEMS_CLONE};
    backpack = "ls_gar_medic_backpack";
    ROLE_MEDIC;
};

class ls_clone_501st_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_501st";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_501st_trooper.jpg);

    uniformClass = "ls_cloneUniform_501st_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\501st\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\501st\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_501st_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_501st_trooper", LINKED_ITEMS_CLONE};
};
