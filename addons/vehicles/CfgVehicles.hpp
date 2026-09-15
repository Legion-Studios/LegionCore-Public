class CfgVehicles {
    class Wreck_base_F;
    class ls_wreck_base: Wreck_base_F {
        scope = 0;
        author = AUTHOR;
        mapSize = 20;
        icon = "iconObject_1x2";

        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_wrecks";

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        editorPreview = "";
    };

    class Items_base_F;
    class ls_staticVehicle_base: Items_base_F {
        scope = 0;
        author = AUTHOR;
        mapsize = 20;
        icon = "iconObject_1x2";

        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_vehicles";

        model = "";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        editorPreview = "";
    };
};
