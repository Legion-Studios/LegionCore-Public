class ls_clone_coruscantguard_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_coruscantguard";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_coruscantguard_trooper.jpg);

    uniformClass = "ls_cloneUniform_coruscantguard_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\coruscantguard\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\coruscantguard\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_coruscantguard_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_coruscantguard_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_coruscantguard_thorn: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Thorn";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_coruscantguard";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_coruscantguard_thorn.jpg);

    uniformClass = "ls_cloneUniform_coruscantguard_thorn";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\coruscantguard\data\uniforms\thorn_upper_co.paa),
        QPATHTOF(units\coruscantguard\data\uniforms\thorn_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    weapons[] = {"ls_weapon_z6_hammer", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_z6_hammer", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_2("ls_magazine_z6"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};
    respawnMagazines[] = {ITEM_2("ls_magazine_z6"), ITEM_2("ls_magazine_dc17s"), ITEM_2("ls_grenade_n20_magazine")};

    linkedItems[] = {"ls_cloneHelmet_phase2_coruscantguard_thorn", "ls_gar_kamaAntenna_vest", "lsd_gar_p2Commander_v3_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_coruscantguard_thorn", "ls_gar_kamaAntenna_vest", "lsd_gar_p2Commander_v3_nvg", LINKED_ITEMS_CLONE};

    ROLE_MG;
};

class ls_clone_coruscantguard_fox: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Fox";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_coruscantguard";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_coruscantguard_fox.jpg);

    uniformClass = "ls_cloneUniform_coruscantguard_fox";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\coruscantguard\data\uniforms\fox_upper_co.paa),
        QPATHTOF(units\coruscantguard\data\uniforms\fox_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_coruscantguard_fox", "ls_gar_kama_vest", "lsd_gar_p2Commander_v2_nvg", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_coruscantguard_fox", "ls_gar_kama_vest", "lsd_gar_p2Commander_v2_nvg", LINKED_ITEMS_CLONE};
};
