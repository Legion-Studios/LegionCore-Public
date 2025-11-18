class ls_dc15a_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc15a\shotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_dc15a_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc15a\shotClose1.wss), 1}};
    volume = 1;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_dc15a_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc15a\shotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_dc15a_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc15a\shotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 0}};
};
