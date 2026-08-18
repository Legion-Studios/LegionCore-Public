P2_UNIT(standard,eod);

class ls_clone_phase2_standard_DC15A: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = ECSTRING(characters_clone,cloneTrooper);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_DC15A.jpg);

    weapons[] = {"ls_weapon_dc15a", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15a", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15a"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15a"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "";
};

class ls_clone_phase2_standard_DC15S: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_DC15S);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_DC15S.jpg);

    weapons[] = {"ls_weapon_dc15s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "";
};

class ls_clone_phase2_standard_breacher: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_breacher);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_breacher.jpg);

    weapons[] = {"ls_weapon_dp20", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dp20", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dp20"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dp20"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "";
};

class ls_clone_phase2_standard_RTO: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_rto);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_RTO.jpg);

    weapons[] = {"ls_weapon_dc15ac", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15ac", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15a"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15a"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_radio";
};

class ls_clone_phase2_standard_supportGunner: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_supportGunner);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_supportGunner.jpg);

    weapons[] = {"ls_weapon_z6", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_z6", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_z6"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_z6"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_heavy";

    ROLE_MG;
};

class ls_clone_phase2_standard_sniper: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_sniper);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_sniper.jpg);

    weapons[] = {"ls_weapon_dc15x", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15x", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15x"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15x"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", "ls_cloneNVG_phase2_visor", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", "ls_cloneNVG_phase2_visor", LINKED_ITEMS_CLONE};
    backpack = "";

    ROLE_SNIPER;
};

class ls_clone_phase2_standard_AT: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_AT);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_AT.jpg);

    weapons[] = {"ls_weapon_dc15s", "ls_weapon_rps6_loaded", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", "ls_weapon_rps6_loaded", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "";

    ROLE_AT;
};

class ls_clone_phase2_standard_heavyAT: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_heavyAT);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_heavyAT.jpg);

    weapons[] = {"ls_weapon_dc15s", "ls_weapon_plx1_at", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", "ls_weapon_plx1_at", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), "ls_magazine_plx1_at_ai", DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), "ls_magazine_plx1_at_ai", DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_rocket_predef_heavyAT";

    ROLE_AT;
};

class ls_clone_phase2_standard_heavyAA: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_heavyAA);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_heavyAA.jpg);

    weapons[] = {"ls_weapon_dc15s", "ls_weapon_plx1_aa", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", "ls_weapon_plx1_aa", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), "ls_magazine_plx1_aa_ai", DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), "ls_magazine_plx1_aa_ai", DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_rocket_predef_heavyAA";

    ROLE_AT;
};

class ls_clone_phase2_standard_demo: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_demo);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_demo.jpg);

    weapons[] = {"ls_weapon_dc15s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_heavy_predef_demo";

    ROLE_ENGINEER;
};

class ls_clone_phase2_standard_medic: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_medic);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_medic.jpg);

    weapons[] = {"ls_weapon_dc15s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    items[] = {ITEM_10("FirstAidKit"), "Medikit"};
    respawnItems[] = {ITEM_10("FirstAidKit"), "Medikit"};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_medic";

    ROLE_MEDIC;
};

class ls_clone_phase2_standard_sergeant: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_sergeant);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_sergeant.jpg);

    weapons[] = {"ls_weapon_dc15s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_recon", "ls_cloneNVG_phase2_rangefinder", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_recon", "ls_cloneNVG_phase2_rangefinder", LINKED_ITEMS_CLONE};
    backpack = "";

    ROLE_LEADER;
};

class ls_clone_phase2_standard_lieutenant: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_lieutenant);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_lieutenant.jpg);

    weapons[] = {"ls_weapon_dc15s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_lieutenant", "ls_cloneNVG_phase2_rangefinder", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_lieutenant", "ls_cloneNVG_phase2_rangefinder", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_miniLR_attachment";

    ROLE_OFFICER;
};

class ls_clone_phase2_standard_captain: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_captain);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_captain.jpg);

    weapons[] = {"ls_weapon_dc15s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_officer", "ls_cloneNVG_phase2_rangefinder", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_officer", "ls_cloneNVG_phase2_rangefinder", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_miniLR_attachment";

    ROLE_OFFICER;
};

class ls_clone_phase2_standard_commander: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_commander);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_commander.jpg);

    weapons[] = {"ls_weapon_dc15s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_officer", "ls_cloneNVG_phase2_commander", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2", "ls_cloneVest_officer", "ls_cloneNVG_phase2_commander", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_miniLR_attachment";

    ROLE_OFFICER;
};

class ls_clone_phase2_standard_pilot: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_pilot);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_pilot.jpg);

    weapons[] = {"ls_weapon_dc17s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc17s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc17s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc17s"), DEFAULT_MAGS};
    linkedItems[] = {"ls_cloneHelmet_phase2Pilot", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase2Pilot", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_miniLR_attachment";

    ROLE_PILOT;
};

class ls_clone_phase2_standard_arcPilot: ls_clone_phase2_standard_pilot {
    author = AUTHOR;
    displayName = CSTRING(clone_arcPilot);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_arcPilot.jpg);

    linkedItems[] = {"ls_cloneHelmet_phase3Pilot", "ls_cloneVest_basic", "ls_cloneNVG_phase3Pilot_arc", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase3Pilot", "ls_cloneVest_basic", "ls_cloneNVG_phase3Pilot_arc", LINKED_ITEMS_CLONE};
};

class ls_clone_phase2_standard_vwingPilot: ls_clone_phase2_standard_pilot {
    author = AUTHOR;
    displayName = CSTRING(clone_vwingPilot);

    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_vwingPilot.jpg);

    linkedItems[] = {"ls_cloneHelmet_phase3Pilot", "ls_cloneVest_basic", "ls_nvg_clone_phase3Pilot_vwing", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase3Pilot", "ls_cloneVest_basic", "ls_nvg_clone_phase3Pilot_vwing", LINKED_ITEMS_CLONE};
};

class ls_clone_phase2_standard_atrtDriver: ls_clone_phase2_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(clone_atrtDriver);

    // editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase2_standard_atrtDriver.jpg);

    weapons[] = {"ls_weapon_dc15s", THROW_PUT}; \
    respawnWeapons[] = {"ls_weapon_dc15s", THROW_PUT};
    magazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};
    respawnMagazines[] = {ITEM_10("ls_magazine_dc15s"), DEFAULT_MAGS};

    ROLE_CREWMAN;

    linkedItems[] = {"ls_cloneHelmet_atrtDriver", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_atrtDriver", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    backpack = "ls_cloneBackpack_miniLR_attachment";
};

class ls_clone_phase1_standard_DC15A: ls_clone_phase2_standard_DC15A {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_DC15A.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_DC15S: ls_clone_phase2_standard_DC15S {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_DC15S.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_breacher: ls_clone_phase2_standard_breacher {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_breacher.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_RTO: ls_clone_phase2_standard_RTO {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_RTO.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_supportGunner: ls_clone_phase2_standard_supportGunner {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_supportGunner.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_sniper: ls_clone_phase2_standard_sniper {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_sniper.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", "ls_cloneNVG_phase1_visor", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", "ls_cloneNVG_phase1_visor", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_AT: ls_clone_phase2_standard_AT {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_AT.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_heavyAT: ls_clone_phase2_standard_heavyAT {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_heavyAT.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_heavyAA: ls_clone_phase2_standard_heavyAA {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_heavyAA.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_demo: ls_clone_phase2_standard_demo {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_demo.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_medic: ls_clone_phase2_standard_medic {
    author = AUTHOR;
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_medic.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_sergeant: ls_clone_phase2_standard_sergeant {
    author = AUTHOR;
    uniformClass = "ls_cloneUniform_phase1_standard_sergeant";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\standard\data\uniforms\sergeant_phase1_upper_co.paa),
        QPATHTOEF(characters_clone,uniforms\phase2\data\lower_armor_co.paa),
        QPATHTOEF(characters_clone,uniforms\phase2\data\undersuit_co.paa)
    };
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_sergeant.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1_standard_sergeant", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_standard_sergeant", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_lieutenant: ls_clone_phase2_standard_lieutenant {
    author = AUTHOR;
    uniformClass = "ls_cloneUniform_phase1_standard_lieutenant";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\standard\data\uniforms\lieutenant_phase1_upper_co.paa),
        QPATHTOEF(characters_clone,uniforms\phase2\data\lower_armor_co.paa),
        QPATHTOEF(characters_clone,uniforms\phase2\data\undersuit_co.paa)
    };
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_lieutenant.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1_standard_lieutenant", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_standard_lieutenant", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_captain: ls_clone_phase2_standard_captain {
    author = AUTHOR;
    uniformClass = "ls_cloneUniform_phase1_standard_captain";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\standard\data\uniforms\captain_phase1_upper_co.paa),
        QPATHTOEF(characters_clone,uniforms\phase2\data\lower_armor_co.paa),
        QPATHTOEF(characters_clone,uniforms\phase2\data\undersuit_co.paa)
    };
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_captain.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1_standard_captain", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_standard_captain", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};

class ls_clone_phase1_standard_commander: ls_clone_phase2_standard_commander {
    author = AUTHOR;
    uniformClass = "ls_cloneUniform_phase1_standard_commander";
    hiddenSelectionsTextures[] = {
        QPATHTOF(units\standard\data\uniforms\commander_phase1_upper_co.paa),
        QPATHTOEF(characters_clone,uniforms\phase2\data\lower_armor_co.paa),
        QPATHTOEF(characters_clone,uniforms\phase2\data\undersuit_co.paa)
    };
    editorSubcategory = "ls_edsubcat_republic_clone_phase1";
    editorPreview = QPATHTOF(data\ui\editorPreviews\standard\ls_clone_phase1_standard_commander.jpg);
    linkedItems[] = {"ls_cloneHelmet_phase1_standard_commander", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
    respawnlinkedItems[] = {"ls_cloneHelmet_phase1_standard_commander", "ls_cloneVest_basic", LINKED_ITEMS_CLONE};
};
