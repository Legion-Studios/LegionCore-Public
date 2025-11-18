class ls_RscCloneRangefinder {
    idd = IDD_RANGEFINDER;
    duration = 9.9999998e+010;
    onLoad = QUOTE(call FUNC(rangefinderOnLoad));
    onUnload = QUOTE(call FUNC(rangefinderOnUnload));

    fadeIn = 0;
    fadeOut = 0;

    class controls {
        class Distance: RscText {
            idc = IDC_DISTANCE;

            text = "----";
            // font = "ls_republic"; // Doesn't render with this display, I have no idea why
            style = ST_RIGHT;

            // color[] = {1, 0, 0, 1};
            // colorBackground[] = {1, 0, 0, 1};

            x = QUOTE(safeZoneX + 0.19);
            y = QUOTE(CENTER_Y(RANGEFINDER_HEIGHT_TOTAL) + 0.1);
            w = QUOTE(RANGEFINDER_WIDTH_TOTAL);
            h = QUOTE(RANGEFINDER_HEIGHT_TOTAL);
            sizeEx = QUOTE(RANGEFINDER_HEIGHT_TOTAL);
        };

        class Time: Distance {
            idc = IDC_TIME;
            text = "0 00 00";

            y = QUOTE(CENTER_Y(RANGEFINDER_HEIGHT_TOTAL) - 0.1);
        };
        class Grid: Time {
            idc = IDC_GRID;
            text = "000. 000. 00";

            y = QUOTE(CENTER_Y(RANGEFINDER_HEIGHT_TOTAL) - 0.05);
        };

        class Bearing: Distance {
            idc = IDC_BEARING;

            text = "---";
            style = ST_LEFT;

            x = QUOTE((safeZoneX + safeZoneW) - (110 * GRID_W));
            y = QUOTE(CENTER_Y(RANGEFINDER_HEIGHT_TOTAL) + 0.15);
        };

        class BearingArrow: RscPicture {
            idc = IDC_BEARING_ARROW;

            text = QPATHTOF(data\ui\bearingArrow_ca.paa);

            x = QUOTE((safeZoneX + safeZoneW) - (114 * GRID_W));
            y = QUOTE(CENTER_Y(25 * GRID_H));
            w = QUOTE(25 * GRID_W);
            h = QUOTE(25 * GRID_H);
        };
    };
};
