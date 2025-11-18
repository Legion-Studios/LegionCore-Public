class ls_vest_holster: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Belt and Holster";

    model = QPATHTOF(vests\holster\ls_vest_holster.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\holster\data\pouches_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\holster\ls_vest_holster.p3d);
        hiddenSelections[] = {"camo1"};
    };
};

class ls_vest_holster_maroon: ls_vest_holster {
    author = AUTHOR;
    displayName = "Belt and Holster (Maroon)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\holster\data\pouches_maroon_co.paa)
    };
};

class ls_vest_holster_brown: ls_vest_holster {
    author = AUTHOR;
    displayName = "Belt and Holster (Brown)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\holster\data\pouches_brown_co.paa)
    };
};
