class CfgHeads {
    class Default_A3;
    class DefaultHead_A3;
    #include "clones\CfgHeads.hpp"
    #include "droids\CfgHeads.hpp"
    #include "zabrak\CfgHeads.hpp"
    #include "zelosian\CfgHeads.hpp"

    class ls_activeCamo: Default_A3 {
        model = QPATHTOF(ls_head_activeCamo.p3d);
    };

    class ls_hideHead: Default_A3 {
        model = QPATHTOF(ls_head_empty.p3d);
    };

    class ls_head_droideka: Default_A3 {
        model = QPATHTOF(ls_head_droideka.p3d);
    };

    class ls_head_atrt: Default_A3 {
        model = QPATHTOF(ls_head_atrt.p3d);
    };
};
