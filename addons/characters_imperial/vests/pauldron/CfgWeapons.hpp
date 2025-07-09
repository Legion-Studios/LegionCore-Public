class ls_imperialVest_stormtrooperPauldron: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Imperial Officer Pauldron";

    model = QPATHTOF(vests\pauldron\ls_vest_imperial_stormtrooperPauldron.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\pauldron\data\camo1_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\officer\officer_accessories_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\pauldron\ls_vest_imperial_stormtrooperPauldron.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class ls_imperialVest_stormtrooperPauldron_black: ls_imperialVest_stormtrooperPauldron {
    author = AUTHOR;
    displayName = "Imperial Officer Pauldron (Black)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\pauldron\data\camo1_black_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\officer\officer_accessories_co.paa)
    };
};

class ls_imperialVest_stormtrooperPauldron_white: ls_imperialVest_stormtrooperPauldron {
    author = AUTHOR;
    displayName = "Imperial Officer Pauldron (White)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\pauldron\data\camo1_white_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\officer\officer_accessories_co.paa)
    };
};

class ls_imperialVest_stormtrooperPauldron_whiplash: ls_imperialVest_stormtrooperPauldron {
    author = AUTHOR;
    displayName = "Imperial Officer Pauldron (Whiplash)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\pauldron\data\camo1_whiplash_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\officer\officer_accessories_co.paa)
    };
};
