class ls_backpack_chestRig: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(chestRig_vest);

    model = QPATHTOF(equipment\chestrig\ls_equipment_chestrig.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\chestrig_ui_ca.paa);

    maximumLoad = 80;
    mass = 20;
};

class ls_backpack_chestRigPouch: ls_backpack_chestRig {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(chestRig_pouches_vest);
    model = QPATHTOF(equipment\chestrig\ls_equipment_chestRigPouch.p3d);

    maximumLoad = 100;
    mass = 25;
};
