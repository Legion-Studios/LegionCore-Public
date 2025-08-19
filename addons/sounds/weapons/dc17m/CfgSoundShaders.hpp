class ls_dc17m_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc17m\shotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_dc17m_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc17m\shotClose1.wss), 1}};
    volume = 1;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_dc17m_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc17m\shotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_dc17m_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc17m\shotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};

class ls_dc17m_sniper_closure_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc17m\sniperShotClose1.wss), 1}};
    volume = 0.4466836;
    range = 5;
};
class ls_dc17m_sniper_closeShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc17m\sniperShotClose1.wss), 1}};
    volume = 1;
    range = 50;
    rangeCurve = "closeShotCurve";
};
class ls_dc17m_sniper_midShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc17m\sniperShotMid1.wss), 1}};
    volume = 0.7943282;
    range = 1800;
    rangeCurve[] = {{0, 0.2}, {50, 1}, {300, 0}, {1800, 0}};
};
class ls_dc17m_sniper_distShot_SoundShader {
    samples[] = {{QPATHTOF(weapons\dc17m\snipershotDist1.wss), 1}};
    volume = 1;
    range = 4000;
    rangeCurve[] = {{0, 0}, {50, 0}, {300, 1}, {4000, 1}};
};
