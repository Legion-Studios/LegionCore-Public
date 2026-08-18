class ls_weapon_dp20_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(dp23_displayName);
    descriptionShort = ECSTRING(weapons,scatterGun);

    model = QPATHTOF(dp20\ls_weapon_dp20.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dp20\data\camo1_co.paa)
    };

    cursor = "sgun";
    handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_epa\LongRangeRifles\DMR_01\Data\Anim\dmr_01.rtm"};
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_dp20"};
    magazineWell[] = {"ls_magwell_dp20"};

    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc15a_reload.wss), 0.56234133, 1, 30};

    muzzles[] = {"this"};
    modes[] = {"Single", "single_close", "single_far"};
    class Single: Mode_SemiAuto {
        reloadTime = RPM(100);
        dispersion = 0.00145;
        maxRange = 50;
        maxRangeProbab = 0.15;
        midRange = 10;
        midRangeProbab = 0.8;
        minRange = 1;
        minRangeProbab = 0.1;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 20;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_dp20_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class single_close: Single {
        showToPlayer = 0;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 200;
        maxRange = 250;
        maxRangeProbab = 0.15;
        midRange = 170;
        midRangeProbab = 0.8;
        minRange = 50;
        minRangeProbab = 0.1;
    };
    class single_far: single_close {
        aiRateOfFire = 4;
        aiRateOfFireDistance = 300;
        maxRange = 350;
        maxRangeProbab = 0.15;
        midRange = 250;
        midRangeProbab = 0.7;
        minRange = 220;
        minRangeProbab = 0.1;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 50;
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
