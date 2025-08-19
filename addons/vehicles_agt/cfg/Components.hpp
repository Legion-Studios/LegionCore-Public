class Components: Components {
    class TransportPylonsComponent {
        uiPicture = QPATHTOF(data\ui\agt_icon_ca.paa);

        class Pylons {
            class PylonLeft {
                attachment = "";
                priority = 5;
                turret[] = {0};
                UIposition[] = {0.15, 0.2};
                hardpoints[] = {
                    "SCALPEL_1RND",
                    "B_ASRAAM",
                    "DAR",
                    "DAGR",
                    "B_AMRAAM_D_DUAL_RAIL",
                    "B_SDB_QUAD_RAIL",
                    "B_GBU12",
                    "B_AGM65_RAIL",
                    "BRU_32_EJECTOR",
                    "B_A143_BUZZARD_CENTER_PYLON"
                };
            };

            class PylonRight: PylonLeft {
                UIposition[] = {0.55, 0.2};
            };
        };

        class Presets {
            class Empty {
                displayName = "Empty";
                attachment[] = {};
            };

            class Test {
                displayname = "Tester";
                attachment[] = {
                    "PylonRack_12Rnd_PG_missiles",
                    "PylonRack_12Rnd_missiles"
                };
            };
        };
    };
};
