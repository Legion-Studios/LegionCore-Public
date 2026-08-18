class LandVehicle;
class Car: LandVehicle {
    class ACE_Actions {
        class ACE_MainActions;
    };
};
class Car_F: Car {};
class ls_vehicle_barc_base: Car_F {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[0, 0, 1]";
            ACTION_FLIP;
            ACTION_PUSH;
        };
    };
};

class ls_vehicle_105kLancer_base: Car_F {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[0, -0.5, -0.5]";
            ACTION_FLIP;
            ACTION_PUSH;
        };
    };
};

class StaticWeapon: LandVehicle {
    class ACE_Actions {
        class ACE_MainActions;
    };
};
class StaticMGWeapon: StaticWeapon {};
class HMG_01_base_F: StaticMGWeapon {};
class HMG_01_A_base_F: HMG_01_base_F {};
class B_HMG_01_A_F: HMG_01_A_base_F {};
class ls_vehicle_turretDroid_base: B_HMG_01_A_F {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            selection = "interact";
        };
    };
};

class ls_vehicle_j10_base: StaticMGWeapon {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            selection = "interact";
        };
    };
};
