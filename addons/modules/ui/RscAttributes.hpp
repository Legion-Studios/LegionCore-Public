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
            idc = IDC_LABEL;
            text = "";
            tooltip = "";
            x = 0;
            y = 0;
            w = QUOTE(W_PART(LABEL_W));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class Edit: RscEdit {
            idc = IDC_VALUE;
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING));
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

class GVAR(AttributeCode): GVAR(AttributeEdit) {
    idc = IDC_CODE;
    class Controls: Controls {
        class Label: Label {
            text = CSTRING(executeCode_label);
            tooltip = "";
        };
        class Edit: Edit {
            font = "EtelkaMonospacePro";
            autocomplete = "scripting";
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

    class Controls {
        class Label: RscText {
            idc = -1;
            text = "$STR_A3_mdl_radius";
            tooltip = CSTRING(radius_tooltip);
            x = 0;
            y = 0;
            w = QUOTE(W_PART(LABEL_W));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };

        class Slider: RscXSliderH {
            idc = IDC_RADIUS_SLIDER;
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING));
            y = 0;
            w = QUOTE(W_PART(13.3));
            h = QUOTE(H_PART(1));
            sliderPosition = RADIUS_DEFAULT;
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

class GVAR(AttributeSliderTime): RscControlsGroupNoScrollbars {
    onSetFocus = QUOTE(call FUNC(ui_attributeSliderTime));
    x = 0;
    y = 0;
    w = QUOTE(W_PART(26));
    h = QUOTE(H_PART(1.1));

    class controls {
        class Label: RscText {
            idc = IDC_LABEL;
            text = "";
            tooltip = "";
            x = 0;
            y = 0;
            w = QUOTE(W_PART(LABEL_W));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class Slider: RscXSliderH {
            idc = IDC_VALUE;
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING));
            y = 0;
            w = QUOTE(W_PART(SLIDERTIME_SLIDER_W));
            h = QUOTE(H_PART(1));
            sliderPosition = 0;
            sliderRange[] = {0, 3600};
            pageSize = 1;
        };
        class Separator: ctrlStatic {
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING + SLIDERTIME_SLIDER_W + (SLIDERTIME_EDIT_W * 0)));
            y = 0;
            w = QUOTE(W_PART(SLIDERTIME_EDIT_W * 3));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
            font = "EtelkaMonospacePro";
            text = ":  :";
            style = 2;
        };
        class Frame: ctrlStaticFrame {
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING + SLIDERTIME_SLIDER_W + (SLIDERTIME_EDIT_W * 0)));
            y = 0;
            w = QUOTE(W_PART(SLIDERTIME_EDIT_W * 3));
            h = QUOTE(H_PART(1));
        };
        class Hour: RscEdit {
            idc = IDC_SLIDERTIME_HOUR;
            text = "00";
            tooltip = "$STR_3DEN_Attributes_SliderTime_Hour_tooltip";
            sizeEx = QUOTE(H_PART(0.9));
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING + SLIDERTIME_SLIDER_W + (SLIDERTIME_EDIT_W * 0)));
            y = 0;
            w = QUOTE(W_PART(SLIDERTIME_EDIT_W));
            h = QUOTE(H_PART(1));

            autoComplete = "";
            font = "EtelkaMonospacePro";
            style = "0x02 + 0x200";
        };
        class Minute: Hour {
            idc = IDC_SLIDERTIME_MINUTE;
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING + SLIDERTIME_SLIDER_W + (SLIDERTIME_EDIT_W * 1)));
            tooltip = "$STR_3DEN_Attributes_SliderTime_Minute_tooltip";
        };
        class Second: Hour {
            idc = IDC_SLIDERTIME_SECOND;
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING + SLIDERTIME_SLIDER_W + (SLIDERTIME_EDIT_W * 2)));
            tooltip = "$STR_3DEN_Attributes_SliderTime_Second_tooltip";
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
            w = QUOTE(W_PART(LABEL_W));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class Toolbox: ctrlToolbox {
            idc = -1;
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING));
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
            w = QUOTE(W_PART(LABEL_W));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class Tree: RscTreeSearch {
            idc = -1;
            idcSearch = 645;
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING));
            y = 0;
            w = QUOTE(W_PART(15.9));
            h = QUOTE(H_PART(TREE_VIEW_HEIGHT));

            // Make it match the 3DEN version, minus the border
            colorArrow[] = {0, 0, 0, 0};
            colorMarked[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])", 0.5};
            colorMarkedSelected[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])", 1};
            colorMarkedText[] = {1, 1, 1, 1};
            colorPictureRightSelected[] = {1, 1, 1, 1};
            colorPictureSelected[] = {1, 1, 1, 1};
            colorSearch[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])", 1};
            colorSelect[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R', 0.77])", "(profilenamespace getvariable ['GUI_BCG_RGB_G', 0.51])", "(profilenamespace getvariable ['GUI_BCG_RGB_B', 0.08])", 1};
            colorSelectText[] = {1, 1, 1, 1};
            colorText[] = {1, 1, 1, 1};
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
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING));
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

class GVAR(AttributeCombo): RscControlsGroupNoScrollbars {
    idc = -1;
    x = 0;
    y = 0;
    w = QUOTE(W_PART(26));
    h = QUOTE(H_PART(1.1));

    class Controls {
        class Label: RscText {
            idc = IDC_LABEL;
            text = "";
            tooltip = "";
            x = 0;
            y = 0;
            w = QUOTE(W_PART(LABEL_W));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.5};
        };
        class Combo: RscCombo {
            idc = IDC_VALUE;
            x = QUOTE(W_PART(LABEL_W + LABEL_SPACING));
            y = 0;
            w = QUOTE(W_PART(15.9));
            h = QUOTE(H_PART(1));
            colorBackground[] = {0, 0, 0, 0.7};

            class Items {
                /*
                class Item {
                    text = "";
                    tooltip = "";
                    data = "";
                    default = 1;
                };
                */
            };
        };
    };
};

class GVAR(AttributeRallyPoint): GVAR(AttributeCombo) {
    idc = IDC_RALLYPOINT;
    onSetFocus = QUOTE(call FUNC(ui_attributeRallyPoint));
    class Controls: Controls {
        class Label: Label {
            text = CSTRING(rallyPoint_label);
            tooltip = CSTRING(rallyPoint_tooltip);
        };
        class Combo: Combo {};
    };
};
