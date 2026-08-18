class CfgAmmo {
    class DemoCharge_Remote_Ammo;
    class ls_explosive_ammo_base: DemoCharge_Remote_Ammo {
        ace_explosives_size = 0;
        ace_explosives_defuseObjectPosition[] = {0, 0, 0};
    };
    #include "explosives\CfgAmmo.hpp"

    #include "mines\CfgAmmo.hpp"
};
