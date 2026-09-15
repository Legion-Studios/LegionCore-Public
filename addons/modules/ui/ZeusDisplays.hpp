class GVAR(RscDroidDispenser): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad',_this,QQGVAR(RscDroidDispenser))] call FUNC(zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload',_this,QQGVAR(RscDroidDispenser))] call FUNC(zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class DispenserGroup: GVAR(AttributeDispenserGroup) {};
                class DispenserGroupCustom: GVAR(AttributeDispenserGroupCustom) {};
                class SpawnLimit: GVAR(AttributeSpawnLimit) {
                    onLoad = QUOTE(call FUNC(ui_dispenser_attributeSpawnLimit));
                };
            };
        };
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE(call FUNC(ui_droidDispenser));
        };
        class ButtonCancel: ButtonCancel {};
    };
};

class GVAR(RscBreachDoor): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad',_this,QQGVAR(RscBreachDoor))] call FUNC(zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload',_this,QQGVAR(RscBreachDoor))] call FUNC(zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class radius: GVAR(AttributeRadius) {};
                class lockState: GVAR(AttributeDoorLockState) {};
            };
        };
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE(call FUNC(ui_breachDoor));
        };
        class ButtonCancel: ButtonCancel {};
    };
};

class GVAR(RscMountATRT): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad',_this,QQGVAR(RscMountATRT))] call FUNC(zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload',_this,QQGVAR(RscMountATRT))] call FUNC(zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class instant: GVAR(AttributeToolbox) {
                    class Controls: Controls {
                        class Label: Label {
                            idc = IDC_MOUNT_ATRT_INSTANT_LABEL;
                            text = ECSTRING(common,instant);
                        };
                        class ToolBox: ToolBox {
                            idc = IDC_MOUNT_ATRT_INSTANT_TOOLBOX;
                            rows = 1;
                            columns = 2;
                            strings[] = {ECSTRING(common,no), ECSTRING(common,yes)};
                        };
                    };
                };
            };
        };
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE(call FUNC(ui_mountATRT));
        };
        class ButtonCancel: ButtonCancel {};
    };
};

class GVAR(RscVehicleSpawner): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad',_this,QQGVAR(RscVehicleSpawner))] call FUNC(zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload',_this,QQGVAR(RscVehicleSpawner))] call FUNC(zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class spawnTrigger: GVAR(AttributeCombo) {
                    idc = IDC_SPAWNTRIGGER;
                    class controls: controls {
                        class Label: Label {
                            text = CSTRING(spawnTrigger_label);
                            tooltip = CSTRING(spawnTrigger_tooltip);
                        };
                        class Combo: Combo {
                            class Items {
                                class WaveDestroyed {
                                    text = CSTRING(spawnTrigger_waveDestroyed_label);
                                    tooltip = CSTRING(spawnTrigger_waveDestroyed_tooltip);
                                    data = "WaveDestroyed";
                                    default = 1;
                                };
                                class Continious {
                                    text = CSTRING(spawnTrigger_continious_label);
                                    tooltip = CSTRING(spawnTrigger_continious_tooltip);
                                    data = "Continious";
                                };
                            };
                        };
                    };
                };
                class spawnDelay: GVAR(AttributeSliderTime) {
                    idc = IDC_SPAWNDELAY;
                    class controls: controls {
                        class Label: Label {
                            text = CSTRING(spawnDelay_label);
                            tooltip = CSTRING(spawnDelay_tooltip);
                        };
                        class Slider: Slider {
                            sliderPosition = SPAWN_DELAY_DEFAULT;
                        };
                        class Separator: Separator {};
                        class Frame: Frame {};
                        class Hour: Hour {};
                        class Minute: Minute {};
                        class Second: Second {};
                    };
                };
                class waveSize: GVAR(AttributeEdit) {
                    idc = IDC_WAVESIZE;
                    class controls: controls {
                        class Label: Label {
                            text = CSTRING(waveSize_label);
                            tooltip = CSTRING(waveSize_tooltip);
                        };
                        class Edit: Edit {
                            text = QUOTE(WAVE_SIZE_DEFAULT);
                        };
                    };
                };
                class vehicleTypes: GVAR(AttributeTreeSearch) {
                    idc = IDC_VEHICLETYPES;
                    class controls: controls {
                        class Label: Label {
                            idc = IDC_LABEL;
                            text = CSTRING(vehicleTypes_label);
                            tooltip = CSTRING(vehicleTypes_tooltip);
                        };
                        class Tree: Tree {
                            idc = IDC_VALUE;
                            multiselectEnabled = 1;
                        };
                        class Search: Search {};
                        class SearchButton: SearchButton {};
                    };
                };
                class rallyPoint: GVAR(AttributeRallyPoint) {};
                class executeCode: GVAR(AttributeCode) {
                    class controls: controls {
                        class Label: Label {
                            tooltip = CSTRING(executeCode_waveSpawn_tooltip);
                        };
                        class Edit: Edit {};
                    };
                };
            };
        };
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE((_this select 0) call FUNC(ui_vehicleSpawner));
        };
        class ButtonCancel: ButtonCancel {};
    };
};

class GVAR(RscAircraftSpawner): GVAR(RscVehicleSpawner) {
    onLoad = QUOTE([ARR_3('onLoad',_this,QQGVAR(RscVehicleSpawner))] call FUNC(zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload',_this,QQGVAR(RscVehicleSpawner))] call FUNC(zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {};
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE([ARR_2(_this select 0,'air')] call FUNC(ui_vehicleSpawner));
        };
        class ButtonCancel: ButtonCancel {};
    };
};

class GVAR(RscSetSkills): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad',_this,QQGVAR(RscSetSkills))] call FUNC(zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload',_this,QQGVAR(RscSetSkills))] call FUNC(zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {};
        };
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE(call FUNC(ui_setSkills));
        };
        class ButtonCancel: ButtonCancel {};
    };
};

class GVAR(CuratorAttributeDispenserGroup): GVAR(AttributeDispenserGroup) {
    // 12.5 comes from y + height for the respawn position attribute
    y = QUOTE(H_PART(12.5 + CURATOR_ATTRIBUTE_SPACING));
    class Controls: Controls {
        class Label: Label {
            colorBackground[] = {0, 0, 0, 0.5};
            x = 0;
            y = 0;
            h = QUOTE(H_PART(TREE_VIEW_HEIGHT));
        };
        class Background: RscText {
            idc = IDC_DISPENSER_GROUP_BACKGROUND;
            colorBackground[] = {1, 1, 1, 0.1};
            x = QUOTE(W_PART(10));
            y = 0;
            w = QUOTE(W_PART(15.9));
            h = QUOTE(H_PART(TREE_VIEW_HEIGHT));
        };
        class Search: Search {
        };
        class SearchButton: SearchButton {
        };
        class Tree: Tree {
            onLoad = QUOTE(call FUNC(ui_attributeDispenserGroup));
        };
    };
};
class GVAR(CuratorAttributeDispenserGroupCustom): GVAR(AttributeDispenserGroupCustom) {
    y = QUOTE(H_PART(12 + 12.5 + CURATOR_ATTRIBUTE_SPACING + 0.15));
    class Controls: Controls {
        class Label: Label {
            colorBackground[] = {0, 0, 0, 0.5};
            x = 0;
            y = 0;
        };
        class Edit: Edit {
            colorBackground[] = {1, 1, 1, 0.1};
        };
    };
};
class GVAR(CuratorAttributeSpawnLimit): GVAR(AttributeSpawnLimit) {
    y = QUOTE(H_PART(12 + 12.5 + 1.1 + CURATOR_ATTRIBUTE_SPACING + 0.15));
    class Controls: Controls {
        class Label: Label {
            colorBackground[] = {0, 0, 0, 0.5};
            x = 0;
            y = 0;
        };
        class Edit: Edit {
            colorBackground[] = {1, 1, 1, 0.1};
        };
    };
};

class RscDisplayAttributesVehicle: RscDisplayAttributes {
    class Controls: Controls {
        class Background;
        class Title;
        class Content: Content {
            class Controls: Controls {
                class Rank;
                class Damage;
                class Fuel;
                class Skill;
                class Lock;
                class RespawnVehicle;
                class RespawnPosition;
                class Exec;
            };
        };
        class ButtonOK;
        class ButtonCancel;
    };
};
class GVAR(RscDisplayAttributesDispenser): RscDisplayAttributesVehicle {
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls: Controls {
                class Rank: Rank {};
                class Damage: Damage {};
                class Fuel: Fuel {};
                class Skill: Skill {};
                class Lock: Lock {};
                class RespawnVehicle: RespawnVehicle {};
                class RespawnPosition: RespawnPosition {};
                class Exec: Exec {};
                class DispenserGroup: GVAR(CuratorAttributeDispenserGroup) {};
                class DispenserGroupCustom: GVAR(CuratorAttributeDispenserGroupCustom) {};
                class SpawnLimit: GVAR(CuratorAttributeSpawnLimit) {
                    onLoad = QUOTE(call FUNC(ui_dispenser_attributeSpawnLimit));
                };
            };
        };
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE(call FUNC(ui_curatorInfoDispenser));
        };
        class ButtonCancel: ButtonCancel {};
    };
};
