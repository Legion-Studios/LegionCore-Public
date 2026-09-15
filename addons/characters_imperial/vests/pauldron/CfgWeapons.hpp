class ls_imperialVest_stormtrooperPauldron: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(stormtrooper_pauldron_captain);
    descriptionShort = "$STR_A3_SP_AL_I";

    model = QPATHTOF(vests\pauldron\ls_vest_imperial_stormtrooperPauldron.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\pauldron\data\camo1_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(data\ui\pauldronVest_captain_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\pauldron\ls_vest_imperial_stormtrooperPauldron.p3d);
        hiddenSelections[] = {"camo1", "camo2"};

        class HitpointsProtectionInfo {
            class Chest {
                hitpointName = "HitChest";
                armor = 2;
                passThrough = 0.3;
            };
        };
    };
};

class ls_imperialVest_stormtrooperPauldron_black: ls_imperialVest_stormtrooperPauldron {
    author = AUTHOR;
    displayName = CSTRING(stormtrooper_pauldron_corporal);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\pauldron\data\camo1_black_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(data\ui\pauldronVest_coporal_ui_ca.paa);
};

class ls_imperialVest_stormtrooperPauldron_white: ls_imperialVest_stormtrooperPauldron {
    author = AUTHOR;
    displayName = CSTRING(stormtrooper_pauldron_sergeant);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\pauldron\data\camo1_white_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(data\ui\pauldronVest_sergeant_ui_ca.paa);
};

class ls_imperialVest_stormtrooperPauldron_whiplash: ls_imperialVest_stormtrooperPauldron {
    author = AUTHOR;
    displayName = CSTRING(stormtrooper_pauldron_lieutenant);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\pauldron\data\camo1_whiplash_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\officer\officer_accessories_co.paa)
    };
    picture = QPATHTOF(data\ui\pauldronVest_lieutenant_ui_ca.paa);
};
