#define AE3_ATTRIBUTES \
    class Attributes { \
        class AE3_EdenAttribute_PowerLevel { \
            displayName = "$STR_AE3_Main_EdenAttributes_PowerLevelDisplayName"; \
            tooltip = "$STR_AE3_Main_EdenAttributes_PowerLevelTooltip"; \
            property = "AE3_EdenAttribute_PowerLevel"; \
            control = "Slider"; \
            expression = "_this setVariable ['%s', _value, true]"; \
            defaultValue = "1"; \
            unique = 0; \
            validate = "number"; \
            condition = "1"; \
            typeName = "NUMBER"; \
        }; \
    }

#define AE3_EQUIPMENT(DISPLAY_NAME) \
    class AE3_Equipment { \
        displayName = DISPLAY_NAME; \
        init = QUOTE(call FUNC(initTerminal)); \
    }

#define AE3_DEVICE(DISPLAY_NAME)  \
    class AE3_Device { \
        displayName = DISPLAY_NAME; \
        defaultPowerLevel = 0; \
        init = "(_this + [configFile >> 'AE3_FilesystemObjects']) call AE3_armaos_fnc_device_initComplete"; \
        turnOnAction = "call AE3_network_fnc_dhcp_onTurnOn; call AE3_armaos_fnc_computer_turnOn"; \
        turnOnActionCondition = "isNull (_this getVariable ['AE3_computer_mutex', objNull])"; \
        turnOffAction = "call AE3_armaos_fnc_computer_turnOff"; \
        turnOffActionCondition = "isNull (_this getVariable ['AE3_computer_mutex', objNull])"; \
        standByAction = "call AE3_armaos_fnc_computer_standby"; \
        standByActionCondition = "isNull (_this getVariable ['AE3_computer_mutex', objNull])"; \
        class AE3_Consumer { \
            powerConsumption = 0.01/3600; \
            standbyConsumption = 0.0001/3600; \
        }; \
    }

#define AE3_INTERNAL_DEVICE \
    class AE3_InternalDevice { \
        displayName = "$STR_AE3_ArmaOS_Config_BatteryDisplayName"; \
        defaultPowerLevel = 1; \
        turnOnAction = "_this + [true] call AE3_power_fnc_turnOnBatteryAction"; \
        turnOffAction = ""; \
        class AE3_PowerInterface { \
            internal = 1; \
        }; \
        class AE3_Battery { \
            capacity = 0.1; \
            recharging = 0.05/3600; \
            level = 0.1; \
            internal = 1; \
        }; \
    }
