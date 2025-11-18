class CfgVehicles {
    // Likely not the final implementation
    class B_T_UAV_03_dynamicLoadout_F;
    class ls_vehicle_cr88_base: B_T_UAV_03_dynamicLoadout_F {
        scope = 0;
        author = AUTHOR;
        displayName = "CR-88 Corvette";

        picture = QPATHTOF(data\ui\cr88_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\cr88_icon_ca.paa);

        model = QPATHTOF(ls_vehicle_cr88.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_cr88.jpg);
    };

    class ls_vehicle_cr88: ls_vehicle_cr88_base {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
    };

    class ls_staticShip_base;
    class ls_vehicle_cr88_static: ls_staticShip_base {
        scope = 2;
        author = AUTHOR;
        displayName = "CR-88 Corvette";

        model = QPATHTOF(ls_vehicle_cr88.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_cr88.jpg);
    };
};
