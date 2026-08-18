class ls_mediumBlaster_Closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\medBlaster\mediumClose.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_mediumBlaster_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\medBlaster\mediumClose.wss), 1}};
    volume = 0.5;
    range = 20;
    rangeCurve = "closeShotCurve";
};
class ls_mediumBlaster_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\medBlaster\mediumDistant.wss), 1}};
    volume = 0.5;
    range = 1800;
    rangeCurve[] = {
        {0, 0.2},
        {20, 1},
        {50, 1},
        {300, 0},
        {1800, 0}
    };
};
class ls_mediumBlaster_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\medBlaster\mediumFar.wss), 1}};
    volume = 0.85;
    range = 4000;
    rangeCurve[] = {
        {0, 0},
        {50, 0},
        {300, 1},
        {4000, 1}
    };
};
