class ls_imperial_army_shoulderPouch: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Shoulder Pouch";

    model = QPATHTOF(equipment\shoulderPouch\ls_equipment_imperial_army_shoulderPouch.p3d);

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestRig\data\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\shoulderPouch_ui_ca.paa);
};
