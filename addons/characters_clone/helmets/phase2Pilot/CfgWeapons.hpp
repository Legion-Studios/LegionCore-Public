class ls_cloneHelmet_phase2Pilot: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase2_pilot_helmet);

    model = QPATHTOF(helmets\phase2Pilot\ls_helmet_clone_pilotPhase2.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase2Pilot\data\camo1_co.paa),
        QPATHTOF(helmets\phase2Pilot\data\camo2_co.paa),
        QPATHTOF(helmets\phase2Pilot\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\phase2PilotHelmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase2Pilot\ls_helmet_clone_pilotPhase2.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "visor"
        };
    };
};
