class ls_explosive_breachCharge_place: ace_explosives_place {
    scope = 1;
    author = AUTHOR;

    displayName = "Breaching Charge";
    model = QPATHTOEF(weapons_explosives,breachCharge\ls_explosive_breachCharge_defused.p3d);
    ace_offset[] = {0, 0, 0};
};

class ls_explosive_demoCharge_place: ace_explosives_place {
    scope = 1;
    author = AUTHOR;

    displayName = "Demolition Charge";
    model = QPATHTOEF(weapons_explosives,demoCharge\ls_explosive_demoCharge_defused.p3d);
    ace_offset[] = {0, 0, 0};
};

class ls_explosive_detpack_place: ace_explosives_place {
    scope = 1;
    author = AUTHOR;

    displayName = "Detpack";
    model = QPATHTOEF(weapons_explosives,detpack\ls_explosive_detpack_defused.p3d);
    ace_offset[] = {0, 0, 0};
};
