class ls_cloneHelmet_arc: ls_cloneHelmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Clone ARC Helmet";

    model = QPATHTOF(helmets\arc\ls_helmet_clone_arc.p3d);
    hiddenSelections[] = {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(helmets\arc\data\helmet_co.paa),
        QPATHTOF(helmets\arc\data\helmet_co.paa)
    };
    picture = QPATHTOF(data\ui\phase2_helmet_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 10;
        uniformModel = QPATHTOF(helmets\arc\ls_helmet_clone_arc.p3d);
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 6;
                passThrough = 0.5;
            };
        };
    };
};

// class ls_cloneHelmet_arc_hologram: ls_cloneHelmet_arc {
//     author = AUTHOR;
//     displayName = "Clone ARC Helmet [Hologram]";

//     model = QPATHTOF(helmets\arc\ls_helmet_clone_arc_hologram.p3d);
//     hiddenSelectionsTextures[] = {
//         // QPATHTOEF(data,textures\hologram\blueHologram_ca.paa),
//         // QPATHTOEF(data,textures\hologram\blueHologram_ca.paa)
//     };

//     class ItemInfo: ItemInfo {
//         uniformModel = QPATHTOF(helmets\arc\ls_helmet_clone_arc_hologram.p3d);
//     };
// };
