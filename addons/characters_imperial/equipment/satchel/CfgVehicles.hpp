class ls_imperialBackpack_satchel: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Satchel";

    model = QPATHTOF(equipment\satchel\ls_equipment_imperial_satchel.p3d);

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\satchel\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\backpack_satchel_ui_ca.paa);

    maximumLoad = 100;
};
