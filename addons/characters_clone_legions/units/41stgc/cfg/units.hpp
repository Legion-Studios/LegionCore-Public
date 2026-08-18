class ls_clone_41stgc_trooper: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Trooper";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41stgc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_41stgc_trooper.jpg);

    uniformClass = "ls_cloneUniform_41stgc_trooper";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41stgc\data\uniforms\trooper_upper_co.paa),
        QPATHTOF(units\41stgc\data\uniforms\trooper_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper", LINKED_ITEMS_CLONE};
};

class ls_clone_41stgc_gree: lsd_gar_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Gree";

    faction = "ls_gar_legions";
    editorSubcategory = "ls_edsubcat_clone_41stgc";
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_clone_41stgc_gree.jpg);

    uniformClass = "ls_cloneUniform_41stgc_gree";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\41stgc\data\uniforms\gree_upper_co.paa),
        QPATHTOF(units\41stgc\data\uniforms\gree_lower_co.paa),
        QPATHTOEF(characters_clone_legacy,uniforms\phase2\data\undersuit_co.paa)
    };

    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_gree", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_gree", LINKED_ITEMS_CLONE};
};

class ls_clone_41stgc_dc15s: ls_clone_41stgc_trooper {
    displayName = "Clone Trooper (DC15S)";
    weapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s",THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"),DEFAULT_MAGS };
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"),DEFAULT_MAGS};
};
class ls_clone_41stgc_medic: ls_clone_41stgc_dc15s {
    displayName = "Clone Medic";
    items[]={ITEM_10("FirstAidKit"),"Medikit"};
    respawnItems[]={ITEM_10("FirstAidKit"),"Medikit"};
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_medic_41stgc",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_medic_41stgc",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_dp20: ls_clone_41stgc_trooper {
    displayName = "Clone Breacher";
    weapons[] = {"ls_weapon_dp20", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dp20", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dp20"),DEFAULT_MAGS,"ls_grenade_thermalDetClassC_magazine"};
    respawnMagazines[] = {ITEM_10("ls_magazine_dp20"),DEFAULT_MAGS,"ls_grenade_thermalDetClassC_magazine"};
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_assault_41stgc",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_assault_41stgc",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_comms: ls_clone_41stgc_trooper {
    displayName = "Clone Comms Specialist";
    weapons[] = {"ls_weapon_dc15ac", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15ac", "ls_weapon_dc17s", THROW_PUT};
    backpack = "ls_gar_mediumRadio_backpack";
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_gar_cfr_vest",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_gar_cfr_vest",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_heavy: ls_clone_41stgc_trooper {
    displayName = "Clone Support Gunner";
    weapons[] = {"ls_weapon_z6", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_z6", "ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_z6"),DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_z6"),DEFAULT_MAGS};
    backpack = "ls_gar_heavy_backpack";
    ROLE_MG;
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_kama_41st", "lsd_gar_heavy_nvg",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_kama_41st", "lsd_gar_heavy_nvg",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_sniper: ls_clone_41stgc_trooper {
    displayName = "Clone Sniper";
    weapons[] = {"ls_weapon_dc15x", "ls_weapon_dc17s","ls_clone_electrobinoculars", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15x", "ls_weapon_dc17s","ls_clone_electrobinoculars", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15x"),DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15x"),DEFAULT_MAGS};
    backpack = "ls_gar_beltBag_belt";
    ROLE_SNIPER;
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_assault_41stgc",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_assault_41stgc",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_AT: ls_clone_41stgc_trooper {
    displayName = "Clone Trooper (AT)";
    weapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s","ls_weapon_rps6_loaded", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s","ls_weapon_rps6_loaded", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"),DEFAULT_MAGS };
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"),DEFAULT_MAGS};
    ROLE_AT;
};
class ls_clone_41stgc_AT_heavy: ls_clone_41stgc_AT {
    displayName = "Clone Missile Specialist (AT)";
    weapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s","ls_weapon_plx1_at", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s","ls_weapon_plx1_at", THROW_PUT};
    backpack = "ls_gar_rocket_at_backpack_predef";
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_assault_41stgc",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_assault_41stgc",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_AA: ls_clone_41stgc_AT_heavy {
    displayName = "Clone Missile Specialist (AA)";
    weapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s","ls_weapon_plx1_aa", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15s", "ls_weapon_dc17s","ls_weapon_plx1_aa", THROW_PUT};
    backpack = "ls_gar_rocket_aa_backpack_predef";
};
class ls_clone_41stgc_demo: ls_clone_41stgc_trooper {
    displayName = "Clone Demolitionist";
    weapons[] = {"ls_weapon_rd4", "ls_weapon_dc17s", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_rd4", "ls_weapon_dc17s", THROW_PUT};
    backpack = "ls_gar_medium_demo_backpack_predef";
    ROLE_ENGINEER;
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_gar_clone_vest","lsd_gar_artilleryGunner_nvg",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_gar_clone_vest","lsd_gar_artilleryGunner_nvg",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_sgt: ls_clone_41stgc_trooper {
    displayName = "Clone Sergeant";
    weapons[] = {"ls_weapon_dc15saw", "ls_weapon_dc17s", "ls_clone_electrobinoculars", THROW_PUT};
    respawnWeapons[] = {"ls_weapon_dc15saw", "ls_weapon_dc17s", "ls_clone_electrobinoculars", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15a"),DEFAULT_MAGS };
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15a"),DEFAULT_MAGS};
    backpack = "ls_gar_rto_mini_backpack";
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_kama_41st",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_kama_41st",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_lt: ls_clone_41stgc_sgt {
    displayName = "Clone Lieutenant";
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_officer_41stgc",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_officer_41stgc",LINKED_ITEMS_CLONE};
    ROLE_OFFICER;
};
class ls_clone_41stgc_cpt: ls_clone_41stgc_lt {
    displayName = "Clone Captain";
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_officer_41stgc","lsd_gar_rangefinder_nvg",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_officer_41stgc","lsd_gar_rangefinder_nvg",LINKED_ITEMS_CLONE};
};
class ls_clone_41stgc_cdr: ls_clone_41stgc_cpt {
    displayName = "Clone Commander";
    linkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_commander_41stgc","lsd_gar_p2Commander_nvg",LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2_41stgc_trooper","ls_cloneVest_commander_41stgc","lsd_gar_p2Commander_nvg",LINKED_ITEMS_CLONE};
};
