class GVAR(RscEditBox) {
    idd = -1;
    movingEnable = 0;
    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(RscEditBox),_this select 0)]);
    onUnload = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(RscEditBox),nil)]);
    class controlsBackground {
        class centerBackground {
            idc = -1;
            type = 0;
            style = 48;
            colorText[] = {0, 0, 0, GUI_BCG_ALPHA};
            colorBackground[] = {0, 0, 0, GUI_BCG_ALPHA};
            sizeEx = QUOTE(GUI_GRID_H);
            x = QUOTE(13 * GUI_GRID_W + GUI_GRID_CENTER_X);
            y = QUOTE(2 * GUI_GRID_H + GUI_GRID_CENTER_Y);
            w = QUOTE(13 * GUI_GRID_W);
            h = QUOTE(1.8 * GUI_GRID_H);
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            font = "RobotoCondensed";
        };
    };

    class controls {
        class headerName: RscText {
            idc = 100;
            text = "";
            x = QUOTE(13 * GUI_GRID_W + GUI_GRID_CENTER_X);
            y = QUOTE(GUI_GRID_H + GUI_GRID_CENTER_Y);
            w = QUOTE(13 * GUI_GRID_W);
            h = QUOTE(GUI_GRID_H);
            style = QUOTE(ST_LEFT + ST_SHADOW);
            colorBackground[] = GUI_BCG_COLOR;
        };
        class edit: RscEdit {
            idc = 101;
            canModify = 1;
            x = QUOTE(13.1 * GUI_GRID_W + GUI_GRID_CENTER_X);
            y = QUOTE(2.1 * GUI_GRID_H + GUI_GRID_CENTER_Y);
            w = QUOTE(12.8 * GUI_GRID_W);
            h = QUOTE(1.5 * GUI_GRID_H);
            sizeEx = QUOTE(1.5 * (GUI_GRID_H * 0.7));
        };
        class cancel: RscButtonMenuCancel {
            idc = 102;
            action = "";
            x = QUOTE(13.1 * GUI_GRID_W + GUI_GRID_CENTER_X);
            y = QUOTE(3.9 * GUI_GRID_H + GUI_GRID_CENTER_Y);
            w = QUOTE(5 * GUI_GRID_W);
            h = QUOTE(GUI_GRID_H);
            size = QUOTE(GUI_GRID_H * 1);
            sizeEx = QUOTE(GUI_GRID_H * 0.7);
        };
        class ok: RscButtonMenuOK {
            idc = 103;
            action = "";
            x = QUOTE(20.9 * GUI_GRID_W + GUI_GRID_CENTER_X);
            y = QUOTE(3.9 * GUI_GRID_H + GUI_GRID_CENTER_Y);
            w = QUOTE(5 * GUI_GRID_W);
            h = QUOTE(GUI_GRID_H);
            size = QUOTE(GUI_GRID_H * 1);
            sizeEx = QUOTE(GUI_GRID_H * 0.7);
        };
    };
};
