class ls_imperialBackpack_shoulderPouch: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Shoulder Pouch";

    model = QPATHTOF(equipment\shoulderPouch\ls_equipment_imperial_army_shoulderPouch.p3d);

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestRig\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\shoulderPouch_ui_ca.paa);

    maximumLoad = 100;
};
