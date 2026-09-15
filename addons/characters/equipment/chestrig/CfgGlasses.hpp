class ls_glasses_chestRig: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(chestRig_vest);

    model = QPATHTOF(equipment\chestrig\ls_equipment_chestRig.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\chestrig_ui_ca.paa);
};

class ls_glasses_chestRigPouch: ls_glasses_chestRig {
    author = AUTHOR;
    displayName = CSTRING(chestRig_pouches_vest);

    model = QPATHTOF(equipment\chestrig\ls_equipment_chestRigPouch.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
};
