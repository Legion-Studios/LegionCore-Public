class ls_dc15b_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc15b\shotClose1.wss), 1}};
    volume = 0.3866836;
    range = 5;
};
class ls_dc15b_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc15b\shotClose1.wss), 1}};
    volume = 0.8;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_dc15b_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc15b\shotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_dc15b_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc15b\shotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {4000, 0}};
};
