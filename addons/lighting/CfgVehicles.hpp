class CfgVehicles {
    class Lamps_base_f;
    class GVAR(default): Lamps_base_f {
        scope = 1;
        scopeCurator = 1;
        model = QPATHTOF(ls_lightSource.p3d);
        class Hitpoints {};
        class AnimationSources {};

        class Reflectors {
            class Light_1 {
                color[] = {0, 0, 0};
                ambient[] = {0, 0, 0};
                intensity = 60;
                size = 1;
                innerAngle = 10;
                outerAngle = 85;
                coneFadeCoef = 8;
                position = "Light_1_pos";
                direction = "Light_1_dir";
                hitpoint = "";
                selection = "";
                useFlare = 1;
                flareSize = 0.4;
                flareMaxDistance = 75;
                class Attenuation {
                    start = 0.5;
                    constant = 0;
                    linear = 0;
                    quadratic = 1;
                    hardLimitStart = 30;
                    hardLimitEnd = 37;
                };
            };
        };
    };

    class GVAR(whiteHigh): GVAR(default) {
        displayName = "White (High)";
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                color[] = {180, 156, 120};
                ambient[] = {0.9, 0.78, 0.6};
            };
        };
    };

    class GVAR(whiteLow): GVAR(whiteHigh) {
        displayName = "White (Low)";
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                intensity = 15;
            };
        };
    };

    class GVAR(redHigh): GVAR(default) {
        displayName = "Red (High)";
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                color[] = {255, 10, 10};
            };
        };
    };

    class GVAR(redLow): GVAR(redHigh) {
        displayName = "Red (Low)";
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                intensity = 15;
            };
        };
    };

    class GVAR(blueHigh): GVAR(default) {
        displayName = "Blue (High)";
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                color[] = {10,10,255};
            };
        };
    };

    class GVAR(blueLow): GVAR(blueHigh) {
        displayName = "Blue (Low)";
        class Reflectors: Reflectors {
            class Light_1: Light_1 {
                intensity = 15;
            };
        };
    };
};
