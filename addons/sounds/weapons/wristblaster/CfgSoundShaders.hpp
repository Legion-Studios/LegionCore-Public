class ls_wristblaster_B2_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\wristblaster\b2\shotClose1.wss), 1}};
    volume = 1;
    range = 5;
};
class ls_wristblaster_B2_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\wristblaster\b2\shotClose1.wss), 1}};
    volume = 1.6;
    range = 20;
    rangeCurve = "closeShotCurve";
};
class ls_wristblaster_B2_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\wristblaster\b2\shotClose1.wss), 1}};
    volume = 1.5;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {20, 1}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_wristblaster_B2_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\wristblaster\b2\shotClose1.wss), 1}};
    volume = 1.5;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};

class ls_wristblaster_droideka_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\wristblaster\droideka\shotClose1.wav), 1}};
    volume = 1;
    range = 5;
};
class ls_wristblaster_droideka_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\wristblaster\droideka\shotClose1.wav), 1}};
    volume = 1.6;
    range = 20;
    rangeCurve = "closeShotCurve";
};
class ls_wristblaster_droideka_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\wristblaster\droideka\shotClose1.wav), 1}};
    volume = 1.5;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {20, 1}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_wristblaster_droideka_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\wristblaster\droideka\shotClose1.wav), 1}};
    volume = 1.5;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
