class ls_helmet_gunslinger: ls_helmet_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Gunslinger Hat";

    model = QPATHTOF(helmets\gunslinger\ls_helmet_gunslinger.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(helmets\gunslinger\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\gunslingerHat_ui_ca.paa);

    class ItemInfo: ItemInfo {
        mass = 5;
        uniformModel = QPATHTOF(helmets\gunslinger\ls_helmet_gunslinger.p3d);
        hiddenSelections[] = {"camo1"};

        class HitpointsProtectionInfo {
            class Head {
                hitpointName = "HitHead";
                armor = 5;
                passThrough = 0.1;
            };
        };
    };
};
