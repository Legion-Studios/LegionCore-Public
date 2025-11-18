class ls_glasses_shoulderPouch: ls_combatGlasses_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Shoulder Pouch";

    model = QPATHTOEF(characters_imperial,equipment\shoulderPouch\ls_equipment_imperial_army_shoulderPouch.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestRig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\shoulderPouch_ui_ca.paa);
};
