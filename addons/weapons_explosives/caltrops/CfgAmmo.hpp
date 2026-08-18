class ls_explosive_caltrops_ammo: TrainingMine_Ammo {
    scope = 2;
    author = AUTHOR;
    GVAR(ammoType) = AMMOTYPE_RAGDOLL;
    model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_ap_f.p3d";
    indirectHit = 0.1;
    indirectHitRange = 1;

    explosionEffects = "";
    soundActivation[] = {"", 0, 0, 0};
    soundDeactivation[] = {"", 0, 0, 0};
    soundSetExplosion[] = {};
    soundHit1[] = {"", 0, 0, 0};
    soundHit2[] = {"", 0, 0, 0};
    class EventHandlers {};
};

class ls_explosive_caltropsDispenser_ammo: APERSMineDispenser_Ammo {
    scope = 2;
    author = AUTHOR;
    submunitionAmmo[] = {"ls_explosive_caltropsDispenser_ammoDeploy", 1};
};

// Needed for Zeus placed caltrops, so Zeus can use End key to "kill" and trigger the explosive
class ls_explosive_caltropsDispenser_scripted_ammo: ls_explosive_caltropsDispenser_ammo {
    triggerWhenDestroyed = 1;
};

class ls_explosive_caltropsDispenser_ammoDeploy: APERSMineDispenser_Deploy {
    scope = 2;
    author = AUTHOR;
    hit = 0;
    submunitionAmmo = "ls_explosive_caltrops_ammo";
};
