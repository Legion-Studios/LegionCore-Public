// See https://community.bistudio.com/wiki/Modules

class CfgVehicles {
    class Module_F;
    class GVAR(moduleBase): Module_F {
        scope = 0;
        scopeCurator = 2;
        author = AUTHOR;

        category = QUOTE(ADDON);
        function = QEFUNC(common,dummy);
        functionPriority = 1;
        isGlobal = 1; // 0 = server only, 1 = global, 2 = global w/ JIP
        isTriggerActivated = 0;
    };

    class GVAR(moduleToggleCamo): GVAR(moduleBase) {
        scope = 1;
        author = AUTHOR;
        displayName = "Toggle Active Camo";
        curatorCanAttach = 1;
        function = QFUNC(moduleToggleCamo);
    };

    class ModuleOrdnance_F;
    #include "cfg\protonMortar\CfgVehicles.hpp"
};
