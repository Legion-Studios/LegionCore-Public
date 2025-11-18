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
