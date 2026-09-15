class ls_memeHelmet_chadimusMaximus: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(chad_helmet);

    model = QPATHTOF(helmets\chadimusMaximus\ls_helmet_meme_chadimusMaximus.p3d);
    hiddenSelections[] = {"helmet", "crest", "visor", "illum"};
    hiddenSelectionsTextures[] = {
        QPATHTOEF(characters_clone_legacy,helmets\phase2\data\helmet_co.paa),
        QPATHTOEF(characters_clone_legacy,helmets\phase1\data\camo1_co.paa),
        QPATHTOEF(characters_clone_legacy,helmets\phase2\data\helmet_co.paa),
        QPATHTOEF(characters_clone_legacy,helmets\phase1\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\chadimusMaximus\ls_helmet_meme_chadimusMaximus.p3d);
        hiddenSelections[] = {"helmet", "crest", "visor", "illum"};
    };
};
