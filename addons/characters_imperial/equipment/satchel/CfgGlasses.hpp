class ls_imperial_satchel: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Satchel";

    model = QPATHTOF(equipment\satchel\ls_equipment_imperial_satchel.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\satchel\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\backpack_satchel_ui_ca.paa);
};

class ls_imperial_satchelOthers: ls_imperial_satchel {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Satchel (Others)";

    model = QPATHTOF(equipment\satchel\ls_equipment_imperial_satchelOthers.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestRig\data\camo1_co.paa),
        QPATHTOF(equipment\satchel\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\backpack_chestrig_satchel_ui_ca.paa);
};
