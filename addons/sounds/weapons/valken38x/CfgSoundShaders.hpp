class ls_valken38x_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\valken38x\shotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_valken38x_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\valken38x\shotClose1.wss), 1}};
    volume = 0.9;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_valken38x_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\valken38x\shotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_valken38x_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\valken38x\shotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
