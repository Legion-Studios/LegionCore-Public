class ls_particle_flamethrowerSpit: IncinerateFire {
    size[] = {0.01, 0.01, 0.25};
};

class ls_particle_flamethrowerExplosion: IncinerateFire {
    size[] = {0.25, 0.5, 0.7};
};

class ls_particle_flamethrowerSmoke: Missile0 {
    moveVelocity[] = {0,2.5,0};
    ignoreWind = 0;
    lifeTimeVar = 1;
    size[] = {1,2.8};
    color[] = {
        {0, 0, 0, 0.05},
        {0, 0, 0, 0.025},
        {0, 0, 0, 0.018}
    };
};

class ls_particle_flamethrowerHeat: Refract {
    sizeCoef = 6;
};
