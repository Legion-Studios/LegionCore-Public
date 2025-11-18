class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(activate) {
                    displayName = "Activate Active Camo";
                    condition = QUOTE(_player call FUNC(canActivate));
                    statement = QUOTE(_player call FUNC(activate));
                };
                class GVAR(deactivate) {
                    displayName = "Deactivate Active Camo";
                    condition = QUOTE(_player call FUNC(canDeactivate));
                    statement = QUOTE(_player call FUNC(deactivate));
                };
            };
        };
    };
};
