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
};
