class CfgVehicles {
    class House_F;
    class ls_shield_base: House_F {
        scope = 0;
        author = AUTHOR;
        displayName = "";

        model = "";
        hiddenSelections[] = {"shield"};
        hiddenSelectionsTextures[] = {
            QPATHTOEF(data,materials\shieldTile\shield_ca.paa)
        };

        explosionEffect = "";
        destrType = "DestructDefault";
        class DestructionEffects {};

        class UVAnimations {
            class Translation {
                type = "translation";
                source = "time";
                sourceAddress = "loop";
                section = "shield";
                minValue = 0;
                maxValue = 8;
                offset0[] = {0, 0};
                offset1[] = {1, 1};
            };
        };
    };

    #include "effects\CfgVehicles.hpp"
};
