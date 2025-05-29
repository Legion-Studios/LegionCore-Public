class ls_nvg_clone_phase3Pilot_arc: ls_nvg_base {
    scope = 2;
    displayName = "Republic Phase 3 Pilot (Visor) [NV/TI]";
    model = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_arcPilot_module.p3d);
    visionMode[] = {
        "Normal",
        "NVG",
        "TI"
    };
    thermalMode[] = {0, 1};
    hiddenSelections[] = {
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\phase3Pilot\data\arc_ca.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_arcPilot_module.p3d);
        modelOff = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_arcPilot_module.p3d);
        mass = 4;
        hiddenSelections[] = {
            "camo1"
        };
    };
};

class ls_nvg_clone_phase3Pilot_vwing: ls_nvg_clone_phase3Pilot_arc {
    displayName = "Republic Phase 3 Pilot (Vwing) [NV/TI]";
    model = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_vwingPilot_module.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\phase3Pilot\data\vwing_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_vwingPilot_module.p3d);
        modelOff = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_vwingPilot_module.p3d);
    };
};

class lsd_gar_phase3PilotImperial_nvg: ls_nvg_clone_phase3Pilot_arc {
    displayName = "Imperial Phase 3 Pilot [NV/TI]";
    model = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_imperialPilot_module.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\phase3Pilot\data\imperial_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_imperialPilot_module.p3d);
        modelOff = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_imperialPilot_module.p3d);
    };
};

// class lsd_gar_phase3PilotVisor_nvg: ls_nvg_clone_phase3Pilot_arc {
//     scope = 1;
// };
// class lsd_gar_phase3PilotVwing_nvg: ls_nvg_clone_phase3Pilot_vwing {
//     scope = 1;
// };
// class lsd_gar_phase3PilotImperial_nvg: lsd_gar_phase3PilotImperial_nvg {
//     scope = 1;
// };