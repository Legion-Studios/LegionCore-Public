class ls_gar_hawkbat_backpack: ls_backpack_hawkbat {
    scope = 2;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Parachute [GAR]";

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\hawkbat\data\backpack\camo1_co.paa)
    };
    picture = QPATHTOF(_ui\hawkbat_gar_ui_ca.paa);

    parachuteClass = "ls_gar_hawkbat_parachuteSteerable";
    ace_hasReserveParachute = 1;
    ace_reserveParachute = "ls_gar_hawkbat_backpack_reserve";
};

class ls_gar_hawkbat_backpack_reserve: ls_gar_hawkbat_backpack {
    scope = 1;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Reserve Parachute [GAR]";

    ace_hasReserveParachute = 0;
    ace_reserveParachute = "";
};

class ls_gar_hawkbat_parachuteSteerable: ls_parachute_hawkbat_steerable {
    scope = 1;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Parachute [GAR]";

    hiddenSelectionsTextures[] = {
        QPATHTOF(backpacks\hawkbat\data\parachute\camo1_co.paa),
        QPATHTOF(backpacks\hawkbat\data\parachute\camo2_co.paa),
        QPATHTOF(backpacks\hawkbat\data\parachute\camo3_co.paa)
    };
};

class ls_gar_hawkbat_parachuteSteerable_reserve: ls_gar_hawkbat_parachuteSteerable {
    scope = 1;
    author = AUTHOR;
    displayName = "Steerable 'Hawkbat' Reserve Parachute [GAR]";
};
