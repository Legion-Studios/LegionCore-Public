class ls_memeVest_blackbeard: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Blackbeard's Vest";

    model = QPATHTOF(vests\blackbeard\ls_vest_meme_blackbeard.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOEF(characters_clone_legacy,vests\common\light\light_accessories_co.paa),
        QPATHTOEF(characters_clone_legacy,vests\common\light\light_accessories_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\blackbeard\ls_vest_meme_blackbeard.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        containerClass = "Supply100";
        mass = 80;
    };
};
