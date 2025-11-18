class ls_weapon_dc15ac: ls_weapon_dc15a_base {
    scope = 2;
    author = AUTHOR;
    displayName = "DC-15AC Blaster Rifle";
    baseWeapon = "ls_weapon_dc15ac";

    model = QPATHTOF(dc15ac\ls_weapon_dc15ac.p3d);
    hiddenSelections[] = {
        "camo1",
        "sight"
    };
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc15ac\data\camo1_co.paa),
        QPATHTOF(dc15ac\data\training_blue.paa)
    };

    handAnim[] = {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
    };

    modes[] = {
        "Single",
        "FullAuto",
        "close",
        "short",
        "medium"
    };
    class FullAuto: FullAuto {
        reloadTime = 0.10;
        dispersion = 0.0014545;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;
    };
};
