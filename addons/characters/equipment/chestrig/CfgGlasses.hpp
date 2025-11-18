class ls_glasses_chestRig: ls_combatGlasses_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Chest Rig";

    model = QPATHTOF(equipment\chestrig\ls_equipment_chestRig.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\chestrig_ui_ca.paa);
};

class ls_glasses_chestRigPouch: ls_glasses_chestRig {
    scope = 1;
    author = AUTHOR;
    displayName = "Chest Rig + Pouches";

    model = QPATHTOF(equipment\chestrig\ls_equipment_chestRigPouch.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\chestrig_pouch_ui_ca.paa);
};
