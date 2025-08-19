class CfgDistanceFilters {
    class ls_weapons_lowpass_filter {
        type = "lowpassfilter";
        minCutoffFrequency = 750;
        qFactor = 1;
        innerRange = 0;
        range = 900;
        powerFactor = 55;
    };

    class ls_weapons_echo_lp_dia {
        type = "lowpassfilter";
        minCutoffFrequency = 2500;
        qFactor = 1;
        innerRange = 30;
        range = 300;
        powerFactor=75;
    };
};
