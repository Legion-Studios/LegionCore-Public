class CfgMagazines {
    class DemoCharge_Remote_Mag;
    class ls_explosive_magazine_base: DemoCharge_Remote_Mag {
        useAction = 1;
        allowedSlots[] = {TYPE_VEST, TYPE_BACKPACK};
    };

    #include "breachCharge\CfgMagazines.hpp"
    #include "demoCharge\CfgMagazines.hpp"
    #include "detpack\CfgMagazines.hpp"

    class APERSMineDispenser_Mag;
    #include "caltrops\CfgMagazines.hpp"
};
