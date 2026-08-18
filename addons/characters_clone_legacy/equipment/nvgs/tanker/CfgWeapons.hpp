class lsd_gar_tanker_nvg: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Armored Plating";

    model = QPATHTOF(equipment\nvgs\tanker\lsd_gar_tanker_nvg.p3d);
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);
    ace_nightvision_border = QPATHTOF(equipment\nvgs\rangefinder\data\optic_ca.paa);
    picture = QPATHTOF(_ui\icon_cloneVisor_ca.paa);

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\tanker\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\tanker\lsd_gar_tanker_nvg.p3d);
        modelOff = QPATHTOF(equipment\nvgs\tanker\lsd_gar_tanker_nvg.p3d);
        mass = 20;
        hiddenSelections[] = {"camo1"};
    };
};
