class lsd_gar_marine_backpack: ls_cloneBackpack_base {
    scope = 2;
    displayname = "Republic Marine Travelpack";
    model = QPATHTOF(backpacks\marine\ls_backpack_clone_marine.p3d);
    maximumload = 250;
    // picture = QPATHTOF(_ui\icon_clone_backpack_ca.paa);
    hiddenselections[] = {
        "camo1"
    };
    hiddenselectionstextures[] = {
        QPATHTOF(backpacks\marine\data\camo1_co.paa)
    };
};
