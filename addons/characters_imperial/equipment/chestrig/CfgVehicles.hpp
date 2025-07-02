class ls_imperialBackpack_chestRig: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Chest Rig";

    model = QPATHTOF(equipment\chestrig\ls_equipment_imperial_army_chestrig.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\chestrig_ui_ca.paa);

    maximumLoad = 150;
};

class ls_imperialBackpack_chestRigPouch: ls_imperialBackpack_chestRig {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Chest Rig + Pouches";
    model = QPATHTOF(equipment\chestrig\ls_equipment_imperial_army_chestRigPouch.p3d);

    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\chestrig_pouch_ui_ca.paa);

    maximumLoad = 200;
};
