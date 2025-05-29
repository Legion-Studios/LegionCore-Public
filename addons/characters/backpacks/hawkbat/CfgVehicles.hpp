class ls_hawkbat_backpack: B_Parachute  {
    scope = 2;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Parachute";

    model = QPATHTOF(backpacks\hawkbat\ls_hawkbat_backpack.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\hawkbat\data\backpack\camo1_co.paa)
    };

    editorCategory = "ls_edcat_groundholders";
    parachuteClass = "ls_hawkbat_parachuteSteerable";
    ace_hasReserveParachute = 1;
    ace_reserveParachute = "ls_hawkbat_backpack_reserve";
};

class ls_hawkbat_backpack_reserve: ls_hawkbat_backpack  {
    scope = 1;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Reserve Parachute";

    ace_hasReserveParachute = 0;
    ace_reserveParachute = "";
};

class ls_hawkbat_parachuteSteerable: Steerable_Parachute_F {
    scope = 1;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Parachute";

    model = QPATHTOF(backpacks\hawkbat\ls_hawkbat_parachute.p3d);
    hiddenSelections[] = {"camo1", "camo2", "camo3"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\hawkbat\data\parachute\camo1_co.paa),
        QPATHTOF(backpacks\hawkbat\data\parachute\camo2_co.paa),
        QPATHTOF(backpacks\hawkbat\data\parachute\camo3_co.paa)
    };

    animationOpen = QPATHTOEF2(animations,data\vehicle\hawkbat\ls_hawkbat_open.rtm);
    animationDrop = "";
    duration = 1;
};

class ls_hawkbat_parachuteSteerable_reserve: ls_hawkbat_parachuteSteerable {
    scope = 1;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Reserve Parachute";
};