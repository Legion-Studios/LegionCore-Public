class CfgAmmo {
    class ModuleOrdnanceMortar_F_ammo;
    class GVAR(ordnance): ModuleOrdnanceMortar_F_ammo {
        hit = 82;
        indirectHit = 26;
        indirectHitRange = 12;
    };
    class EGVAR(modules,dispenserOrdnance): GVAR(ordnance) {};
};
