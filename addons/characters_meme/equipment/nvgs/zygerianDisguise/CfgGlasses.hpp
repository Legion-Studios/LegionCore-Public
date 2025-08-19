class ls_memeGlasses_zygerrianDisguise: ls_combatGlasses_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Zygerrian Disguise";

    model = QPATHTOF(equipment\nvgs\zygerianDisguise\ls_nvg_meme_zygerianDisguise.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(equipment\nvgs\zygerianDisguise\data\camo1_co.paa)
    };
    // picture = QPATHTOF(data\ui\catears_ui_ca.paa);

    mass = 4;
};
