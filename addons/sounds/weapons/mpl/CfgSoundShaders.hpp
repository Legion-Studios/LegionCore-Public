class ls_mpl_closeShot_SoundShader {
    samples[] = {
        {QPATHTOF(weapons\MPL\shot_close.wss), 1}
    };
    volume = "(5-interior)";
    range = 50;
    rangeCurve[] = {{0, 1.52}, {50, 0}};
};
class ls_mpl_midShot_SoundShader {
    samples[] = {
        {QPATHTOF(weapons\MPL\shot_close.wss), 1}
    };
    volume = "(5-interior)";
    range = 150;
    rangeCurve[] = {{0, 0}, {25, 1.2}, {150, 0}};
};
class ls_mpl_distShot_SoundShader {
    samples[] = {
        {QPATHTOF(weapons\MPL\shot_far.wss), 1}
    };
    volume = "(3-interior)";
    range = 3000;
    rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.2}, {2700, 0.6}};
};
