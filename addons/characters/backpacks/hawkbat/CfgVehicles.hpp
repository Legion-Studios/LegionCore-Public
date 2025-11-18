class ls_backpack_hawkbat: B_Parachute  {
    scope = 2;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Parachute";

    model = QPATHTOF(backpacks\hawkbat\ls_backpack_hawkbat.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\hawkbat\data\backpack\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\hawkbat_ui_ca.paa);

    editorCategory = "ls_edcat_groundholders";
    parachuteClass = "ls_parachute_hawkbat_steerable";
    ace_hasReserveParachute = 1;
    ace_reserveParachute = "ls_backpack_hawkbat_reserve";
};

class ls_backpack_hawkbat_reserve: ls_backpack_hawkbat  {
    scope = 1;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Reserve Parachute";

    ace_hasReserveParachute = 0;
    ace_reserveParachute = "";
};

class ls_parachute_hawkbat_steerable: Steerable_Parachute_F {
    scope = 1;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Parachute";

    model = QPATHTOF(backpacks\hawkbat\ls_parachute_hawkbat.p3d);
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

class ls_parachute_hawkbat_steerable_reserve: ls_parachute_hawkbat_steerable {
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Reserve Parachute";
};

DEPRECATED(ls_gar_hawkbat_parachuteSteerable,ls_parachute_hawkbat_steerable);
