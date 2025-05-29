class CfgVehicles {
    class B_T_UAV_03_dynamicLoadout_F;
    class ls_vehicle_cr88_base: B_T_UAV_03_dynamicLoadout_F {
        scope = 0;
        author = AUTHOR;
        displayName = "CR-88 Corvette";

        model = QPATHTOF(ls_vehicle_cr88.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_cr88.jpg);
    };

    class ls_vehicle_cr88: ls_vehicle_cr88_base {
        scope = 2;
        author = AUTHOR;
    };
};