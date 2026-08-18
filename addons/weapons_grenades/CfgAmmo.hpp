class CfgAmmo {
    class GrenadeHand;
    class ls_grenade_ammo_base: GrenadeHand {
        scope = 0;
        author = AUTHOR;

        ace_grenades_pullPinSound[] = {QPATHTOEF(sounds,weapons\grenade\pin.wss), 3, 1, 10};
        grenadeBurningSound[] = {};
        grenadeFireSound[] = {};
    };

    #include "n20\CfgAmmo.hpp"
    #include "thermalDet\CfgAmmo.hpp"

    class Chemlight_green;
    #include "chemlights\CfgAmmo.hpp"
};
