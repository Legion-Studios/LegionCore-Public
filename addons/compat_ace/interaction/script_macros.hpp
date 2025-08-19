#define ACTION_HUD_CHANGER class ls_hud_changer { \
    displayName = "Change HUD Color"; \
    condition = QUOTE(_player == currentPilot _target and {isEngineOn _target}); \
    exceptions[] = {"isNotInside"}; \
    icon = QPATHTOEF(data,icons\hud\colorWheel_ca.paa); \
    class HUD_White { \
        displayName = "White"; \
        runOnHover = 1; \
        condition = QUOTE(true); \
        statement = QUOTE([ARR_2(_target,[ARR_4(1,1,1,1)])] call EFUNC(vehicles,setHudColor)); \
    }; \
    class HUD_Black: HUD_White { \
        displayName = "Black"; \
        statement = QUOTE([ARR_2(_target,[ARR_4(0,0,0,1)])] call EFUNC(vehicles,setHudColor)); \
        modifierFunction = "_this#3#2 set [1, '#000000']"; \
    }; \
    class HUD_Blue: HUD_White { \
        displayName = "Blue"; \
        statement = QUOTE([ARR_2(_target,[ARR_4(0,0,1,1)])] call EFUNC(vehicles,setHudColor)); \
        modifierFunction = "_this#3#2 set [1, '#0000FF']"; \
    }; \
    class HUD_Purple: HUD_White { \
        displayName = "Purple"; \
        statement = QUOTE([ARR_2(_target,[ARR_4(0.5,0,0.5,1)])] call EFUNC(vehicles,setHudColor)); \
        modifierFunction = "_this#3#2 set [1, '#800080']"; \
    }; \
    class HUD_Red: HUD_White { \
        displayName = "Red"; \
        statement = QUOTE([ARR_2(_target,[ARR_4(1,0,0,1)])] call EFUNC(vehicles,setHudColor)); \
        modifierFunction = "_this#3#2 set [1, '#FF0000']"; \
    }; \
    class HUD_Orange: HUD_White { \
        displayName = "Orange"; \
        statement = QUOTE([ARR_2(_target,[ARR_4(1,0.5,0,1)])] call EFUNC(vehicles,setHudColor)); \
        modifierFunction = "_this#3#2 set [1, '#FF8000']"; \
    }; \
    class HUD_Yellow: HUD_White { \
        displayName = "Yellow"; \
        statement = QUOTE([ARR_2(_target,[ARR_4(1,1,0,1)])] call EFUNC(vehicles,setHudColor)); \
        modifierFunction = "_this#3#2 set [1, '#FFFF00']"; \
    }; \
    class HUD_Green: HUD_White { \
        displayName = "Green"; \
        statement = QUOTE([ARR_2(_target,[ARR_4(0,1,0,1)])] call EFUNC(vehicles,setHudColor)); \
        modifierFunction = "_this#3#2 set [1, '#00FF00']"; \
    }; \
    class HUD_Cyan: HUD_White { \
        displayName = "Cyan"; \
        statement = QUOTE([ARR_2(_target,[ARR_4(0,1,1,1)])] call EFUNC(vehicles,setHudColor)); \
        modifierFunction = "_this#3#2 set [1, '#00FFFF']"; \
    }; \
    class HUD_Clear: HUD_White { \
        displayName = "No Hud"; \
        icon = QPATHTOEF(data,icons\hud\noHud_ca.paa); \
        statement = QUOTE([ARR_2(_target,[ARR_4(0,0,0,0)])] call EFUNC(vehicles,setHudColor)); \
    }; \
}

#define ACTION_LOADVEHICLE class ls_loadVehicle { \
    displayName = "$STR_A3_ACTION_LOAD_VEHICLE"; \
    icon = "\A3\3DEN\data\cfgwaypoints\load_ca.paa"; \
    condition = QUOTE([ARR_2(_target,_player)] call EFUNC(common,isPilot) and {[_target] call EFUNC(vehicles,vivCanLoad)}); \
    statement = ""; \
    insertChildren = QUOTE(call EFUNC(vehicles,vivLoad_insertChildren)); \
}; \
class ls_unloadVehicle: ls_loadVehicle { \
    displayName = "$STR_A3_ACTION_UNLOAD_ALL_VEHICLES"; \
    icon = "\A3\3DEN\data\cfgwaypoints\unload_ca.paa"; \
    condition = QUOTE(getVehicleCargo _target isNotEqualTo [] and {[ARR_2(_target,_player)] call EFUNC(common,isPilot)}); \
    statement = QUOTE(_target call EFUNC(vehicles,vivUnload)); \
    insertChildren = QUOTE(call EFUNC(vehicles,vivUnload_insertChildren)); \
}

#define ACTION_FLIP class ls_flip { \
    displayName = "$STR_ace_interaction_flip"; \
    condition = "call ace_interaction_fnc_canFlip"; \
    statement = "['ace_interaction_flip', _target, _target] call CBA_fnc_targetEvent"; \
}

#define ACTION_PUSH class ls_push { \
    displayName = "$STR_ace_interaction_push"; \
    condition = "call ace_interaction_fnc_canPush"; \
    statement = "call ace_interaction_fnc_push"; \
}
