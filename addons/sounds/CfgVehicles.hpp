class CfgVehicles {
    class All;
    class ls_sound_base: All {
        scope = 0;
        author = AUTHOR;
        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_sounds";
        animated = 1;
        mapSize = 10;
        side = 3;
        vehicleClass = "Sounds";
        icon = "iconSound";
        model = QPATHTOEF(common,ls_nvgOptic_dummy.p3d);
    };

    #include "holoprojector\CfgVehicles.hpp"
    #include "activeCamo\CfgVehicles.hpp"
};