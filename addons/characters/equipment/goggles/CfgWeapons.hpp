class ls_nvg_goggles: ls_nvg_base {
    scope = 2;
    author = AUTHOR;
    displayname = "Goggles";

    model = QPATHTOF(equipment\goggles\ls_nvg_goggles.p3d);
    hiddenSelections[] = {
        "camo",
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_ca.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(equipment\goggles\ls_nvg_goggles.p3d);
        modelOff = QPATHTOF(equipment\goggles\ls_nvg_goggles.p3d);
        hiddenSelections[] = {
            "camo",
            "camo1"
        };
    };
};

class ls_nvg_goggles_blue: ls_nvg_goggles {
    displayName = "Goggles (Blue)";
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_blue_ca.paa)
    };
};

class ls_nvg_goggles_green: ls_nvg_goggles {
    displayName = "Goggles (Green)";
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_green_ca.paa)
    };
};

class ls_nvg_goggles_orange: ls_nvg_goggles {
    displayName = "Goggles (Orange)";
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_orange_ca.paa)
    };
};

class ls_nvg_goggles_white: ls_nvg_goggles {
    displayName = "Goggles (White)";
    author = AUTHOR;
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\goggles\data\goggles_co.paa),
        QPATHTOF(equipment\goggles\data\goggles_white_ca.paa)
    };
};
