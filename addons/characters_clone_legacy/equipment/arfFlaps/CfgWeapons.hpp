class lsd_gar_arfFlaps_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic ARF Flaps";

    model = QPATHTOF(equipment\arfFlaps\lsd_gar_arfFlaps.p3d);
    hiddenSelections[] = {"camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\arf\data\camo2_co.paa)
    };
    picture = QPATHTOF(_ui\arf_flaps_ui_ca.paa);

    visionMode[] = {"Normal"};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\arfFlaps\lsd_gar_arfFlaps.p3d);
        modelOff = QPATHTOF(equipment\arfFlaps\lsd_gar_arfFlaps.p3d);
        mass = 4;
        hiddenSelections[] = {"camo2"};
    };
};

class lsd_gar_arfFlapsAntenna_nvg: lsd_gar_arfFlaps_nvg {
    author = AUTHOR;
    displayName = "Republic ARF Flaps + Antenna";

    model = QPATHTOF(equipment\arfFlaps\lsd_gar_arfFlapsAntenna.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\arfAntenna\data\camo1_co.paa),
        QPATHTOF(helmets\arf\data\camo2_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\arfFlaps\lsd_gar_arfFlapsAntenna.p3d);
        modelOff = QPATHTOF(equipment\arfFlaps\lsd_gar_arfFlapsAntenna.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};
