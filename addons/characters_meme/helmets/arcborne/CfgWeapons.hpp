class ls_memeHelmet_arcborne: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "ARCborne Helmet";

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
        mass = 10;

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 20;
                passThrough = 0.5;
            };
            class Face: Head {
                hitpointName = "HitFace";
            };
        };

    };
};
