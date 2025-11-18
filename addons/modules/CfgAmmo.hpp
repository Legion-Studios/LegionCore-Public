class CfgAmmo {
    class ModuleOrdnanceMortar_F_ammo;
    class GVAR(dispenserOrdnance): ModuleOrdnanceMortar_F_ammo {
        hit = 82;
        indirectHit = 26;
        indirectHitRange = 12;
    };

    #include "cfg\protonMortar\CfgAmmo.hpp"
};
