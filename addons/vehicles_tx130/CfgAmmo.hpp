class CfgAmmo {
    class Sh_120mm_HEAT_MP;
    class ls_tx130_cannon_ammo: Sh_120mm_HEAT_MP {
        author = AUTHOR;
        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectfly = "ls_plasmaBlue";
        flaresize = 10;
        tracerscale = 2;
    };

    class B_35mm_AA_Tracer_Red;
    class ls_tx130_AA_ammo: B_35mm_AA_Tracer_Red {
        author = AUTHOR;
        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectfly = "ls_plasmaBlue";
        flaresize = 10;
        tracerscale = 2;
    };
};
