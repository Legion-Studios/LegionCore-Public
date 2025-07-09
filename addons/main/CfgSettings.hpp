class CfgSettings {
    class CBA {
        class Versioning {
            class ls_core {
                main_addon = QUOTE(ADDON);

                class dependencies {
                    CBA[] = {"cba_main", REQUIRED_CBA_VERSION, QUOTE(true)};
                    ACE[] = {"ace_main", REQUIRED_ACE_VERSION, QUOTE(isClass (configFile >> 'CfgPatches' >> 'ace_main'))};
                    TFAR[] = {"tfar_core", {1, -1, 0}, QUOTE(isClass (configFile >> 'CfgPatches' >> 'tfar_core'))};
                };
            };
        };
    };
};
