class ls_weapons_sniperRifle_zoomIn01 {
    name = CSTRING(sniperRifle_zoomIn_01);
    sound[] = {QPATHTOF(weapons\misc\sniperRifle_zoomIn01.wss), 1.5, 1, 10};
    titles[] = {0, ""};
    duration = 1;
};

class ls_weapons_sniperRifle_zoomIn02: ls_weapons_sniperRifle_zoomIn01 {
    name = CSTRING(sniperRifle_zoomIn_02);
    sound[] = {QPATHTOF(weapons\misc\sniperRifle_zoomIn02.wss), 1.5, 1, 10};
};

class ls_weapons_sniperRifle_zoomOut01: ls_weapons_sniperRifle_zoomIn01 {
    name = CSTRING(sniperRifle_zoomOut_01);
    sound[] = {QPATHTOF(weapons\misc\sniperRifle_zoomOut01.wss), 1.5, 1, 10};
};

#include "acpa\CfgSounds.hpp"
#include "dc15x\CfgSounds.hpp"
#include "dp20\CfgSounds.hpp"
