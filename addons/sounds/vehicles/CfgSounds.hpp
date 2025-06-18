class ls_impulseOn_laat {
    name = "LAAT Impulsor Activated";
    sound[] = {QPATHTOF(vehicles\laat\impulsor\on.wss), 10, 1, 250};
    titles[] = {0, ""};
    duration = 2;
};

class ls_impulseOff_laat: ls_impulseOn_laat {
    name = "LAAT Impulsor Deactivated";
    sound[] = {QPATHTOF(vehicles\laat\impulsor\off.wss), 10, 1, 250};
};

#include "laatSeries\CfgSounds.hpp"
#include "mortar\weapon\CfgSounds.hpp"