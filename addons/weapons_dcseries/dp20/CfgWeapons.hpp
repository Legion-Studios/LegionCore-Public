class ls_weapon_dp20_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = "DP-20 Scatter Blaster";

    model = QPATHTOF(dp20\ls_weapon_dp20.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dp20\data\camo1_co.paa)
    };

    handAnim[] = {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"
    };
    reloadAction = "ReloadMagazine";

    magazines[] = {
        "ls_magazine_dp20",
        "ls_magazine_dp20_slug"
    };
    magazineWell[] = {"ls_magwell_dp20"};

    selectionFireAnim = "zasleh";
    drySound[] = {QPATHTOEF(sounds,weapons\dry\generic.wss), 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15a_reload.wss), 0.56234133, 1, 30};

    modes[] = {"FullAuto", "Single"};
    muzzles[] = {"this"};
    class FullAuto: Mode_FullAuto {
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dp20_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
        reloadTime = 0.15;
        dispersion = 0.0014545;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 25;
    };
    class Single: Mode_SemiAuto {
        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dp20_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
        reloadTime = 0.25;
        dispersion = 0.0014545;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 25;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 24;
    };
};

class ls_weapon_dp20: ls_weapon_dp20_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dp20";

    // class EventHandlers {
    //     fired = "call CBA_fnc_weaponEvents";
    // };

    // class CBA_WeaponEvents {
    //     sound = "ls_dp20_rackBolt";
    //     delay = 1;
    // };
};

// Needed for WebKnight droids
DEPRECATED(SWLW_DP20,ls_weapon_dp20);
