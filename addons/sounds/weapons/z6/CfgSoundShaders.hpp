class ls_z6_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\z6\shotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_z6_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\z6\shotClose1.wss), 1}};
    volume = 1;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_z6_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\z6\shotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_z6_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\z6\shotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};

class ls_z6_supercharge_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\z6\superchargeShotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_z6_supercharge_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\z6\superchargeShotClose1.wss), 1}};
    volume = 1;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_z6_supercharge_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\z6\superchargeShotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_z6_supercharge_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\z6\superchargeShotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
