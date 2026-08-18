class Reflectors {
    class Center {
        color[] = {1900, 1300, 950};
        ambient[]= {5, 5, 5};
        position = "Light";
        direction = "Light_end";
        hitpoint = "Light";
        selection= "Light";
        size = 1;
        innerAngle = 100;
        outerAngle = 179;
        coneFadeCoef = 10;
        intensity = 1;
        useFlare = 0;
        dayLight = 0;
        flareSize = 1.0;
        class Attenuation {
            start = 1.0;
            constant = 0;
            linear = 0;
            quadratic = 0.25;
            hardLimitStart = 30;
            hardLimitEnd = 60;
        };
    };
    class Right2: Center {
        position = "light_R_flare";
        useFlare = 1;
    };
    class Left2: Center {
        position = "light_L_flare";
        useFlare = 1;
    };
};
aggregateReflectors[] = {{"Center", "Left2", "Right2"}};
