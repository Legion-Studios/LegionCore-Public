class ls_e5_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\e5\shotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_e5_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\e5\shotClose1.wss), 1}};
    volume = 0.9;
    range = 20;
    rangeCurve = "closeShotCurve";
};
class ls_e5_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\e5\shotMid1.wss), 1}};
    volume = 0.65;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {20, 1}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_e5_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\e5\shotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
