class lsd_gar_artilleryGunner_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Artillery Gunner Shielding [NV]";

    model = QPATHTOF(equipment\nvgs\artilleryGunner\lsd_gar_artilleryGunner_nvg.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\artilleryGunner\data\camo1_co.paa)
    };
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\rangefinder\data\optic_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\artilleryGunner\lsd_gar_artilleryGunner_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\artilleryGunner\lsd_gar_artilleryGunner_nvg.p3d);
        mass = 20;
        hiddenSelections[] = {"camo1", "camo2"};
    };
};
