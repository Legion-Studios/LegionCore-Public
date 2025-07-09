class ls_gar_phase2Pilot_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Pilot Phase 2 Helmet";

    model = QPATHTOF(helmets\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d);
    hiddenSelections[] = {
        "camo1",
        "visor"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\phase2Pilot\data\helmet_co.paa),
        QPATHTOF(helmets\phase2Pilot\data\visor_co.paa)
    };
    subItems[] = {
        "Integrated_NVG_TI_0_F"
    };

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d);
        allowedSlots[] = {801, 901, 701, 605};
        hiddenSelections[] = {
            "camo1",
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
