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

    triggerWhenDestroyed = 0;
    submunitionAmmo[] = {"ls_explosive_caltropsDispenser_ammoDeploy", 1};
};

class ls_explosive_caltropsDispenser_ammoDeploy: APERSMineDispenser_Deploy {
    scope = 2;
    author = AUTHOR;

    hit = 0;
    submunitionAmmo = "ls_explosive_caltrops_ammo";
};
