class CfgAnimationSourceSounds {
    class ls_dispenser_hatchMove {
        class Open {
            loop = 0;
            terminate = 0;
            trigger = "direction";
            sound0[] = {QPATHTOF(vehicles\dispenser\hiss.wss), 5, 1, 200};
            sound[] = {"sound0", 1};
        };
        class Close: Open {
            trigger = "1 - direction";
            sound[] = {};
        };
    };

    class ls_door1 {
        class Open {
            loop = 0;
            terminate = 0;
            trigger = "direction";
            sound0[] = {QPATHTOF(props\door_open.wss), 0.4, 1};
            sound[] = {"sound0", 1};
        };
        class Close: Open {
            trigger = "1 - direction";
            sound0[] = {QPATHTOF(props\door_close.wss), 0.4, 1};
        };
    };

    class ls_door1_locked {
        class Open {
            loop = 0;
            terminate = 0;
            trigger = "direction";
            sound0[] = {QPATHTOF(props\door_locked.wss), 0.4, 1};
            sound[] = {"sound0", 1};
        };
        class Close: Open {
            trigger = "1 - direction";
        };
    };

    class ls_squadShield_deployShield {
        class shieldActivate {
            loop = 0;
            terminate = 0;
            trigger = "direction * ((phase - 0.9) factor[0.09, 0.1])";

            sound0[] = {QPATHTOF(characters\droideka\shield_activate.wav), 1, 1};
            sound[] = {"sound0", 1};
        };
        class shieldDectivate: shieldActivate {
            sound0[] = {QPATHTOF(characters\droideka\shield_deactivate.wav), 1, 1};
            trigger = "(1 - direction) * (phase factor[0.09, 0.1])";
        };
    };
};
