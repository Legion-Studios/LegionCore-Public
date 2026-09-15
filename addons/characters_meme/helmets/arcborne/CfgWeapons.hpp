class ls_memeHelmet_arcborne: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(arcborne_helmet);

    model = QPATHTOF(helmets\arcborne\ls_helmet_meme_arcborne.p3d);
    hiddenSelections[] = {"helmet", "crest", "visor", "illum"};
    hiddenSelectionsTextures[] = {
        QPATHTOEF(characters_clone_legacy,helmets\phase2\data\helmet_co.paa),
        QPATHTOEF(characters_clone_legacy,helmets\phase1\data\camo1_co.paa),
        QPATHTOEF(characters_clone_legacy,helmets\phase2\data\helmet_co.paa),
        QPATHTOEF(characters_clone_legacy,helmets\phase1\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(helmets\arcborne\ls_helmet_meme_arcborne.p3d);
        hiddenSelections[] = {"helmet", "crest", "visor", "illum"};
    };
};
