class ls_mandalorianVest_traditionalPouchMale: ls_mandalorianVest_standard {
    author = AUTHOR;
    displayName = "Mandalorian Traditional Pouches (Male)";

    model = QPATHTOF(vests\traditionalPouches\ls_vest_mandalorian_traditionalPouchMale.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\traditionalPouches\data\male\camo1_co.paa)
    };
    // picture = QPATHTOF(data\ui\pouchesVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\traditionalPouches\ls_vest_mandalorian_traditionalPouchMale.p3d);
        hiddenSelections[] = {"camo1"};
    };
};

class ls_mandalorianVest_traditionalPouchFemale: ls_mandalorianVest_traditionalPouchMale {
    author = AUTHOR;
    displayName = "Mandalorian Traditional Pouches (Female)";

    model = QPATHTOF(vests\traditionalPouches\ls_vest_mandalorian_traditionalPouchFemale.p3d);
    hiddenSelectionsTextures[] = {
        QPATHTOF(vests\traditionalPouches\data\female\camo1_co.paa)
    };
    // picture = QPATHTOF(data\ui\pouchesFemaleVest_ui_ca.paa);

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(vests\traditionalPouches\ls_vest_mandalorian_traditionalPouchFemale.p3d);
    };
};
