class RscTitles {
    class GVAR(RscMouseHint) {
        idd = IDD_MOUSEHINT;
        fadeIn = 0;
        fadeOut = 0;
        duration = 999999;
        enableSimulation = 1;
        onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(mouseHint),_this select 0)]);
        onUnload = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(mouseHint),nil)]);
        class controls {
            class IconLMB: RscPicture {
                idc = IDC_MOUSEHINT_LMB;
                text = QPATHTOF(data\ui\mouse_left_ca.paa);
                x = QUOTE(20 * GUI_GRID_W + GUI_GRID_CENTER_X);
                y = QUOTE(17.5 * GUI_GRID_H);
                w = QUOTE(GUI_GRID_W);
                h = QUOTE(GUI_GRID_H);
            };
            class TextLMB: RscText {
                idc = IDC_MOUSEHINT_LMB_TEXT;
                text = "";
                x = QUOTE(21.1 * GUI_GRID_W + GUI_GRID_CENTER_X);
                y = QUOTE(17.45 * GUI_GRID_H);
                w = QUOTE(24 * GUI_GRID_W);
                h = QUOTE(GUI_GRID_H);
                sizeEx = QUOTE(GUI_GRID_H);
            };
            class IconMMB: IconLMB {
                idc = IDC_MOUSEHINT_MMB;
                text = QPATHTOF(data\ui\mouse_scroll_ca.paa);
                y = QUOTE(18.55 * GUI_GRID_H);
            };
            class TextMMB: TextLMB {
                idc = IDC_MOUSEHINT_MMB_TEXT;
                y = QUOTE(18.5 * GUI_GRID_H);
            };
            class IconRMB: IconLMB {
                idc = IDC_MOUSEHINT_RMB;
                text = QPATHTOF(data\ui\mouse_right_ca.paa);
                y = QUOTE(19.6 * GUI_GRID_H);
            };
            class TextRMB: TextLMB {
                idc = IDC_MOUSEHINT_RMB_TEXT;
                y = QUOTE(19.55 * GUI_GRID_H);
            };
        };
    };
};

class GVAR(RscMouseHintExtra): RscControlsGroupNoScrollbars {
    idc = IDC_MOUSEHINT_EXTRA;
    x = 0;
    y = 0;
    w = QUOTE(40 * GUI_GRID_W);
    h = QUOTE(GUI_GRID_H);
    class controls {
        class Name: RscStructuredText {
            idc = IDC_MOUSEHINT_EXTRA_NAME;
            style = 1;
            x = 0;
            y = 0;
            w = QUOTE(21.5 * GUI_GRID_W + GUI_GRID_CENTER_X);
            h = QUOTE(GUI_GRID_H);
            sizeEx = QUOTE(GUI_GRID_H);
            size = QUOTE(GUI_GRID_H);
            class Attributes {
                font = "EtelkaMonospaceProBold";
                color = "#FFFFFF";
                align = "right";
                valign = "middle";
                shadow = 1;
                shadowColor = "#000000";
                size = 1;
            };
        };
        class Text: RscText {
            idc = IDC_MOUSEHINT_EXTRA_TEXT;
            x = QUOTE(21.1 * GUI_GRID_W + GUI_GRID_CENTER_X);
            y = QUOTE(0);
            w = QUOTE(24 * GUI_GRID_W);
            h = QUOTE(GUI_GRID_H);
            sizeEx = QUOTE(GUI_GRID_H);
        };
    };
};
