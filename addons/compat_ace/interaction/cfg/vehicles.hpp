class Helicopter_Base_F;
class Helicopter_Base_H: Helicopter_Base_F {
    class ACE_SelfActions;
};
class ls_laati_base: Helicopter_Base_H {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
        ACTION_LOADVEHICLE;
    };
};
class ls_laatc_base: Helicopter_Base_H {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
        ACTION_LOADVEHICLE;
    };
};
class ls_laatle_base: Helicopter_Base_H {
    class ACE_SelfActions: ACE_SelfActions {
        ACTION_HUD_CHANGER;
    };
};

class VTOL_Base_F;
class ls_starsaber_base: VTOL_Base_F {
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
class ls_barc_base: Car_F {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[0, 0, 1]";
            ACTION_FLIP;
            ACTION_PUSH;
        };
    };
};

class ls_105kLancer_base: Car_F {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[0, -0.5, -0.5]";
            ACTION_FLIP;
            ACTION_PUSH;
        };
    };
};