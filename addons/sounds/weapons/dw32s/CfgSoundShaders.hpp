class ls_dw32s_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\dw32s\shotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_dw32s_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dw32s\shotClose1.wss), 1}};
    volume = 1;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_dw32s_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dw32s\shotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_dw32s_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dw32s\shotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
