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

class ls_dispenser_buttonPress {
    sound[] = {QPATHTOF(vehicles\dispenser\buttonPress.wss), 5, 1, 1500};
    name = "Droid Dispenser Button Press";
    titles[] = {0, ""};
    duration = 1;
};

class ls_dispenser_hiss: ls_dispenser_buttonPress {
    sound[] = {QPATHTOF(vehicles\dispenser\hiss.wss), 5, 1, 1500};
    name = "Droid Dispenser Hiss";
};

#include "laatSeries\CfgSounds.hpp"
#include "mortar\weapon\CfgSounds.hpp"
