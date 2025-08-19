class Helicopter_Base_F;
class Helicopter_Base_H: Helicopter_Base_F {
    class ACE_SelfActions;
};
class ls_vehicle_laati_base: Helicopter_Base_H {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
        ACTION_LOADVEHICLE;
    };
};
class ls_vehicle_laatc_base: Helicopter_Base_H {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
        ACTION_LOADVEHICLE;
    };
};
class ls_vehicle_laatle_base: Helicopter_Base_H {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
    };
};

class Air;
class Plane: Air {
    class ACE_SelfActions;
};
class Plane_Base_F: Plane {};
class VTOL_Base_F: Plane_Base_F {};
class ls_vehicle_starsaber_base: VTOL_Base_F {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
    };
};
class ls_vehicle_z95_base: VTOL_Base_F {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
    };
};
class ls_vehicle_z98_base: VTOL_Base_F {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
    };
};

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
