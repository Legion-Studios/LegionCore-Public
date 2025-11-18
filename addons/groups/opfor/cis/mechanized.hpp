class cis_mechanized {
    name = "Mechanized";

    class cis_mechanized_raptorPack {
        side = OPFOR;
        faction = "ls_cis";
        name = "Raptor Pack";
        icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

        class Unit0 {
            side = OPFOR;
            position[] = {0, 0, 0};
            rank = "LIEUTENANT";
            vehicle = "ls_vehicle_agtRaptor";
        };
        class Unit1: Unit0 {
            position[] = {10, -10, 0};
            rank = "SERGEANT";
        };
        class Unit2: Unit1 {
            position[] = {-10, -10, 0};
        };
        class Unit3: Unit0 {
            position[] = {20, -20, 0};
            rank = "CORPORAL";
        };
    };
};
