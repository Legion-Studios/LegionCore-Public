class CfgWeapons {
    class CBA_MiscItem;
    class ls_miscItem_base: CBA_MiscItem {
        class ItemInfo;
    };

    class GVAR(fuelCan_empty): ls_miscItem_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Jetpack Fuel Can (Empty)";
        descriptionShort = "An empty fuel can.<br/>Can carry 4 liters of fuel.";

        GVAR(isFuelCan) = 1;
        GVAR(fuelCanMag) = QGVAR(fuelCan_mag);

        ACE_isTool = 1;

        picture = QPATHTOF(data\ui\FuelCan_ca.paa);
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";

        class ItemInfo: ItemInfo {
            mass = 60;
        };
    };
};
