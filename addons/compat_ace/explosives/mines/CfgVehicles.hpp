class ls_explosive_caltrops_place: ace_explosives_place {
    scope = 1;
    author = AUTHOR;
    displayName = "Caltrops";

    model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_ap_f.p3d";
};

class ls_explosive_caltropsDispenser_place: ace_explosives_place {
    scope = 1;
    author = AUTHOR;
    displayName = "Caltrops Dispenser";

    model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser.p3d";

    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[0.0, -0.05, 0.15]";
        };
    };
};
