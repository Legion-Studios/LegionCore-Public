class ls_rebel_chestPouches: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "[Rebel] Chest Pouches";

    model = QPATHTOF(equipment\chestPouches\ls_equipment_rebel_chestPouches.p3d);
    hiddenSelections[] = {
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestPouches\data\camo1_co.paa)
    };
    mass = 4;
};
