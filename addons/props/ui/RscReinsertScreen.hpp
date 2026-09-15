class ls_RscReinsertScreen {
    idd = -1;

    class controls {
        class background: RscPicture {
            idc = IDC_REINSERT_BACKGROUND;
            text = "";
            x = 0;
            y = 0;
            w = 1;
            h = 1;
        };
        class timer: RscText {
            idc = IDC_REINSERT_TIMER;
            text = "";
            font = "ls_aurebeshCondensed";
            colorText[] = {0.5, 0.5, 0.5, 1};
            style = 2;
            sizeEx = 0.1;
            x = 0;
            y = 0;
            w = 1;
            h = 1;
        };
        class timerIcon: RscPicture {
            idc = IDC_REINSERT_TIMER_ICON;
            text = "\A3\UI_F\data\IGUI\Cfg\HoldActions\progress2\progress_0_ca.paa";
            colorText[] = {0.5, 0.5, 0.5, 1};
            x = 0.25;
            y = 0.2;
            w = 0.5;
            h = 0.6;
        };
        class locationName: timer {
            idc = IDC_REINSERT_LOCATION;
            text = "";
            style = 0;
            sizeEx = 0.08;
            x = 0.24;
            y = -0.41;
            w = 1;
            h = 1;
        };
    };
};
