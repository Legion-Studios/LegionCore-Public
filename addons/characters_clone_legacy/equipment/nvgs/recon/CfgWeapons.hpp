class lsd_gar_recon_nvg: lsd_gar_rangefinder_nvg {
    author = AUTHOR;
    displayName = "Republic Phase 2 Recon Rangefinder";

    model = QPATHTOF(equipment\nvgs\recon\ls_gar_recon_nvg_off.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\common\camo1_co.paa),
        QPATHTOF(equipment\nvgs\common\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\recon\ls_gar_recon_nvg_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\recon\ls_gar_recon_nvg_off.p3d);
        mass = 4;
        hiddenSelections[] = {"camo1", "camo2"};
    };
};
