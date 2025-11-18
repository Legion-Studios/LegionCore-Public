class CfgWeapons {
    class Default;
    class Put: Default {
        muzzles[] += {
            "ls_explosive_breachCharge_muzzle",
            "ls_explosive_demoCharge_muzzle",
            "ls_explosive_detpack_muzzle",
            "ls_explosive_caltrops_muzzle",
            "ls_explosive_caltropsDispenser_muzzle"
        };

        class PutMuzzle;
        class ls_explosive_muzzle_base: PutMuzzle {
            autoReload = 0;
            enableAttack = 1;
            showToPlayer = 0;
            magazines[] = {};
        };

        class ls_explosive_breachCharge_muzzle: ls_explosive_muzzle_base {
            displayName = "Breaching Charge";
            magazines[] = {"ls_explosive_breachCharge_magazine"};
        };

        class ls_explosive_demoCharge_muzzle: ls_explosive_muzzle_base {
            displayName = "Demolition Charge";
            magazines[] = {"ls_explosive_demoCharge_magazine"};
        };

        class ls_explosive_detpack_muzzle: ls_explosive_muzzle_base {
            displayName = "Detpack";
            magazines[] = {"ls_explosive_detpack"};
        };

        class ls_explosive_caltrops_muzzle: ls_explosive_muzzle_base {
            displayName = "Caltrops";
            magazines[] = {"ls_explosive_caltrops_magazine"};
        };

        class ls_explosive_caltropsDispenser_muzzle: ls_explosive_muzzle_base {
            displayName = "Caltrops Dispenser";
            magazines[] = {"ls_explosive_caltropsDispenser_magazine"};
        };
    };
};
