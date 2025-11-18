#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            QUOTE(ADDON),
            "ace_flags"
        };
        units[] = {
            "ls_carrierFlag_republic",
            "ls_carrierFlag_republicNavy",
            "ls_carrierFlag_cis",
            "ls_carrierFlag_imperial",
            "ls_carrierFlag_jedi",
            "ls_carrierFlag_mandalorian",
            "ls_carrierFlag_rebelAlliance",
            "ls_carrierFlag_technoUnion",
            "ls_carrierFlag_tradeFederation"
        };
        weapons[] = {
            "ls_carrierFlag_republic_item",
            "ls_carrierFlag_republicNavy_item",
            "ls_carrierFlag_cis_item",
            "ls_carrierFlag_imperial_item",
            "ls_carrierFlag_jedi_item",
            "ls_carrierFlag_mandalorian_item",
            "ls_carrierFlag_rebelAlliance_item",
            "ls_carrierFlag_technoUnion_item",
            "ls_carrierFlag_tradeFederation_item"
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
