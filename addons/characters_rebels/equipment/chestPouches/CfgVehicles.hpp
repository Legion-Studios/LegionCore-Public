class ls_rebelBackpack_chest_pouch: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(chestPouches);

    model = QPATHTOF(equipment\chestPouches\ls_equipment_rebel_chestPouches.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\chestPouches\data\camo1_co.paa)
    };
    mass = 5;
    maximumLoad = 100;
};
