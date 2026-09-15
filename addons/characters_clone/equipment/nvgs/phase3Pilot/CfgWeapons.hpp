class ls_cloneNVG_phase3Pilot_arc: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(phase3_pilot_visor);

    model = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_arcPilot_module.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\phase3Pilot\data\arc_ca.paa)
    };
    picture = QPATHTOF(data\ui\phase3PilotHelmet_arc_ui_ca.paa);

    visionMode[] = {"Normal", "NVG", "TI"};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_arcPilot_module.p3d);
        modelOff = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_arcPilot_module.p3d);
        mass = 4;
        hiddenSelections[] = {"camo1"};
    };
};

class ls_cloneNVG_phase3Pilot_vwing: ls_cloneNVG_phase3Pilot_arc {
    author = AUTHOR;
    displayName = CSTRING(phase3_pilot_vwing);

    model = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_vwingPilot_module.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\phase3Pilot\data\vwing_co.paa)
    };
    picture = QPATHTOF(data\ui\phase3PilotHelmet_vwing_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_vwingPilot_module.p3d);
        modelOff = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_vwingPilot_module.p3d);
    };
};

class ls_cloneNVG_phase3Pilot_imperial: ls_cloneNVG_phase3Pilot_arc {
    author = AUTHOR;
    displayName = CSTRING(phase3_pilot_imperial);

    model = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_imperialPilot_module.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\phase3Pilot\data\imperial_co.paa)
    };
    picture = QPATHTOF(data\ui\phase3PilotHelmet_imperial_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_imperialPilot_module.p3d);
        modelOff = QPATHTOF(equipment\nvgs\phase3Pilot\ls_nvg_imperialPilot_module.p3d);
    };
};

DEPRECATED(ls_nvg_clone_phase3Pilot_arc,ls_cloneNVG_phase3Pilot_arc);
DEPRECATED(ls_nvg_clone_phase3Pilot_vwing,ls_cloneNVG_phase3Pilot_vwing);
DEPRECATED(lsd_gar_phase3PilotImperial_nvg,ls_cloneNVG_phase3Pilot_imperial);
