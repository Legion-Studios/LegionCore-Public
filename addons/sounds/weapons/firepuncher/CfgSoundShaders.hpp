class ls_firepuncher_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\firepuncher\shotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_firepuncher_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\firepuncher\shotClose1.wss), 1}};
    volume = 1;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_firepuncher_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\firepuncher\shotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_firepuncher_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\firepuncher\shotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};

class ls_firepuncher_suppressed_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\firepuncher\suppressedShotClose1.wss), 1}};
    volume = 1;
    range = 300;
    rangeCurve[] = {{0, 1}, {300, 0}};
};

class ls_firepuncher_suppressed_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\firepuncher\suppressedShotDist1.wss), 1}};
    volume = 1;
    range = 1000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {1000, 1}};
};
