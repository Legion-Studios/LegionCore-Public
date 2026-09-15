class ls_plasma_impact {
    class SparksLight {
        simulation = "light";
        type = "ls_sparks";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
    class ImpactSparks1 {
        simulation = "particles";
        type = "ls_sparks_1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
};

class ls_plasma_impact_he {
    class SparksLight {
        simulation = "light";
        type = "ls_sparks";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.5;
    };
    class ImpactSparks1 {
        simulation = "particles";
        type = "ls_sparks_1";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class ImpactSparks2 {
        simulation = "particles";
        type = "ls_sparks_2";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
    };
    class grenadeExp1 {
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "GrenadeExp";
    };
    class grenadeSmoke1 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "GrenadeSmoke1";
    };
 };

class ls_plasma_blue {
    class light {
        simulation = "light";
        type = "ls_plasmaBlue";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 6;
    };
};
class ls_plasma_red: ls_plasma_blue {
    class light: light {
        type = "ls_plasmaRed";
    };
};
class ls_plasma_green: ls_plasma_blue {
    class light: light {
        type = "ls_plasmaGreen";
    };
};
class ls_plasma_yellow: ls_plasma_blue {
    class light: light {
        type = "ls_plasmaYellow";
    };
};

#include "particleEffects\zelosianBlood\ComplexEffect.hpp"
#include "particleEffects\flamethrower\ComplexEffect.hpp"
