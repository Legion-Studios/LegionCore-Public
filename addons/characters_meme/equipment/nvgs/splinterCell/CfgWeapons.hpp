class ls_memeNVG_splinterCell: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic SpecOp Trinocular Visor";

    model = QPATHTOF(equipment\nvgs\splinterCell\ls_nvg_meme_splinterCell_off.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\splinterCell\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\splinterCellNVG_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\splinterCell\ls_nvg_meme_splinterCell_on.p3d);
        modelOff = QPATHTOF(equipment\nvgs\splinterCell\ls_nvg_meme_splinterCell_off.p3d);
        mass = 4;
    };
};
