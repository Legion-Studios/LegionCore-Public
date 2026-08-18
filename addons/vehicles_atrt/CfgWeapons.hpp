class ls_lighting_default {
    class center;
};

class CfgWeapons {
    class U_I_CombatUniform;
    class ls_uniform_base: U_I_CombatUniform {
        class ItemInfo;
    };
    class ls_uniform_atrt: ls_uniform_base {
        scope = 1;
        author = AUTHOR;
        displayName = CSTRING(uniform_displayName);

        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        // model = QPATHTOF(ls_uniform_atrt.p3d);
        // hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        // hiddenSelectionsTextures[] = {
        //     QPATHTOF(data\camo1_co.paa),
        //     QPATHTOF(data\camo2_co.paa),
        //     QPATHTOF(data\camo3_co.paa),
        //     QPATHTOF(data\camo4_co.paa)
        // };

        // subItems[] = {"Integrated_NVG_F"};
        allowedSlots[] = {};

        ace_fire_protection = 1;

        class ItemInfo: ItemInfo {
            uniformClass = "ls_vehicle_atrt_base";
            containerClass = "Supply150";
            mass = 100;
        };

        class ls_lighting: ls_lighting_default {
            soundOn = "ls_lighting_toggle";
            soundOff = "ls_lighting_toggle";
            lightModes[] = {"ls_lighting_atrtWhite", "ls_lighting_atrtRed", "ls_lighting_atrtBlue"};
            sources[] = {"center"};
            class center: center {
                attachBone = "body";
                attachOffset[] = {0, 0, 0};
            };
        };
    };
};
