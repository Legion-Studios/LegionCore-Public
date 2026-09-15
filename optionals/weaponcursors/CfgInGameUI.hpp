class CfgInGameUI {
    class Cursor {
        class Targeting {
            class MarkedTarget;
            class MarkedTargetNoLos: MarkedTarget {
                color[] = {1, 1, 1, 1};
                texture = QPATHTOEF(weapons,data\cursors\missileLocking_ca.paa);
            };
            class MarkedTargetNoLosRemote: MarkedTarget {
                color[] = {1, 1, 1, 1};
                texture = QPATHTOEF(weapons,data\cursors\missileLocking_ca.paa);
            };

            class Seeker {
                color[] = {1, 1, 1, 1};
                texture = QPATHTOEF(weapons,data\cursors\missileLocking_ca.paa);
            };
            class SeekerLocked: Seeker {
                color[] = {1, 1, 1, 1};
                texture = QPATHTOEF(weapons,data\cursors\missileLocked_ca.paa);
            };
            class SeekerNoLOS: Seeker {
                color[] = {1, 1, 1, 1};
                texture = QPATHTOEF(weapons,data\cursors\missileLocking_ca.paa);
            };
            class SeekerRemote {
                color[] = {1, 1, 1, 1};
                texture = QPATHTOEF(weapons,data\cursors\missileLocking_ca.paa);
            };
        };
    };
};
