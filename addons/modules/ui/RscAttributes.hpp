class RscDisplayAttributes {
    class Controls {
        class Background;
        class Title;
        class Content;
        class ButtonOK;
        class ButtonCancel;
    };
};

// Generic edit box, not intended to be used directly, you'll want to change the idc for different controls
class GVAR(AttributeEdit): RscControlsGroupNoScrollbars {
    idc = -1;
    onSetFocus = "";
    x = 0;
    y = 0;
    w = QUOTE(W_PART(26));
    h = QUOTE(H_PART(1.1));
    class Controls {
        class Label: RscText {
            idc = -1;
            text = "";
            tooltip = "";
            x = 0;
            y = 0;
            w = QUOTE(W_PART(10));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class Edit: RscEdit {
            idc = -1;
            x = QUOTE(W_PART(10.1));
            y = 0;
            w = QUOTE(W_PART(15.9));
            h = QUOTE(H_PART(1));
            autoComplete = "";
        };
    };
};

class GVAR(AttributeDispenserGroupCustom): GVAR(AttributeEdit) {
    idc = IDC_DISPENSER_GROUP_CUSTOM;
    onLoad = QUOTE(call FUNC(ui_attributeDispenserGroupCustom));

    class Controls: Controls {
        class Label: Label {
            idc = IDC_DISPENSER_GROUP_CUSTOM_LABEL;
            text = CSTRING(dispenserGroup_customGroup_label);
            tooltip = CSTRING(dispenserGroup_customGroup_tooltip);
        };
        class Edit: Edit {
            idc = IDC_DISPENSER_GROUP_CUSTOM_EDIT;
            text = "[]";
        };
    };
};

class GVAR(AttributeSpawnLimit): GVAR(AttributeEdit) {
    idc = IDC_SPAWNLIMIT;
    onLoad = ""; // Not really a way to make a generic version
    class Controls: Controls {
        class Label: Label {
            idc = IDC_SPAWNLIMIT_LABEL;
            text = CSTRING(spawnLimit_label);
            tooltip = CSTRING(spawnLimit_tooltip);
        };
        class Edit: Edit {
            idc = IDC_SPAWNLIMIT_EDIT;
        };
    };
};

class GVAR(AttributeRadius): RscControlsGroupNoScrollbars {
    idc = IDC_RADIUS;
    onSetFocus = QUOTE(call FUNC(ui_attributeRadius));
    x = 0;
    y = 0;
    w = QUOTE(W_PART(26));
    h = QUOTE(H_PART(1.1));

    class controls {
        class Label: RscText {
            idc = -1;
            text = "$STR_A3_mdl_radius";
            tooltip = CSTRING(radius_tooltip);
            x = 0;
            y = 0;
            w = QUOTE(W_PART(10));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };

        class Slider: RscXSliderH {
            idc = IDC_RADIUS_SLIDER;
            x = QUOTE(W_PART(10.1));
            y = 0;
            w = QUOTE(W_PART(13.3));
            h = QUOTE(H_PART(1));
            sliderPos = RADIUS_DEFAULT;
            sliderRange[] = {0, 100};
        };

        class Edit: RscEdit {
            idc = IDC_RADIUS_EDIT;
            x = QUOTE(W_PART(23.5));
            y = 0;
            w = QUOTE(W_PART(2.5));
            h = QUOTE(H_PART(1));
            autoComplete = "";
        };
    };
};

class GVAR(AttributeToolbox): RscControlsGroupNoScrollbars {
    idc = -1;
    onSetFocus = "";
    x = 0;
    y = 0;
    w = QUOTE(W_PART(26));
    h = QUOTE(H_PART(1.1));
    class Controls {
        class Label: RscText {
            idc = -1;
            text = "";
            tooltip = "";
            x = 0;
            y = 0;
            w = QUOTE(W_PART(10));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class Toolbox: ctrlToolbox {
            idc = -1;
            x = QUOTE(W_PART(10.1));
            y = 0;
            w = QUOTE(W_PART(15.9));
            h = QUOTE(H_PART(1));
            rows = 1;
            columns = 1;
            strings[] = {};
        };
    };
};

class GVAR(AttributeDoorLockState): GVAR(AttributeToolbox) {
    idc = IDC_DOORLOCK;
    class Controls: Controls {
        class Label: Label {
            text = CSTRING(lockState_label);
            tooltip = CSTRING(lockState_tooltip);
        };
        class Toolbox: Toolbox {
            idc = IDC_DOORLOCK_TOOLBOX;
            rows = 1;
            columns = 3;
            strings[] = {"$STR_difficulty_any", "$STR_vehicle_unlocked", "$STR_vehicle_locked"};
        };
    };
};

class GVAR(AttributeSkillToolBox): GVAR(AttributeToolbox) {
    idc = IDC_SKILLS;
    class Controls: Controls {
        class Label: Label {
            idc = IDC_SKILLS_LABEL;
            text = "";
            tooltip = "";
        };
        class Toolbox: Toolbox {
            idc = IDC_SKILLS_TOOLBOX;
            rows = 1;
            columns = 3;
            strings[] = {
                ECSTRING(common,skill_untrained),
                ECSTRING(common,skill_trained),
                ECSTRING(common,skill_advanced)
            };
        };
    };
};

class GVAR(AttributeTree): RscControlsGroupNoScrollbars {
    idc = -1;
    onSetFocus = "";
    x = 0;
    y = 0;
    w = QUOTE(W_PART(26));
    h = QUOTE(H_PART(TREE_VIEW_HEIGHT));
    class Controls {
        class Label: RscText {
            idc = -1;
            text = "";
            tooltip = "";
            x = 0;
            y = 0;
            w = QUOTE(W_PART(10));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class Tree: RscTreeSearch {
            idc = -1;
            idcSearch = 645;
            x = QUOTE(W_PART(10.1));
            y = 0;
            w = QUOTE(W_PART(15.9));
            h = QUOTE(H_PART(TREE_VIEW_HEIGHT));
        };
    };
};

class GVAR(AttributeTreeSearch): GVAR(AttributeTree) {
    class Controls: Controls {
        class Label: Label {};
        class Tree: Tree {
            y = QUOTE(H_PART(1));
            h = QUOTE(H_PART(TREE_VIEW_SEARCH_HEIGHT));
        };
        class Search: RscEdit {
            idc = 645;
            x = QUOTE(W_PART(10.1));
            y = QUOTE(H_PART(0.1));
            w = QUOTE(W_PART(14.9));
            h = QUOTE(H_PART(1));
            text = "";
        };
        class SearchButton: RscButtonSearch {
            x = QUOTE(W_PART((10.1 + 14.9)));
            y = QUOTE(H_PART(0.1));
            w = QUOTE(W_PART(1));
            h = QUOTE(H_PART(1));
        };
    };
};

class GVAR(AttributeDispenserGroup): GVAR(AttributeTreeSearch) {
    idc = IDC_DISPENSER_GROUP;
    class Controls: Controls {
        class Label: Label {
            idc = IDC_DISPENSER_GROUP_LABEL;
            text = CSTRING(dispenserGroup_group_label);
            tooltip = CSTRING(dispenserGroup_group_tooltip);
        };
        class Search: Search {};
        class SearchButton: SearchButton {};
        class Tree: Tree {
            idc = IDC_DISPENSER_GROUP_TREE;
            onLoad = QUOTE(call FUNC(ui_attributeDispenserGroup));
        };
    };
};

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
