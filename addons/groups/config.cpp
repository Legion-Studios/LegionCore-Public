#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Crimzonkat"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ls_characters",
            "ls_characters_civilian",
            "ls_characters_clone",
            "ls_characters_clone_legacy",
            "ls_characters_clone_legions",
            "ls_characters_csf",
            "ls_characters_droid",
            "ls_characters_imperial",
            "ls_characters_jabiim",
            "ls_characters_mandalorian",
            "ls_characters_meme",
            "ls_characters_orsf",
            "ls_characters_rebels"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgGroups.hpp"
#include "CfgEventHandlers.hpp"
#include "Display3DEN.hpp"
