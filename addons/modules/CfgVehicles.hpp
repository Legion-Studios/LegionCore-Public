// See https://community.bistudio.com/wiki/Modules

class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
            class ModuleDescription;
        };
        class ModuleDescription;
    };
    class MODULE(Base): Module_F {
        scope = 0;
        scopeCurator = 2;
        author = AUTHOR;

        category = QUOTE(ADDON);
        function = QEFUNC(common,dummy);
        functionPriority = 1;
        isGlobal = 0; // 0 = server only, 1 = global, 2 = global w/ JIP
        isTriggerActivated = 0;
    };

    class MODULE(ToggleCamo): MODULE(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "Toggle Active Camo";
        icon = QPATHTOF(data\ui\moduleToggleCamo_ui_ca.paa);

        isGlobal = 1;
        curatorCanAttach = 1;
        function = QFUNC(moduleToggleCamo);
    };

    // Eventually will be moved to battlefields
    class lsb_moduleSpaceDebris: MODULE(Base) {
        scope = 2;
        scopeCurator = 0;
        author = AUTHOR;
        displayName = "$STR_lsb_modules_spaceDebris_name";

        icon = "lsb_iconModuleSpaceDebris";

        is3DEN = 1;
        function = QFUNC(moduleSpaceDebris);

        class Attributes: AttributesBase {
            // People may want to pull these values, so write lsb
            class lsb_modules_count: Edit {
                displayName = "$STR_lsb_modules_AttributeCount_name";
                tooltip = "$STR_lsb_modules_spaceDebris_AttributeCount_tooltip";
                property = "lsb_modules_count";
                defaultValue = 300;
                validate = "NUMBER";
            };

            class lsb_modules_preset: Combo {
                displayName = "$STR_lsb_common_spaceDebrisPreset_name";
                tooltip = "$STR_lsb_common_spaceDebrisPreset_tooltip";
                property = "lsb_modules_preset";
                control = "lsb_modules_spaceDebrisPreset";
                defaultValue = "''";
            };

            class lsb_modules_distribution: Combo {
                displayName = "$STR_lsb_common_distribution_name";
                tooltip = "$STR_lsb_common_distribution_tooltip";
                property = "lsb_modules_distribution";
                control = "lsb_modules_distribution";
                defaultValue = "'randomArea'";
            };

            // class lsb_modules_drifting: Checkbox {
            //     displayName = "$STR_lsb_modules_spaceDebris_AttributeDrifting_name";
            //     tooltip = "$STR_lsb_modules_spaceDebris_AttributeDrifting_tooltip";
            //     property = "lsb_modules_drifting";
            //     defaultValue = "false";
            // };

            // class lsb_modules_driftDirection: Edit {
            //     displayName = "$STR_lsb_modules_spaceDebris_AttributeDriftDirection_name";
            //     tooltip = "$STR_lsb_modules_spaceDebris_AttributeDriftDirection_tooltip";
            //     property = "lsb_modules_driftDirection";
            //     defaultValue = "0";
            //     validate = "NUMBER";
            //     control = "EditZ";
            // };

            class lsb_modules_debrisData: Edit {
                displayName = "$STR_lsb_modules_spaceDebris_AttributeDebrisData_name";
                tooltip = "$STR_lsb_modules_spaceDebris_AttributeDebrisData_tooltip";
                property = "lsb_modules_debrisData";
                defaultValue = "''";
            };

            class lsb_modules_paramsOld: Edit {
                displayName = "$STR_lsb_modules_spaceDebris_AttributeParamsOld_name";
                tooltip = "$STR_lsb_modules_spaceDebris_AttributeDebrisData_tooltip";
                property = "lsb_modules_paramsOld";
                defaultValue = "'[]'";
            };
        };

        canSetArea = 1;
        canSetAreaShape = 1;
        canSetAreaHeight = 1;
        class AttributeValues {
            size3[] = {500, 500, 250};
        };

        class ModuleDescription: ModuleDescription {
            direction = 1;
            description = "$STR_lsb_modules_spaceDebris_description";
        };
    };

    class MODULE(AreaHeal): MODULE(Base) {
        scope = 2;
        scopeCurator = 0;
        displayName = "Area Heal";
        icon = QPATHTOEF(data,icons\medic_white_ca.paa);

        function = QFUNC(moduleAreaHeal);

        class Attributes: AttributesBase {
            class ModuleDescription: ModuleDescription {};
        };

        canSetArea = 1;
        canSetAreaShape = 1;
        canSetAreaHeight = 1;
        class AttributeValues {
            size3[] = {30, 30, 15};
            isRectangle = 1;
        };

        class ModuleDescription: ModuleDescription {
            description = "Fully heal players that enter the module's area. Checked every 5 seconds.";
        };
    };

    class MODULE(DroidDispenser): MODULE(Base) {
        scope = 2;
        scopeCurator = 0;
        author = AUTHOR;
        displayName = "Droid Dispenser";

        // simulation = "house"; // Changing simulation breaks the isTriggerActivated condition
        model = "\a3\Modules_F_Curator\Ordnance\surfaceMortar.p3d";
        icon = QPATHTOEF(dispenser,data\ui\droidDispenser_icon_ca.paa);
        portrait = QPATHTOEF(dispenser,data\ui\droidDispenser_icon_ca.paa);

        function = QFUNC(moduleDroidDispenser);
        isTriggerActivated = 1;
        ammo = QGVAR(dispenserOrdnance);

        // Can be name in ls_dispenser_groups (e.g. ls_cis-cis_baseInfantry-base_b1_fireteam) or array of unit class names
        // Default ("" or []) means open dispenser menu to select a group
        EGVAR(dispenser,group) = "";
        EGVAR(dispenser,vehicle) = "ls_droidDispenser"; // Vehicle to use, must be child class of ls_droidDispenser

        class Attributes: AttributesBase {
            class GVAR(dispenserGroup) {
                displayName = "Group";
                tooltip = "Select what group will be spawned by the droid dispenser when it activates.";
                property = QGVAR(dispenserGroup);
                control = QGVAR(dispenserGroup);
                defaultValue = "[[0,0,0], '[]']";
                expression = "_this setVariable ['%s',_value,true];";
            };
            class GVAR(dispenserGroupCustom): Edit {
                displayName = "Custom Group";
                tooltip = "Overwrites dispenser group if defined, takes array of unit class names.\nE.g. ['ls_droid_b1','ls_droid_b2']";
                property = QGVAR(dispenserGroupCustom);
                defaultValue = "'[]'";
            };

            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            position = 1;
            description = "When activated by a trigger, spawns a droid dispenser falling from the sky. Units will begin to spawn after the dispenser hits the ground and a small delay passes.<br/>The dispenser hitting the ground will cause damage.";
        };
    };

    class MODULE(DroidDispenser_zeus): MODULE(Base) {
        scope = 1;
        author = AUTHOR;
        displayName = "Droid Dispenser";

        simulation = "house";
        model = "\a3\Modules_F_Curator\Ordnance\surfaceMortar.p3d";
        icon = QPATHTOEF(dispenser,data\ui\droidDispenser_icon_ca.paa);
        portrait = QPATHTOEF(dispenser,data\ui\droidDispenser_icon_ca.paa);

        ammo = QGVAR(dispenserOrdnance);
        curatorInfoType = QGVAR(RscDroidDispenser);
        isGlobal = 1; // Used to hide module's "ring" for non-zeus clients

        EGVAR(dispenser,vehicle) = "ls_droidDispenser";
        EGVAR(dispenser,group) = ""; // Group from ls_dispenser_groups or array of unit classes. "" = open menu
    };

    class MODULE(DroidDispenser_B1_zeus): MODULE(DroidDispenser_zeus) {
        author = AUTHOR;
        displayName = "Droid Dispenser (B1)";
        EGVAR(dispenser,group) = "ls_cis>>cis_baseInfantry>>base_b1_fireteam";
    };

    class MODULE(DroidDispenser_B2_zeus): MODULE(DroidDispenser_zeus) {
        author = AUTHOR;
        displayName = "Droid Dispenser (B2)";
        EGVAR(dispenser,group)[] = {"ls_droid_b2"};
    };

    class MODULE(DroidDispenser_BX_zeus): MODULE(DroidDispenser_zeus) {
        author = AUTHOR;
        displayName = "Droid Dispenser (BX)";
        EGVAR(dispenser,group) = "ls_cis>>cis_specialOperations>>specops_bx_fireteam";
    };

    class ModuleOrdnance_F;
    #include "cfg\protonMortar\CfgVehicles.hpp"
};
