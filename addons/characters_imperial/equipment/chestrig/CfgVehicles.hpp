class ls_imperialBackpack_chestRig: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Chest Rig";

    model = QPATHTOF(equipment\chestrig\ls_equipment_imperial_army_chestrig.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\backpack_chestrig_ui_ca.paa);

    maximumLoad = 280;
};

class ls_imperialBackpack_chestRigPouch: ls_imperialBackpack_chestRig {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Chest Rig + Pouches";
    model = QPATHTOF(equipment\chestrig\ls_equipment_imperial_army_chestRigPouch.p3d);

    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\backpack_chestrig_pouch_ui_ca.paa);

    maximumLoad = 300;
};

class ls_imperialBackpack_predef_at: ls_imperialBackpack_chestRig {
    author = AUTHOR;
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_rps6_heat,2);
    };
};

class ls_imperialBackpack_predef_HeavyAA: ls_imperialBackpack_chestRig {
    author = AUTHOR;
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_aa,2);
    };
};

class ls_imperialBackpack_predef_HeavyAT: ls_imperialBackpack_chestRig {
    author = AUTHOR;
    scope = 1;
    class TransportMagazines {
        MAG_XX(ls_magazine_e60r_at,1);
        MAG_XX(ls_magazine_e60r_ap,1);
    };
};
