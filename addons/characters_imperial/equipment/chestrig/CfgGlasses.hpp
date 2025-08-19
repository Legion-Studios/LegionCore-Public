class ls_imperial_chestRig: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Chest Rig";

    model = QPATHTOF(equipment\chestrig\ls_equipment_imperial_army_chestrig.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\backpack_chestrig_ui_ca.paa);
};

class ls_imperial_chestRigPouch: ls_imperial_chestRig {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Chest Rig + Pouches";

    model = QPATHTOF(equipment\chestrig\ls_equipment_imperial_army_chestRigPouch.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestrig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\backpack_chestrig_pouch_ui_ca.paa);
};
