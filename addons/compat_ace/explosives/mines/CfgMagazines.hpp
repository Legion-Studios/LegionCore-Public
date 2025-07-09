class ls_explosive_caltrops_magazine: APERSMineDispenser_Mag {
    useAction = 0;
    ace_explosives_placeable = 1;
    ace_explosives_setupObject = "ls_explosive_caltrops_place";

    class ACE_Triggers {
        supportedTriggers[] = {"PressurePlate"};
        class PressurePlate {
            digDistance = -0.05;
        };
    };
};

class ls_explosive_caltropsDispenser_magazine: APERSMineDispenser_Mag {
    useAction = 0;
    ace_explosives_placeable = 1;
    ace_explosives_setupObject = "ls_explosive_caltropsDispenser_place";
};
