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
    onLoad = QUOTE(call FUNC(ui_attributeDispenserGroupCustom));

    class Controls: Controls {
        class Label: Label {
            idc = -1;
            text = "Custom Group";
            tooltip = "Overwrites dispenser group if defined, takes array of unit class names.\nUse commas to separate classes, do not include spaces.\nE.g. ['ls_droid_b1','ls_droid_b2']";
        };
        class Edit: Edit {
            idc = IDC_DISPENSER_GROUP_CUSTOM;
        };
    };
};

class GVAR(AttributeTree): RscControlsGroupNoScrollbars {
    idc = -1;
    onSetFocus = "";
    x = 0;
    y = 0;
    w = QUOTE(W_PART(26));
    h = QUOTE(H_PART((TREE_VIEW_HEIGHT + 1.2)));
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
            idc = IDC_TREE;
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
            w = QUOTE(W_PART(14.9));
            h = QUOTE(H_PART(1));
            text = "";
        };
        class SearchButton: RscButtonSearch {
            x = QUOTE(W_PART((10.1 + 14.9)));
            w = QUOTE(W_PART(1));
            h = QUOTE(H_PART(1));
        };
    };
};

class GVAR(AttributeDispenserGroup): GVAR(AttributeTreeSearch) {
    class Controls: Controls {
        class Label: Label {
            text = "Group";
            tooltip = "Select what group will be spawned by the droid dispenser when it activates.";
        };
        class Search: Search {};
        class SearchButton: SearchButton {};
        class Tree: Tree {
            onLoad = QUOTE(call FUNC(ui_attributeDispenserGroup));
        };

        // Weird spacing issues and the control order was swapped, fix was to move the custom option inside
        class DispenserGroupCustom: GVAR(AttributeDispenserGroupCustom) {
            y = QUOTE(H_PART((TREE_VIEW_HEIGHT + 0.1)));
        };
    };
};

// Thanks to R3vo for helping to fix UI spacing issues
class GVAR(RscDroidDispenser): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad',_this,QQGVAR(RscDroidDispenser))] call FUNC(zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload',_this,QQGVAR(RscDroidDispenser))] call FUNC(zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class DispenserGroup: GVAR(AttributeDispenserGroup) {};
            };
        };
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE(call FUNC(ui_droidDispenser));
        };
        class ButtonCancel: ButtonCancel {};
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
                class DispenserGroup: GVAR(AttributeDispenserGroup) {};
            };
        };
        class ButtonOK: ButtonOK {
            onSetFocus = QUOTE(call FUNC(ui_curatorInfoDispenser));
        };
        class ButtonCancel: ButtonCancel {};
    };
};
