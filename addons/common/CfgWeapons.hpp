class CfgWeapons {
    class ItemCore;
    class CBA_MiscItem: ItemCore {
        class ItemInfo;
    };
    class ls_miscItem_base: CBA_MiscItem {
        scope = 0;
        author = AUTHOR;
        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);

        class ItemInfo: ItemInfo {
            mass = 8;
        };
    };

    // Some commands act strangely if a unit does not have a weapon
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class ls_fakeRifle: Rifle_Base_F {
        scope = 1;
        author = AUTHOR;
        displayName = "";
        model = "\A3\Weapons_f\empty.p3d";
        picture = "";
        magazines[] = {};
        discreteDistance[] = {};
        discreteDistanceInitIndex = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 0;
        };
    };
};
