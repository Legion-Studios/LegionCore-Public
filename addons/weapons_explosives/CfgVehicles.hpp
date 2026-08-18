class CfgVehicles {
    class MineBase;
    class ModuleExplosive_F;
    PLACEABLE_EXPLOSIVE(breachCharge,Breaching Charge);
    PLACEABLE_EXPLOSIVE(demoCharge,Demo Charge);
    PLACEABLE_EXPLOSIVE(detpack,Detpack);

    // Not macro'd because they use vanilla models
    class ls_explosive_caltropsDispenser: MineBase {
        scope = 2;
        scopeCurator = 0;
        author = AUTHOR;
        displayName = "Caltrops Dispenser";
        editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\APERSMineDispenser_F.jpg";
        model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser.p3d";
        ammo = "ls_explosive_caltropsDispenser_ammo";
    };
    class ls_explosive_caltropsDispenser_zeus: ModuleExplosive_F {
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Caltrops Dispenser";
        editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\APERSMineDispenser_F.jpg";
        icon = "iconExplosiveGP";
        explosive = "ls_explosive_caltropsDispenser_scripted_ammo";
    };
    class ls_explosive_caltrops: MineBase {
        scope = 2;
        scopeCurator = 0;
        author = AUTHOR;
        displayName = "Caltrop";
        editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\APERSMineDispenser_Mine_F.jpg";
        model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_ap_f.p3d";
        ammo = "ls_explosive_caltrops_ammo";
    };
    class ls_explosive_caltrops_zeus: ModuleExplosive_F {
        scopeCurator = 2;
        author = AUTHOR;
        displayName = "Caltrop";
        editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\APERSMineDispenser_Mine_F.jpg";
        icon = "iconExplosiveGP";
        explosive = "ls_explosive_caltrops_ammo";
    };
};
