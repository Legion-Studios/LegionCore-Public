class MFD {
    class DashboardScreen {
        topLeft = "pip_screen_tl";
        topRight = "pip_screen_tr";
        bottomLeft = "pip_screen_bl";
        borderLeft = 0.02;
        borderRight = 0.02;
        borderTop = 0.02;
        borderBottom = 0.02;
        color[] = {0, 0.95, 1, 1};
        font = "RobotoCondensed";
        turret[] = {-1};
        condition = "engineOn";

        class Bones {
            class ScreenCenter {
                type = "fixed";
                pos[] = {0.5, 0.5};
            };
        };

        class Draw {
            class TimeDisplay {
                type = "text";
                source = "time";
                text = "%H:%M:%S";
                condition = "engineOn";
                sourceScale = 1;
                align = "center";
                scale = 0.38;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.40, 0.12}, 1};
                right[] = {{0.60, 0.12}, 1};
                down[] = {{0.40, 0.32}, 1};
            };

            class RPMText {
                type = "text";
                source = "static";
                text = "RPM:";
                condition = "engineOn";
                sourceScale = 1;
                align = "left";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.22, 0.62}, 1};
                right[] = {{0.30, 0.62}, 1};
                down[] = {{0.22, 0.82}, 1};
            };

            class RPMValue {
                type = "text";
                source = "rpm";
                sourceScale = 1;
                align = "left";
                condition = "engineOn";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.45, 0.62}, 1};
                right[] = {{0.61, 0.62}, 1};
                down[] = {{0.45, 0.82}, 1};
            };

            class BearingText {
                type = "text";
                source = "static";
                text = "B:";
                sourceScale = 1;
                condition = "engineOn";
                align = "left";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.72, 0.62}, 1};
                right[] = {{0.78, 0.62}, 1};
                down[] = {{0.72, 0.82}, 1};
            };

            class BearingValue {
                type = "text";
                source = "heading";
                sourceScale = 1;
                condition = "engineOn";
                align = "left";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.84, 0.62}, 1};
                right[] = {{0.95, 0.62}, 1};
                down[] = {{0.84, 0.82}, 1};
            };
        };
    };

    class SpeedFuelScreen {
        topLeft = "pip_screen2_tl";
        topRight = "pip_screen2_tr";
        bottomLeft = "pip_screen2_bl";
        borderLeft = 0.02;
        borderRight = 0.02;
        borderTop = 0.02;
        borderBottom = 0.02;
        color[] = {0, 0.95, 1, 1};
        font = "RobotoCondensed";
        turret[] = {-1};
        condition = "engineOn";

        class Bones {
            class ScreenCenter {
                type = "fixed";
                pos[] = {0.5, 0.5};
            };
        };

        class Draw {
            class SpeedText {
                type = "text";
                source = "static";
                text = "SPEED";
                sourceScale = 1;
                align = "center";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.24, 0.12}, 1};
                right[] = {{0.34, 0.12}, 1};
                down[] = {{0.24, 0.32}, 1};
            };

            class SpeedValue {
                type = "text";
                source = "speed";
                sourceScale = 3.6;
                align = "center";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.24, 0.62}, 1};
                right[] = {{0.40, 0.62}, 1};
                down[] = {{0.24, 0.82}, 1};
            };

            class FuelText {
                type = "text";
                source = "static";
                text = "FUEL";
                sourceScale = 1;
                align = "left";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.72, 0.12}, 1};
                right[] = {{0.80, 0.12}, 1};
                down[] = {{0.72, 0.32}, 1};
            };

            class FuelPercentValue {
                type = "text";
                source = "fuel";
                sourceScale = 100;
                align = "right";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.46, 0.62}, 1};
                right[] = {{0.60, 0.62}, 1};
                down[] = {{0.46, 0.82}, 1};
            };

            class FuelPercentSymbol {
                type = "text";
                source = "static";
                text = "%";
                sourceScale = 1;
                align = "left";
                scale = 0.65;
                color[] = {0, 0.95, 1, 1};
                pos[] = {{0.63, 0.62}, 1};
                right[] = {{0.69, 0.62}, 1};
                down[] = {{0.63, 0.82}, 1};
            };
        };
    };
};
