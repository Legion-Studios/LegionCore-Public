class CfgVehicles {
    // For sound sources
    class Sound;
    class ls_sound_base: Sound {
        scope = 0;
        author = AUTHOR;
        editorCategory = "ls_edcat_statics";
        mapSize = 10;
        icon = "iconObject"; // iconSound is very difficult to see against grass
    };

    // For placeable objects in Eden / Zeus
    class ls_sound_placeable_base: ls_sound_base {
        side = 3;
        simulation = "fountain";
        // sound = ""; // Fountains point to CfgSounds class, not CfgSFX
    };

    #include "holoprojector\CfgVehicles.hpp"
    #include "activeCamo\CfgVehicles.hpp"
};
