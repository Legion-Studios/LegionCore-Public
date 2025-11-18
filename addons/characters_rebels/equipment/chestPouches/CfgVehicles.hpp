class ls_rebelBackpack_chest_pouch: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "[Rebel] Chest Pouches";

    model = QPATHTOF(equipment\chestPouches\ls_equipment_rebel_chestPouches.p3d);
    maximumLoad = 300;
    mass = 15;
    hiddenSelections[] = {
        "camo1"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestPouches\data\camo1_co.paa)
    };
};
