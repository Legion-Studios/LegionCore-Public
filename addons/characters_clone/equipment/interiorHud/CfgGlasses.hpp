class ls_clone_phase1_hud: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Phase 1 Helmet Interior";

    model = "\A3\Weapons_f\DummyNVG.p3d";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\cloneHud_phase1_ui_ca.paa);

    ACE_Overlay = QPATHTOF(equipment\interiorHud\data\p1_hud_ca.paa);
    ACE_OverlayDirt = QPATHTOF(equipment\interiorHud\data\p1_hud_dirty_ca.paa);
    ACE_OverlayCracked = QPATHTOF(equipment\interiorHud\data\p1_hud_cracked_ca.paa);

    hoa_sling_slingWithHelmet = 1;
};

class ls_clone_phase2_hud: ls_clone_phase1_hud {
    author = AUTHOR;
    displayName = "Clone Phase 2 Helmet Interior";
    picture = QPATHTOF(data\ui\cloneHud_phase2_ui_ca.paa);

    ACE_Overlay = QPATHTOF(equipment\interiorHud\data\p2_hud_ca.paa);
    ACE_OverlayDirt = QPATHTOF(equipment\interiorHud\data\p2_hud_dirty_ca.paa);
    ACE_OverlayCracked = QPATHTOF(equipment\interiorHud\data\p2_hud_cracked_ca.paa);
};

class ls_clone_commando_hud: ls_clone_phase1_hud {
    author = AUTHOR;
    displayName = "Clone Commando Katarn I Helmet Interior";
    picture = QPATHTOF(data\ui\commandoHud_ui_ca.paa);

    ACE_Overlay = QPATHTOF(equipment\interiorHud\data\rc_hud_ca.paa);
    ACE_OverlayDirt = QPATHTOF(equipment\interiorHud\data\rc_hud_dirty_ca.paa);
    ACE_OverlayCracked = QPATHTOF(equipment\interiorHud\data\rc_hud_cracked_ca.paa);
};

class lsd_gar_p1Interior_hud: ls_clone_phase1_hud {
    scope = 1;
    ace_arsenal_uniqueBase = "ls_clone_phase1_hud";
};

class lsd_gar_p2Interior_hud: ls_clone_phase2_hud {
    scope = 1;
    ace_arsenal_uniqueBase = "ls_clone_phase2_hud";
};

class lsd_gar_republicCommando_hud: ls_clone_commando_hud {
    scope = 1;
    ace_arsenal_uniqueBase = "ls_clone_commando_hud";
};
