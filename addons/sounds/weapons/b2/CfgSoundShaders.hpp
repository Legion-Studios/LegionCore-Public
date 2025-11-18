class ls_b2_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\b2\shotClose1.wss), 1}};
    volume = 1;
    range = 5;
};
class ls_b2_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\b2\shotClose1.wss), 1}};
    volume = 1.6;
    range = 20;
    rangeCurve = "closeShotCurve";
};
class ls_b2_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\b2\shotMid1.wss), 1}};
    volume = 1.5;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {20, 1}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_b2_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\b2\shotDist1.wss), 1}};
    volume = 1.5;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
