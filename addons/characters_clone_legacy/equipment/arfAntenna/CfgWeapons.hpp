class lsd_gar_arfAntenna_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic ARF Antenna";

    model = QPATHTOF(equipment\arfAntenna\lsd_gar_arfAntenna.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\arfAntenna\data\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\icon_clone_arf_antenna_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\arfAntenna\lsd_gar_arfAntenna.p3d);
        modelOff = QPATHTOF(equipment\arfAntenna\lsd_gar_arfAntenna.p3d);
        mass = 4;
        hiddenSelections[] = {"camo1"};
    };
};
