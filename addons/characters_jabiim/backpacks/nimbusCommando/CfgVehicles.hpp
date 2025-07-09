class ls_jabiimBackpack_nimbusCommando: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Nimbus Commando Backpack";

    model = QPATHTOF(backpacks\nimbusCommando\ls_backpack_nimbusCommando.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\nimbusCommando\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\nimbusCommandoBackpack_ui_ca.paa);

    maximumLoad = 280;
    mass = 40;
};
