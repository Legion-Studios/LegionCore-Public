class CfgVehicles {
    class Land_ls_terminal_01;
    class Land_ls_terminal_01_AE3: Land_ls_terminal_01 {
        author = AUTHOR;
        displayName = CSTRING(terminal_01);
        curatorInfoTypeEmpty = "AE3_UserInterface_Zeus_Asset_Details";

        textureList[] = {};
        class TextureSources {};

        class AE3_USB_Interface {
            class USB0 {
                rel_pos[] = {0.213, -0.185, 0.223};
                rot_yaw = 0;
                rot_pitch = 60;
                rot_roll = 0;
            };
            class USB1: USB0 {
                rel_pos[] = {0.293, -0.185, 0.223};
                rot_roll = 180;
            };
        };

        class AE3_Equipment {
            displayName = ECSTRING(props,terminal);
            init = QUOTE(call FUNC(initTerminal));
        };

        AE3_DEVICE(ECSTRING(props,terminal));
        AE3_INTERNAL_DEVICE;
        AE3_ATTRIBUTES;
    };
};
