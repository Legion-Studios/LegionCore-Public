class ls_vest_holster: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(holster_vest);
    descriptionShort = "$STR_A3_SP_NOARMOR";

    model = QPATHTOF(vests\holster\ls_vest_holster.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\holster\data\pouches_co.paa)
    };
    picture = QPATHTOF(data\ui\holsterVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\holster\ls_vest_holster.p3d);
        hiddenSelections[] = {"camo1"};
        mass = 5;

        ARMOR_VEST_NONE;
    };
};

class ls_vest_holster_maroon: ls_vest_holster {
    author = AUTHOR;
    displayName = CSTRING(holster_maroon_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\holster\data\pouches_maroon_co.paa)
    };
    picture = QPATHTOF(data\ui\holsterVest_maroon_ui_ca.paa);
};

class ls_vest_holster_brown: ls_vest_holster {
    author = AUTHOR;
    displayName = CSTRING(holster_brown_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\holster\data\pouches_brown_co.paa)
    };
    picture = QPATHTOF(data\ui\holsterVest_brown_ui_ca.paa);
};
