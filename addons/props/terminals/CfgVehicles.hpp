class ls_terminal_base: NonStrategic {
    scope = 0;
    author = AUTHOR;
    editorcategory = "ls_edcat_statics";
    editorsubcategory = "ls_edsubcat_terminals";

    destrType = "DestructDefault";
    class DestructionEffects {};

    class ACE_Actions {
        class ACE_MainActions {
            displayName = "$STR_ace_interaction_MainAction";
            selection = "interact";
            distance = 4;
            condition = "true";
        };
    };

    class Attributes {
        class ObjectTextureCustom1 {
            displayName = "$STR_3DEN_object_attribute_objectTextureCustom1_displayName";
            tooltip = "$STR_3DEN_object_attribute_objectTextureCustom_tooltip";
            property = "ObjectTextureCustom1";
            control = "Edit";
            expression = "_this setObjectTextureGlobal [1, _value]";
            defaultValue = "getObjectTextures _this select 1";
        };
    };

    SLX_XEH_DISABLED = 0;

    // For TextureSources
    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then {[(_this select 0), '', [], false] call BIS_fnc_initVehicle};";
        class XEH_CLASS { EXTENDED_EVENTHANDLERS };
    };
};

class Land_ls_terminal_01: ls_terminal_base {
    scope = 2;
    scopeCurator = 2;
    author = AUTHOR;
    displayName = CSTRING(terminal_01);

    model = QPATHTOF(terminals\ls_prop_terminal_01.p3d);
    hiddenselections[] = {"camo1", "screen"};
    hiddenselectionstextures[] =  {
        QPATHTOF(terminals\01\data\camo1_co.paa),
        QPATHTOF(terminals\01\data\screen_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_prop_terminal_01.jpg);

    textureList[] = {
        "Blank", 1,
        "Map", 1,
        "Acceptance", 0,
        "BSOD", 0,
        "Crash", 0,
        "Ironmouse", 0,
        "WindowsXP", 0
    };
    class TextureSources {
        class Blank {
            author = AUTHOR;
            displayName = CSTRING(blank);
            textures[] = {
                QPATHTOF(terminals\01\data\camo1_co.paa),
                QPATHTOF(terminals\01\data\screen_co.paa)
            };
        };
        class Map: Blank {
            author = AUTHOR;
            displayName = "$STR_A3_CfgWeapons_ItemMap0";
            textures[] = {
                QPATHTOF(terminals\01\data\camo1_co.paa),
                QPATHTOF(terminals\01\data\screen_map_co.paa)
            };
        };
        class Acceptance: Blank {
            author = AUTHOR;
            displayName = CSTRING(acceptance);
            textures[] = {
                QPATHTOF(terminals\01\data\camo1_co.paa),
                QPATHTOF(terminals\01\data\screen_acceptance_co.paa)
            };
        };
        class BSOD: Blank {
            author = AUTHOR;
            displayName = CSTRING(bsod);
            textures[] = {
                QPATHTOF(terminals\01\data\camo1_co.paa),
                QPATHTOF(terminals\01\data\screen_bsod_co.paa)
            };
        };
        class Crash: Blank {
            author = AUTHOR;
            displayName = CSTRING(crash);
            textures[] = {
                QPATHTOF(terminals\01\data\camo1_co.paa),
                QPATHTOF(terminals\01\data\screen_crash_co.paa)
            };
        };
        class Ironmouse: Blank {
            author = AUTHOR;
            displayName = CSTRING(ironmouse);
            textures[] = {
                QPATHTOF(terminals\01\data\camo1_co.paa),
                QPATHTOF(terminals\01\data\screen_ironmouse_co.paa)
            };
        };
        class WindowsXP: Blank {
            author = AUTHOR;
            displayName = CSTRING(windowsXp);
            textures[] = {
                QPATHTOF(terminals\01\data\camo1_co.paa),
                QPATHTOF(terminals\01\data\screen_windowsxp_co.paa)
            };
        };
    };
};

class Land_ls_terminal_reinsert: Land_ls_terminal_01 {
    author = AUTHOR;
    displayName = CSTRING(terminal_reinsert);
    hiddenselectionstextures[] =  {
        QPATHTOF(terminals\01\data\camo1_co.paa),
        QPATHTOF(terminals\01\data\screen_template_co.paa)
    };

    textureList[] = {};
    class TextureSources {};

    class Attributes {
        class ls_locationName {
            displayName = "$STR_A3_CombatPatrol_modules_4";
            tooltip = "$STR_A3_WL_param36_desc";
            property = "ls_locationName";
            control = "Edit";
            expression = QUOTE(if (local _this) then { _this setVariable [ARR_3(QQGVAR(name),_value,true)] });
            defaultValue = "''";
        };
    };
};
DEPRECATED(ls_reinsertTerminal,Land_ls_terminal_reinsert);
