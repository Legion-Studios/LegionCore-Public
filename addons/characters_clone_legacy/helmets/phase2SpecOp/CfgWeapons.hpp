class ls_sob_phase2SpecOp_helmet: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone Special Activities Phase 2 Helmet";

    model = QPATHTOF(helmets\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d);
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[]={
        QPATHTOF(helmets\phase2SpecOp\data\helmet_co.paa),
        QPATHTOF(helmets\phase2SpecOp\data\visor_co.paa)
    };
    subItems[] = {"Integrated_NVG_TI_0_F"};

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d);
        hiddenSelections[] = {"camo1", "visor"};
        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 50;
                passThrough = 0.5;
            };
        };
    };
};
