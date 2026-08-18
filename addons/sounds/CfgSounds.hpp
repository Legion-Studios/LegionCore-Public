class CfgSounds {
    #include "activeCamo\CfgSounds.hpp"
    #include "holoprojector\CfgSounds.hpp"
    #include "lighting\CfgSounds.hpp"
    #include "props\CfgSounds.hpp"
    #include "vehicles\CfgSounds.hpp"
    #include "weapons\CfgSounds.hpp"
    #include "deflector\CfgSounds.hpp"

    class ls_shield_droideka_activate {
        name = "Droideka Shield Activate";
        sound[] = {QPATHTOF(characters\droideka\shield_activate.wav), 1, 1, 20};
        titles[] = {0, ""};
    };
    class ls_shield_droideka_deactivate: ls_shield_droideka_activate {
        name = "Droideka Shield Deactivate";
        sound[] = {QPATHTOF(characters\droideka\shield_deactivate.wav), 1, 1, 20};
    };
};
