class CfgSFX {
    class ls_sfx_base {
        name = "==BASE SOUND==";
        sounds[] = {"sound0"};
        sound0[] = {};
        empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
    };

    class ls_hitEnergyShieldFX {
        sounds[] = {"hit1", "hit2", "hit3", "hit4", "hit5"};
        hit1[] = {QPATHTOF(deflector\shield_hit1.wss), 1, 1, 100, 0.2, 5, 5, 5};
        hit2[] = {QPATHTOF(deflector\shield_hit2.wss), 1, 1, 100, 0.2, 5, 5, 5};
        hit3[] = {QPATHTOF(deflector\shield_hit3.wss), 1, 1, 100, 0.2, 5, 5, 5};
        hit4[] = {QPATHTOF(deflector\shield_hit4.wss), 1, 1, 100, 0.2, 5, 5, 5};
        hit5[] = {QPATHTOF(deflector\shield_hit5.wss), 1, 1, 100, 0.2, 5, 5, 5};
        hit6[] = {QPATHTOF(deflector\shield_hit6.wss), 1, 1, 100, 0.2, 5, 5, 5};
        hit7[] = {QPATHTOF(deflector\shield_hit7.wss), 1, 1, 100, 0.2, 5, 5, 5};
        empty[] = {"", 0, 0, 0, 0, 0, 0, 0};
    };

    #include "holoprojector\CfgSFX.hpp"
    #include "activeCamo\CfgSFX.hpp"
};
