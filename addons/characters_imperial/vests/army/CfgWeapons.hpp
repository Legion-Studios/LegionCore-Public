class ls_imperialVest_army: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Army Vest";

    model = QPATHTOF(vests\army\ls_vest_imperial_army.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa)
    };
    picture = QPATHTOF(_ui\army_vest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army.p3d);
        hiddenSelections[] = {"camo"};
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName = "HitChest";
                armor = 10;
                PassThrough = 0.3;
            };
        };
    };
};

class ls_imperialVest_army_black: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Army Vest (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
};

class ls_imperialVest_army_ISB: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Army Vest (ISB)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa)
    };
};

class ls_imperialVest_army_mudtrooper: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Army Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa)
    };
};

class ls_imperialVest_army_h: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Army Vest (Holster)";
    model = QPATHTOF(vests\army\ls_vest_imperial_army_h.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_h.p3d);
        hiddenSelections[] = {"camo", "camo1"};
    };
};

class ls_imperialVest_army_black_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Army Vest (Black, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_ISB_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Army Vest (ISB, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_mudtrooper_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Army Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_damaged: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Army Vest (Damaged)";
    model = QPATHTOF(vests\army\ls_vest_imperial_army_damaged.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\damaged\camo_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_damaged.p3d);
    };
};

// Light variants
class ls_imperialVest_army_light: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest";

    model = QPATHTOF(vests\army\ls_vest_imperial_army_light.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa)
    };
    picture = QPATHTOF(_ui\army_vest_light_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_light.p3d);
    };
};

class ls_imperialVest_army_light_black: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
};

class ls_imperialVest_army_light_ISB: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (ISB)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_isb_co.paa)
    };
};

class ls_imperialVest_army_light_mudtrooper: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa)
    };
};

class ls_imperialVest_army_light_h: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (Holster)";
    model = QPATHTOF(vests\army\ls_vest_imperial_army_light_h.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_light_h.p3d);
        hiddenSelections[] = {"camo", "camo1"};
    };
};

class ls_imperialVest_army_light_black_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (Black, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_light_ISB_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (ISB, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_light_mudtrooper_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_medium: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest";
    model = QPATHTOF(vests\army\ls_vest_imperial_army_medium.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_medium.p3d);
    };
};

class ls_imperialVest_army_medium_black: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
};

class ls_imperialVest_army_medium_ISB: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (ISB)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_isb_co.paa)
    };
};

class ls_imperialVest_army_medium_mudtrooper: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa)
    };
};

class ls_imperialVest_army_medium_h: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (Holster)";
    model = QPATHTOF(vests\army\ls_vest_imperial_army_medium_h.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_medium_h.p3d);
        hiddenSelections[] = {"camo", "camo1"};
    };
};

class ls_imperialVest_army_medium_black_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (Black, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_medium_ISB_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (ISB, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_medium_mudtrooper_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};
