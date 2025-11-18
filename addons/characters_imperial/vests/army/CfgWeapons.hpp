class ls_imperialVest_army: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Army Vest";

    model = QPATHTOF(vests\army\ls_vest_imperial_army.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\vest_army_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army.p3d);
        hiddenSelections[] = {"camo"};
        class HitpointsProtectionInfo {
            class Chest {
                HitpointName = "HitChest";
                armor = 10;
                PassThrough = 0.3;
            };

            class Diaphragm: Chest {
                HitpointName = "HitDiaphragm";
            };

            class Abdomen: Chest {
                HitpointName = "HitAbdomen";
            };
        };
    };
};

class ls_imperialVest_officer: ls_imperialVest_army {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Officer Vest";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa)
    };
};

class ls_imperialVest_medic: ls_imperialVest_army {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Medic Vest";
     hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa)
    };
};

class ls_imperialVest_army_black: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Army Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
};

class ls_imperialVest_officer_black: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Officer Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa)
    };
};

class ls_imperialVest_medic_black: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Medic Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa)
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

class ls_imperialVest_medic_mudtrooper: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Medic Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_medic_co.paa)
    };
};

class ls_imperialVest_officer_mudtrooper: ls_imperialVest_army {
    author = AUTHOR;
    displayName = "Imperial Officer Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_off_co.paa)
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

class ls_imperialVest_officer_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Officer Vest (Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_medic_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Medic Vest (Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_black_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Army Vest (Riot, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_officer_black_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Officer Vest (Riot, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_medic_black_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Medic Vest (Riot, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa),
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

class ls_imperialVest_officer_mudtrooper_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Officer Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_medic_mudtrooper_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = "Imperial Medic Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_medic_co.paa),
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

class ls_imperialVest_medic_damaged: ls_imperialVest_army_damaged {
    author = AUTHOR;
    displayName = "Imperial Medic Vest (Damaged)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_officer_damaged: ls_imperialVest_army_damaged {
    author = AUTHOR;
    displayName = "Imperial officer Vest (Damaged)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};
class ls_imperialVest_mudtrooper_damaged: ls_imperialVest_army_damaged {
    author = AUTHOR;
    displayName = "Imperial Army Vest (MudTrooper, Damaged)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
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
    picture = QPATHTOF(data\ui\vest_army_light_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_light.p3d);
    };
};

class ls_imperialVest_officer_light: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Officer Light Vest";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa)
    };
};

class ls_imperialVest_medic_light: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Medic Light Vest";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa)
    };
};

class ls_imperialVest_army_light_black: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
};
class ls_imperialVest_officer_light_black: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Officer Light Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa)
    };
};
class ls_imperialVest_medic_light_black: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Medic Light Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa)
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

class ls_imperialVest_officer_light_mudtrooper: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Officer Light Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_off_co.paa)
    };
};

class ls_imperialVest_medic_light_mudtrooper: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = "Imperial Medic Light Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_medic_co.paa)
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

class ls_imperialVest_officer_light_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Officer Light Vest (Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_medic_light_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Medic Light Vest (Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_officer_light_black_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Officer Light Vest (Riot, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_light_black_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Army Light Vest (Riot, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_medic_light_black_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Medic Light Vest (Riot, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa),
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

class ls_imperialVest_officer_light_mudtrooper_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Officer Light Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_medic_light_mudtrooper_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = "Imperial Medic Light Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_medic_co.paa),
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

class ls_imperialVest_officer_medium: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Officer Medium Vest";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa)
    };
};

class ls_imperialVest_medic_medium: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Medic Medium Vest";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa)
    };
};

class ls_imperialVest_army_medium_black: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
};

class ls_imperialVest_officer_medium_black: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Officer Medium Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa)
    };
};

class ls_imperialVest_medic_medium_black: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Medic Medium Vest (Riot)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa)
    };
};

class ls_imperialVest_army_medium_ISB: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (ISB)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_isb_co.paa)
    };
};

class ls_imperialVest_officer_medium_mudtrooper: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Officer Medium Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_off_co.paa)
    };
};

class ls_imperialVest_army_medium_mudtrooper: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa)
    };
};

class ls_imperialVest_medic_medium_mudtrooper: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = "Imperial Medic Medium Vest (Mudtrooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_medic_co.paa)
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

class ls_imperialVest_medic_medium_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Medic Medium Vest (Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_officer_medium_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Officer Medium Vest (Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_army_medium_black_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Army Medium Vest (Riot, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_officer_medium_black_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Officer Medium Vest (Riot, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_medic_medium_black_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Medic Medium Vest (Black, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa),
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

class ls_imperialVest_officer_medium_mudtrooper_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Officer Medium Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_medic_medium_mudtrooper_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Medic Medium Vest (Mudtrooper, Holster)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
};

class ls_imperialVest_isb_heavy_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = "Imperial Tactical Army (ISB, Holster)";
    model = QPATHTOF(vests\army\ls_vest_imperial_army_heavy_h.p3d);
    hiddenSelections[] = { "camo", "camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_isb_co.paa),
        QPATHTOF(vests\army\data\tacExtras_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_heavy_h.p3d);
        hiddenSelections[] = {"camo", "camo1", "camo2"};

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Arms: Chest {
                HitpointName = "HitArms";
                armor = 6;
            };
        };
    };
};
