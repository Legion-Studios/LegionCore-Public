class ls_clone_phase1_pilot: ls_clone_phase2_base {
    displayName = "Clone Pilot (Phase 1)";
    ROLE_PILOT;
    linkedItems[] += {
    };
    respawnLinkedItems[] += {
    };
};

class ls_clone_phase1_crewman: ls_clone_phase1_pilot {
    displayName = "Clone Crewman (Phase 1)";
    ROLE_CREWMAN;
    linkedItems[] += {
    };
    respawnLinkedItems[] += {
    };
};

class ls_clone_phase2_pilot: ls_clone_phase2_base {
    scope = 2;
    displayName = "Clone Pilot (Phase 2)";
    ROLE_PILOT;
    linkedItems[] += {
        "ls_cloneHelmet_phase2Pilot"
    };
    respawnLinkedItems[] += {
        "ls_cloneHelmet_phase2Pilot"
    };
};

class ls_clone_arc_pilot: ls_clone_phase2_pilot {
    displayName = "ARC Pilot";
    model = "\A3\characters_F\Common\pilot_f.p3d";
    linkedItems[] = {
        "ls_cloneHelmet_phase3Pilot",
        "ls_nvg_clone_phase3Pilot_arc"
    };
    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase3Pilot",
        "ls_nvg_clone_phase3Pilot_arc"
    };
};

class ls_clone_vwing_pilot: ls_clone_arc_pilot {
    displayName = "V-Wing Pilot";
    linkedItems[] = {
        "ls_cloneHelmet_phase3Pilot",
        "ls_nvg_clone_phase3Pilot_vwing"
    };
    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase3Pilot",
        "ls_nvg_clone_phase3Pilot_vwing"
    };
};

class ls_clone_imperial_pilot: ls_clone_arc_pilot {
    displayName = "Imperial Pilot";
    linkedItems[] = {
        "ls_cloneHelmet_phase3Pilot",
        "lsd_gar_phase3PilotImperial_nvg"
    };
    respawnLinkedItems[] = {
        "ls_cloneHelmet_phase3Pilot",
        "lsd_gar_phase3PilotImperial_nvg"
    };
};
