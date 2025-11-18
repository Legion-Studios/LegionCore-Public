class ls_memeNVG_zygerrianDisguise: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Zygerrian Disguise";

    model = QPATHTOF(equipment\nvgs\zygerianDisguise\ls_nvg_meme_zygerianDisguise.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\zygerianDisguise\data\camo1_co.paa)
    };
    // picture = QPATHTOF(data\ui\catears_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\nvgs\zygerianDisguise\ls_nvg_meme_zygerianDisguise.p3d);
        modelOff = QPATHTOF(equipment\nvgs\zygerianDisguise\ls_nvg_meme_zygerianDisguise.p3d);
        mass = 4;
    };
};
