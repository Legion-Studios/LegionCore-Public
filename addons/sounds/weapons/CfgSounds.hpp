class ls_weapons_sniperRifle_zoomIn01 {
    name = "Sniper Scope In";
    sound[] = {QPATHTOF(weapons\misc\sniperRifle_zoomIn01.wss), 1.5, 1, 10};
    titles[] = {0, ""};
    duration = 1;
};

class ls_weapons_sniperRifle_zoomIn02: ls_weapons_sniperRifle_zoomIn01 {
    sound[] = {QPATHTOF(weapons\misc\sniperRifle_zoomIn02.wss), 1.5, 1, 10};
};

class ls_weapons_sniperRifle_zoomOut01: ls_weapons_sniperRifle_zoomIn01 {
    name = "Sniper Scope Out";
    sound[] = {QPATHTOF(weapons\misc\sniperRifle_zoomOut01.wss), 1.5, 1, 10};
};

#include "dc15x\CfgSounds.hpp"
#include "dp20\CfgSounds.hpp"
#include "firepuncher\CfgSounds.hpp"
#include "valken38x\CfgSounds.hpp"
