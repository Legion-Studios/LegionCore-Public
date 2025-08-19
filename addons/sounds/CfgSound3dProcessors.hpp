class CfgSound3dProcessors {
    class ls_snaps_3dProcessor {
        type = "panner";
        innerrange = 0;
        range = 100;
        rangecurve = "ls_weapons_basic_volumeCurve";
    };

    class ls_weapons_3dProcessor {
        type = "panner";
        innerRange = 5;
        range = 500;
        rangeCurve = "ls_weapons_processorCurve";
    };

    class ls_weapons_tails_3dProcessor {
        type = "panner";
        innerrange = 0;
        range = 100;
        rangecurve = "ls_basic_processorCurve";
    };
};
