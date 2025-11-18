class ls_gar_phase1Pilot_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Pilot P1 Helmet";

    model = QPATHTOF(helmets\phase1Pilot\ls_cloneHelmet_phase1_pilot.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase1Pilot\data\helmet_co.paa),
        QPATHTOF(helmets\phase1Pilot\data\lifesupport_co.paa),
        QPATHTOF(helmets\phase1Pilot\data\visor_co.paa)
    };
    // picture = QPATHTOF(data\ui\pilot_phase1_helmet_ui_ca.paa);

    subItems[] = {
        "Integrated_NVG_TI_0_F"
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\phase1Pilot\ls_cloneHelmet_phase1_pilot.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "visor"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 50;
                passThrough = 0.5;
            };
        };
    };
};

class ls_gar_phase1Pilot_republic_helmet: ls_gar_phase1Pilot_helmet {
    author = AUTHOR;
    displayName = "Clone Pilot P1 Helmet (Republic)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase1Pilot\data\helmet_republic_co.paa),
        QPATHTOF(helmets\phase1Pilot\data\lifesupport_co.paa),
        QPATHTOF(helmets\phase1Pilot\data\visor_co.paa)
    };
};

class ls_gar_phase1Pilot_enforcer_helmet: ls_gar_phase1Pilot_helmet {
    author = AUTHOR;
    displayName = "Clone Pilot P1 Helmet (Enforcer)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase1Pilot\data\helmet_enforcer_co.paa),
        QPATHTOF(helmets\phase1Pilot\data\lifesupport_co.paa),
        QPATHTOF(helmets\phase1Pilot\data\visor_co.paa)
    };
};
