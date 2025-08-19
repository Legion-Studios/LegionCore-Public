class CfgLights {
    class RocketLight;
    class CmeasuresLight;

    class ls_plasmaBlue {
        class Attenuation {
            start=0;
            constant=0;
            linear=0;
            quadratic=2.2;
            hardLimitStart=500;
            hardLimitEnd=1000;
        };

        color[] = {0, 0, 1, 1};
        ambient[] = {0, 0, 1, };
        brightness = 10;
        intensity = 10000;
        drawLight = 0;
        blinking = 1;
        position[] = {0, 0.2, 0};
        diffuse[] = {0, 0, 1};
    };
    class ls_plasmaYellow: ls_plasmaBlue {
        color[] = {1, 1, 0, 1};
        ambient[] = {1, 1, 0, 0};
        diffuse[] = {1, 1, 0};
    };
    class ls_plasmaRed: ls_plasmaBlue {
        color[] = {1, 0, 0, 1};
        ambient[] = {1, 0, 0, 0};
        diffuse[] = {1, 0, 0};
    };
    class ls_plasmaGreen: ls_plasmaBlue {
        color[] = {0, 1, 0, 1};
        ambient[] = {0, 1, 0, 0};
        diffuse[] = {0, 1, 0};
    };
    class ls_plasmaGray:  ls_plasmaBlue {
        color[] = {1, 1, 1, 1};
        ambient[] = {1, 1, 1, 0};
        diffuse[] = {1, 1, 1};
    };
    class ls_plasmaLime: ls_plasmaBlue {
        color[] = {1, 1, 1, 1};
        ambient[] = {1, 1, 1, 0};
        diffuse[] = {1, 1, 1};
    };
    class ls_plasmaHeat: ls_plasmaRed {};
    class ls_plasmaIce: ls_plasmaBlue {};

    class ls_sparks {
        class Attenuation {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 1;
            hardLimitStart = 40;
            hardLimitEnd = 80;
        };

        diffuse[] = {1, 0.80000001, 0.80000001};
        color[] = {1, 0.80000001, 0.80000001};
        ambient[] = {0, 0, 0, 0};
        brightness = 50;
        size = 1;
        intensity = 1000;
        drawLight = 0;
        blinking = 0;
        position[] = {0, 0, 0};
    };
};
