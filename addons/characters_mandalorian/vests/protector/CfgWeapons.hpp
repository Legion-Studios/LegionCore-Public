class ls_mandalorianVest_protectorMale: ls_mandalorianVest_standard {
    author = AUTHOR;
    displayName = "Mandalorian Protector Armor (Male)";

    model = QPATHTOF(vests\protector\ls_vest_mandalorian_protector.p3d);
    hiddenSelections[] = {
        // Knees
        "slim_l_knee",
        "slim_r_knee",
        "traditional_r_knee",
        "traditional_l_knee",
        // Shoulders
        "traditional_r_shoulder",
        "traditional_l_shoulder",
        // Pouches
        "traditional_center_pouch",
        "traditional_r_mid_pouch",
        "traditional_l_mid_pouch",
        "traditional_r_pouch",
        "traditional_l_pouch"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa)
    };
    // picture = QPATHTOF(data\ui\protectorVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\protector\ls_vest_mandalorian_protector.p3d);
        hiddenSelections[] = {
            // Knees
            "slim_l_knee",
            "slim_r_knee",
            "traditional_r_knee",
            "traditional_l_knee",
            // Shoulders
            "traditional_r_shoulder",
            "traditional_l_shoulder",
            // Pouches
            "traditional_center_pouch",
            "traditional_r_mid_pouch",
            "traditional_l_mid_pouch",
            "traditional_r_pouch",
            "traditional_l_pouch"
        };
    };
};

class ls_mandalorianVest_protectorMaleSlim: ls_mandalorianVest_protectorMale {
    author = AUTHOR;
    displayName = "Mandalorian Protector Armor (Male, Slim)";

    hiddenSelectionsTextures[] = {
        // Knees
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        "",
        "",
        // Shoulders
        QPATHTOF(vests\protector\data\camo1_co.paa),
        QPATHTOF(vests\protector\data\camo1_co.paa),
        // Pouches
        "",
        "",
        "",
        "",
        ""
    };
    // picture = QPATHTOF(data\ui\protectorVestSlim_ui_ca.paa);
};

DEPRECATED(ls_mandalorian_protectorMaleSlim_vest,ls_mandalorianVest_protectorMaleSlim);
