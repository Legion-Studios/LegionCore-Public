class ls_mandalorianBackpack_journeyman: ls_backpack_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Journeyman's Jetpack";

    model = QPATHTOF(backpacks\journeymanJet\ls_backpack_mandalorian_journeyman.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\journeymanJet\data\camo1_co.paa)
    };
};
DEPRECATED(ls_greenfor_journeymanJetpack_backpack,ls_mandalorianBackpack_journeyman);
