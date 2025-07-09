class CfgMagazines {
    class CA_Magazine;
    class GVAR(fuelCan_mag): CA_Magazine {
        scope = 2;
        author = AUTHOR;

        displayName = "Jetpack Fuel Can";
        descriptionShort = "A partially full fuel can.<br/>Can carry 4 liters of fuel.";

        count = 400; // Amount of fuel that can be carried
        mass = 60;

        GVAR(isFuelCan) = 1;
        GVAR(fuelCanItem) = QGVAR(fuelCan_empty);

        ACE_isTool = 1;
        ACE_asItem = 1; // treat this magazine like an item

        picture = QPATHTOF(data\ui\FuelCan_ca.paa);
        model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
    };
};
