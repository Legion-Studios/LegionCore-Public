class CfgVehicles {
    class SoldierWB;
    class 3AS_ATRT_Base: SoldierWB {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
            };
        };
    };

    class 3AS_UTAT_Base;
    class 3AS_UTAT_01_Base: 3AS_UTAT_Base {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {
                    {-3.61739,  5.24512, 1.25418},
                    { 1.94353, -9.91646, 12.53851}
                };
            };
        };
    };

    class APC_Wheeled_01_Base_F;
    class 3AS_ATTE_Base: APC_Wheeled_01_Base_F {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {"ftr_muzzle", "btl_muzzle"};
            };
        };
    };

    class StaticMGWeapon;
    class 3AS_Republic_FCP: StaticMGWeapon {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {
                    {-2.29093,  5.07768, -1.22499},
                    { 2.78876, -5.07768, -1.22499}
                };
            };
        };
    };

    class Tank_F;
    class 3AS_Saber_01_Base: Tank_F {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {
                    "wheel_1_2_axis",
                    "wheel_2_7_bound"
                };
            };
        };
    };

    class 3AS_RX200_Base: Tank_F {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {
                    "wheel_1_2_bound",
                    "exhaust_2_pos"
                };
            };
        };
    };

    class 3AS_PX10_Base_F: Tank_F {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {
                    "light_l_flare",
                    "exhaust_2_pos"
                };
            };
        };
    };

    class 3AS_RTT_Base: Tank_F {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {
                    "wheel_1_2_axis",
                    "exhaust2"
                };
            };
        };
    };

    class Wheeled_APC_F;
    class 3AS_RTT_Wheeled_Base: Wheeled_APC_F {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {
                    "wheel_1_2_axis",
                    "exhaust2"
                };
            };
        };
    };

    // Used for AV-7
    class MBT_01_arty_base_F;
    class 3AS_01_arty_base_F: MBT_01_arty_base_F {
        class VehicleTransport {
            class Cargo {
                canBeTransported = 1;
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                dimensions[] = {
                    "light_l_dir",
                    "br_ft_rot"
                };
            };
        };
    };
};
