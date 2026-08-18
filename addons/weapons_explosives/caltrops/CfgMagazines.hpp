class ls_explosive_caltrops_magazine: APERSMineDispenser_Mag {
    scope = 2;
    author = AUTHOR;
    displayName = "Caltrop";
    displayNameShort = "Caltrop";
    descriptionShort = "Type: Non-lethal caltrop, knocks over units when stepped on<br/>Rounds: 1<br/>Used on: Ground";

    useAction = 1;
    allowedSlots[] = {TYPE_BACKPACK, TYPE_VEST};

    ammo = "ls_explosive_caltrops_ammo";
    mass = 20;
};

class ls_explosive_caltropsDispenser_magazine: APERSMineDispenser_Mag {
    scope = 2;
    author = AUTHOR;
    displayName = "Caltrops Dispenser";
    displayNameShort = "Caltrops Dispenser";
    descriptionShort = "Type: Non-lethal caltrops dispenser<br/>Rounds: 1<br/>Used on: Ground";

    useAction = 1;
    allowedSlots[] = {TYPE_BACKPACK, TYPE_VEST};

    ammo = "ls_explosive_caltropsDispenser_ammo";
    mass = 60;
};

DEPRECATED(ls_mag_caltrops_mine,ls_explosive_caltrops_magazine);
DEPRECATED(ls_mag_caltrops_dispenser,ls_explosive_caltropsDispenser_magazine);
