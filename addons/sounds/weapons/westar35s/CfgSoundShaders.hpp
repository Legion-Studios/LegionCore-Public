class ls_westar35s_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35s\shot1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_westar35s_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35s\shot1.wss), 1}};
    volume = 0.9;
    range = 20;
    rangeCurve = "closeShotCurve";
};
class ls_westar35s_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35s\shot1.wss), 1}};
    volume = 0.65;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {20, 1}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_westar35s_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35s\shot1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};

class ls_westar35s_shotgun_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35s\shotgun_shot1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_westar35s_shotgun_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35s\shotgun_shot1.wss), 1}};
    volume = 0.9;
    range = 20;
    rangeCurve = "closeShotCurve";
};
class ls_westar35s_shotgun_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35s\shotgun_shot1.wss), 1}};
    volume = 0.65;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {20, 1}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_westar35s_shotgun_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35s\shotgun_shot1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
