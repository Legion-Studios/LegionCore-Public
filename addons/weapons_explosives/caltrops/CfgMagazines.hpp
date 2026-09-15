class ls_explosive_caltrops_magazine: APERSMineDispenser_Mag {
    scope = 2;
    author = AUTHOR;
    displayName = ECSTRING(explosives,caltrop_displayName);
    descriptionShort = ECSTRING(explosives,caltrop_descriptionShort);

    useAction = 1;
    allowedSlots[] = {TYPE_BACKPACK, TYPE_VEST};

    ammo = "ls_explosive_caltrops_ammo";
    mass = 20;
};

class ls_explosive_caltropsDispenser_magazine: APERSMineDispenser_Mag {
    scope = 2;
    author = AUTHOR;
    displayName = ECSTRING(explosives,caltropDispenser_displayName);
    descriptionShort = ECSTRING(explosives,caltropDispenser_descriptionShort);

    useAction = 1;
    allowedSlots[] = {TYPE_BACKPACK, TYPE_VEST};

    ammo = "ls_explosive_caltropsDispenser_ammo";
    mass = 60;
};

DEPRECATED(ls_mag_caltrops_mine,ls_explosive_caltrops_magazine);
DEPRECATED(ls_mag_caltrops_dispenser,ls_explosive_caltropsDispenser_magazine);
