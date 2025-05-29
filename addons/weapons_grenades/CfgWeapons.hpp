class CfgWeapons {
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[] += {
            "ls_grenade_n20_muzzle",
            "ls_grenade_thermalDetClassA_muzzle",
            "ls_grenade_thermalDetClassB_muzzle",
            "ls_grenade_thermalDetClassC_muzzle",
            "ls_grenade_chemlightBlue_muzzle",
            "ls_grenade_chemlightGreen_muzzle",
            "ls_grenade_chemlightOrange_muzzle",
            "ls_grenade_chemlightRed_muzzle",
        };

        class ThrowMuzzle;
        class ls_grenade_n20_muzzle: ThrowMuzzle {
            displayName = "N-20 Baradium Core Detonator";
            magazines[] = {"ls_grenade_n20"};
        };

        class ls_grenade_thermalDetClassA_muzzle: ThrowMuzzle {
            displayName = "Thermal Detonator [Class A]";
            magazines[] = {"ls_grenade_thermalDetClassA"};
        };

        class ls_grenade_thermalDetClassB_muzzle: ThrowMuzzle {
            displayName = "Thermal Detonator [Class B]";
            magazines[] = {"ls_grenade_thermalDetClassB"};
        };

        class ls_grenade_thermalDetClassC_muzzle: ThrowMuzzle {
            displayName = "Thermal Detonator [Class C]";
            magazines[] = {"ls_grenade_thermalDetClassC"};
        };

        class ls_grenade_chemlightBlue_muzzle: ThrowMuzzle {
            displayName = "Chemlight (Blue)";
            magazines[] = {"ls_grenade_chemlightBlue"};
        };

        class ls_grenade_chemlightGreen_muzzle: ThrowMuzzle {
            displayName = "Chemlight (Green)";
            magazines[] = {"ls_grenade_chemlightGreen"};
        };

        class ls_grenade_chemlightOrange_muzzle: ThrowMuzzle {
            displayName = "Chemlight (Orange)";
            magazines[] = {"ls_grenade_chemlightOrange"};
        };

        class ls_grenade_chemlightRed_muzzle: ThrowMuzzle {
            displayName = "Chemlight (Red)";
            magazines[] = {"ls_grenade_chemlightRed"};
        };
    };
};