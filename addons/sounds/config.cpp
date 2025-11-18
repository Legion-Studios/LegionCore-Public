#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Cannon", "DartRuffian"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_common"
        };
        units[] = {
            "ls_holoprojector_loop_placeable",
            "ls_activeCamo_loop_placeable"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgSFX.hpp"
#include "CfgSounds.hpp"
#include "CfgSoundSets.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSound3dProcessors.hpp"
#include "CfgDistanceFilters.hpp"
#include "CfgSoundCurves.hpp"
#include "CfgAnimationSourceSounds.hpp"
#include "CfgVehicles.hpp"
