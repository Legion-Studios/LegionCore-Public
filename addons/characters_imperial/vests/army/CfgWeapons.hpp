class ls_imperialVest_army: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(army_vest);

    model = QPATHTOF(vests\army\ls_vest_imperial_army.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army.p3d);
        hiddenSelections[] = {"camo"};

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {};
            class Diaphragm: Diaphragm {};
            class Abdomen: Abdomen {};
            class Arms {
                hitpointName = "HitArms";
                armor = 5;
                passThrough = 0.3;
            };
            class LeftArm: Arms {
                hitpointName = "HitLeftArm";
            };
            class RightArm: Arms {
                hitpointName = "HitRightArm";
            };
        };
    };
};

class ls_imperialVest_medic: ls_imperialVest_army {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(army_medic_vest);
     hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medic_ui_ca.paa);
};

class ls_imperialVest_officer: ls_imperialVest_army {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(army_officer_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_ui_ca.paa);
};

class ls_imperialVest_army_black: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_black_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_black_ui_ca.paa);
};

class ls_imperialVest_medic_black: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_medic_black_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medic_black_ui_ca.paa);
};

class ls_imperialVest_officer_black: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_officer_black_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_black_ui_ca.paa);
};

class ls_imperialVest_army_ISB: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_isb_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_isb_ui_ca.paa);
};

class ls_imperialVest_officer_ISB: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_officer_isb_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_isb_off_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_isb_ui_ca.paa);
};

class ls_imperialVest_army_mudtrooper: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_mudtrooper_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_medic_mudtrooper: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_medic_mudtrooper_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_medic_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medic_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_officer_mudtrooper: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_officer_mudtrooper_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_off_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_army_h: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_holster_vest);
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

class ls_imperialVest_medic_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_medic_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medic_ui_ca.paa);
};

class ls_imperialVest_officer_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_officer_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_ui_ca.paa);
};

class ls_imperialVest_army_black_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_black_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_black_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_black_ui_ca.paa);
};

class ls_imperialVest_medic_black_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_medic_black_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_black_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medic_black_ui_ca.paa);
};

class ls_imperialVest_officer_black_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_officer_black_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_black_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_black_ui_ca.paa);
};

class ls_imperialVest_army_ISB_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_isb_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_isb_ui_ca.paa);
};

class ls_imperialVest_officer_ISB_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_officer_isb_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_isb_off_co.paa),
        QPATHTOF(vests\tacbelt\data\camo1_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_isb_ui_ca.paa);
};

class ls_imperialVest_army_mudtrooper_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_mudtrooper_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_medic_mudtrooper_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_medic_mudtrooper_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medic_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_officer_mudtrooper_h: ls_imperialVest_army_h {
    author = AUTHOR;
    displayName = CSTRING(army_officer_mudtrooper_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_army_damaged: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_damaged_vest);
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
    displayName = CSTRING(army_medic_damaged_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_medic_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medic_ui_ca.paa);
};

class ls_imperialVest_officer_damaged: ls_imperialVest_army_damaged {
    author = AUTHOR;
    displayName = CSTRING(army_officer_damaged_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_ui_ca.paa);
};
class ls_imperialVest_army_light: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_light_vest);

    model = QPATHTOF(vests\army\ls_vest_imperial_army_light.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_light_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_light.p3d);

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Chest: Chest {
                armor = 12;
            };
            class Diaphragm: Diaphragm {
                armor = 12;
            };
            class Abdomen: Abdomen {
                armor = 12;
            };
            class Arms {
                hitpointName = "HitArms";
                armor = 0;
                passThrough = 1;
            };
            class LeftArm: Arms {
                hitpointName = "HitLeftArm";
            };
            class RightArm: Arms {
                hitpointName = "HitRightArm";
            };
        };
    };
};

class ls_imperialVest_army_light_black: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = CSTRING(army_light_black_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_light_black_ui_ca.paa);
};

class ls_imperialVest_army_light_ISB: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = CSTRING(army_light_isb_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_light_isb_ui_ca.paa);
};

class ls_imperialVest_army_light_mudtrooper: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = CSTRING(army_light_mudtrooper_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_light_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_army_light_h: ls_imperialVest_army_light {
    author = AUTHOR;
    displayName = CSTRING(army_light_holster_vest);
    model = QPATHTOF(vests\army\ls_vest_imperial_army_light_h.p3d);
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_light_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_light_h.p3d);
        hiddenSelections[] = {"camo", "camo1"};
    };
};

class ls_imperialVest_army_light_black_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = CSTRING(army_light_black_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_light_black_ui_ca.paa);
};

class ls_imperialVest_army_light_ISB_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = CSTRING(army_light_isb_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_light_isb_ui_ca.paa);
};

class ls_imperialVest_army_light_mudtrooper_h: ls_imperialVest_army_light_h {
    author = AUTHOR;
    displayName = CSTRING(army_light_mudtrooper_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_light_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_army_medium: ls_imperialVest_army {
    author = AUTHOR;
    displayName = CSTRING(army_medium_vest);
    model = QPATHTOF(vests\army\ls_vest_imperial_army_medium.p3d);
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medium_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_medium.p3d);

        class HitpointsProtectionInfo: HitpointsProtectionInfo {
            class Arms {
                hitpointName = "HitArms";
                armor = 0;
                passThrough = 1;
            };
            class LeftArm: Arms {
                hitpointName = "HitLeftArm";
            };
            class RightArm: Arms {
                hitpointName = "HitRightArm";
            };
        };
    };
};

class ls_imperialVest_army_medium_black: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = CSTRING(army_medium_black_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medium_black_ui_ca.paa);
};

class ls_imperialVest_army_medium_ISB: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = CSTRING(army_medium_isb_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medium_isb_ui_ca.paa);
};

class ls_imperialVest_army_medium_mudtrooper: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = CSTRING(army_medium_mudtrooper_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medium_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_army_medium_h: ls_imperialVest_army_medium {
    author = AUTHOR;
    displayName = CSTRING(army_medium_holster_vest);
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
    displayName = CSTRING(army_medium_black_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_black_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_black_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medium_black_ui_ca.paa);
};

class ls_imperialVest_army_medium_ISB_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = CSTRING(army_medium_isb_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa),
        QPATHTOF(vests\tacbelt\data\camo1_isb_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medium_isb_ui_ca.paa);
};

class ls_imperialVest_army_medium_mudtrooper_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = CSTRING(army_medium_mudtrooper_holster_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_mudtrooper_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_mudtrooper_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_medium_mudtrooper_ui_ca.paa);
};

class ls_imperialVest_isb_heavy_h: ls_imperialVest_army_medium_h {
    author = AUTHOR;
    displayName = CSTRING(tactical_isb_vest);
    model = QPATHTOF(vests\army\ls_vest_imperial_army_heavy_h.p3d);
    hiddenSelections[] = {"camo", "camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_ISB_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_isb_co.paa),
        QPATHTOF(vests\army\data\tacExtras_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_isb_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\army\ls_vest_imperial_army_heavy_h.p3d);
        hiddenSelections[] = {"camo", "camo1", "camo2"};
    };
};

class ls_imperialVest_isb_heavy_officer_h: ls_imperialVest_isb_heavy_h {
    author = AUTHOR;
    displayName = CSTRING(tactical_officer_isb_vest);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\army\data\camo_isb_off_co.paa),
        QPATHTOF(vests\tacBelt\data\camo1_isb_co.paa),
        QPATHTOF(vests\army\data\tacExtras_co.paa)
    };
    picture = QPATHTOF(data\ui\armyVest_officer_isb_ui_ca.paa);
};

DEPRECATED(ls_imperialVest_medic_light,ls_imperialVest_army_light);
DEPRECATED(ls_imperialVest_officer_light,ls_imperialVest_army_light);
DEPRECATED(ls_imperialVest_medic_light_black,ls_imperialVest_army_light);
DEPRECATED(ls_imperialVest_officer_light_black,ls_imperialVest_army_light);
DEPRECATED(ls_imperialVest_medic_light_mudtrooper,ls_imperialVest_army_light);
DEPRECATED(ls_imperialVest_officer_light_mudtroope,ls_imperialVest_army_light);
DEPRECATED(ls_imperialVest_medic_light_h,ls_imperialVest_army_light_h);
DEPRECATED(ls_imperialVest_officer_light_h,ls_imperialVest_army_light_h);
DEPRECATED(ls_imperialVest_medic_light_black_h,ls_imperialVest_army_light_h);
DEPRECATED(ls_imperialVest_officer_light_black_h,ls_imperialVest_army_light_h);
DEPRECATED(ls_imperialVest_medic_light_mudtrooper_h,ls_imperialVest_army_light_h);
DEPRECATED(ls_imperialVest_officer_light_mudtrooper_h,ls_imperialVest_army_light_h);
DEPRECATED(ls_imperialVest_medic_medium,ls_imperialVest_army_medium);
DEPRECATED(ls_imperialVest_officer_medium,ls_imperialVest_army_medium);
DEPRECATED(ls_imperialVest_medic_medium_black,ls_imperialVest_army_medium);
DEPRECATED(ls_imperialVest_officer_medium_black,ls_imperialVest_army_medium);
DEPRECATED(ls_imperialVest_medic_medium_mudtrooper,ls_imperialVest_army_medium);
DEPRECATED(ls_imperialVest_officer_medium_mudtrooper,ls_imperialVest_army_medium);
DEPRECATED(ls_imperialVest_medic_medium_h,ls_imperialVest_army_medium_h);
DEPRECATED(ls_imperialVest_officer_medium_h,ls_imperialVest_army_medium_h);
DEPRECATED(ls_imperialVest_officer_medium_black_h,ls_imperialVest_army_medium_h);
DEPRECATED(ls_imperialVest_medic_medium_black_h,ls_imperialVest_army_medium_h);
DEPRECATED(ls_imperialVest_medic_medium_mudtrooper_h,ls_imperialVest_army_medium_h);
DEPRECATED(ls_imperialVest_officer_medium_mudtrooper_h,ls_imperialVest_army_medium_h);
