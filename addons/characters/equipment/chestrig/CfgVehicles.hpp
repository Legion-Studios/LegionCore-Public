class ls_chestRig_base: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Chest Rig";

    model = QPATHTOF(equipment\chestrig\ls_chestRig.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\chestrig_ui_ca.paa);

    maximumLoad = 280;
};

class ls_chestRigPouch_base: ls_chestRig_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Chest Rig + Pouches";
    model = QPATHTOF(equipment\chestrig\ls_chestRigPouch.p3d);

    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\chestrig_pouch_ui_ca.paa);

    maximumLoad = 300;
};
