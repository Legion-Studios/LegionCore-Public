class ls_westar35c_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35c\shot1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_westar35c_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35c\shot1.wss), 1}};
    volume = 0.9;
    range = 20;
    rangeCurve = "closeShotCurve";
};
class ls_westar35c_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35c\shot1.wss), 1}};
    volume = 0.65;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {20, 1}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_westar35c_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\westar35c\shot1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
