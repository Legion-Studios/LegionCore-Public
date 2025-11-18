class ls_flamethrower_fly {
    class flameSpit {
        intensity = 1;
        interval = 1;
        lifeTime = 2;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ls_particle_flamethrowerSpit";
    };
    class refraction: flameSpit {
        type = "ExhaustSmokeRefractHeliMed";
    };

    class firelight: flameSpit {
        simulation = "light";
        type = "FlareLight";
    };

    class sound {
        simulation = "sound";
        type = "Fire";
    };
};

class ls_flamethrower_explosion {
    class flameStatic {
        intensity = 1;
        interval = 1;
        lifetime = 5;
        simulation = "particles";
        type = "FireDamage1";
    };

    class flameSpit {
        intensity = 1;
        interval = 1;
        lifeTime = 5;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ls_particle_flamethrowerExplosion";
    };

    class flameSmoke: flameSpit {
        lifetime = 3;
        type = "ls_particle_flamethrowerSmoke";
    };

    class flameHeat: flameSpit {
        type = "ls_particle_flamethrowerHeat";
    };

    class flameLight: flameStatic {
        simulation = "light";
        type = "FiredLightMed";
    };
};
