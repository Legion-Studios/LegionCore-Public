class CfgVehicles {
    class ls_staticShip_base;
    class ls_vehicle_cr88_base: ls_staticShip_base {
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
        scopeCurator = 2;
        author = AUTHOR;
    };
};
