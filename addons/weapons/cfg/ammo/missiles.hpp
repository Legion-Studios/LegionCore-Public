class ls_missile_at_base: M_Titan_AT {
    irLock = 1;
    laserLock = 0;
    airLock = 0;
    manualControl = 0;
    hit = 1400;
    indirectHit = 20;
    indirectHitRange = 2;
    initTime = 2;
};

class ls_missile_ap_base: M_Titan_AP {};

class ls_missile_ap_SACLOS_base: ls_missile_ap_base {
    // From M_Vorona_HEAT
    irLock = 0;
    lockType = 1;
    manualControl = 1;
    manualControlOffset = 80;
    missileManualControlCone = 60;
    maxControlRange = 3000;
    weaponLockSystem = 0;
};

class ls_missile_aa_base: M_Titan_AA {};
