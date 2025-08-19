class ls_mandalorianVest_standard: ls_vest_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Mandalorian Traditional Vest";

    model = QPATHTOF(vests\standard\ls_vest_mandalorian.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\standard\data\camo1_co.paa)
    };
    // picture = QPATHTOF(data\ui\standardVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\standard\ls_vest_mandalorian.p3d);
        containerClass = "Supply40";
        hiddenSelections[] = {"camo1"};
        mass = 80;

        class HitpointsProtectionInfo {
            class Legs {
                hitpointName = "HitLegs";
                armor = 6;
                passThrough = 0.3;
            };
        };
    };
};
