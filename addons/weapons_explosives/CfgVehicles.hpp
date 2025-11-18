class CfgVehicles {
    class MineBase;
    class ModuleExplosive_F;
    PLACEABLE_EXPLOSIVE(breachCharge,Breaching Charge);
    PLACEABLE_EXPLOSIVE(demoCharge,Demo Charge);
    PLACEABLE_EXPLOSIVE(detpack,Detpack);

    // Not macro'd bnecause they use vanilla models
    class ls_explosive_caltrops: MineBase {
        scope = 2;
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Caltrops";
        model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_ap_f.p3d";
        ammo = "ls_explosive_caltrops_ammo";
    };
    class ls_explosive_caltrops_zeus: ModuleExplosive_F {
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Caltrops";
        icon = "iconExplosiveGP";
        explosive = "ls_explosive_caltrops_ammo";
    };
};
