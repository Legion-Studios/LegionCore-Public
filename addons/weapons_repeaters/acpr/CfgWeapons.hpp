class ls_weapon_acpr_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(acpr_displayName);
    descriptionShort = CSTRING(acpr_descriptionShort);
    baseWeapon = "ls_weapon_acpr";

    model = QPATHTOF(acpr\ls_weapon_acpr.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\acpr_ui_ca.paa);

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(acpr\anims\acpr_handanim.rtm)};
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_acpr"};
    magazineWell[] = {"ls_magwell_acpr"};

    drySound[] = {"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20.wss", 0.316228, 1, 10};
    changeFiremodeSound[] = {"\A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20.wss", 0.251189, 1, 5};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\acpr\reload.wss), 0.56234133, 1, 30};

    fireLightDiffuse[] = {FIRELIGHT_YELLOW};

    inertia = 1.4;
    dexterity = 1.7;
    initSpeed = -1;
    recoil = "recoil_smg_03";
    maxRecoilSway = 0.015;
    swayDecaySpeed = 1;

    muzzles[] = {"this"};
    modes[] = {"FullAuto", "fullauto_medium", "fullauto_far"};
    class FullAuto: Mode_FullAuto {
        reloadTime = RPM(850);
        dispersion = 0.00116;
        maxRange = 30;
        maxRangeProbab = 0.1;
        midRange = 15;
        midRangeProbab = 0.7;
        minRange = 0;
        minRangeProbab = 0.9;
        aiRateOfFire = 1e-06;
        aiRateOfFireDistance = 500;

        recoil = "recoil_auto_mk20";
        recoilProne = "recoil_auto_prone_mk20";

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_acpr_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
    };
    class fullauto_medium: FullAuto {
        showToPlayer = 0;
        burst = "3 + round random 5";
        maxRange = 150;
        maxRangeProbab = 0.05;
        midRange = 75;
        midRangeProbab = 0.7;
        minRange = 20;
        minRangeProbab = 0.5;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 200;
    };
    class fullauto_far: fullauto_medium {
        burst = "2 + round random 3";
        maxRange = 600;
        maxRangeProbab = 0.2;
        midRange = 500;
        midRangeProbab = 0.2;
        minRange = 400;
        minRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 500;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 60;
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {};
        };
        class CowsSlot: CowsSlot {
            class compatibleItems {};
        };
        class PointerSlot: PointerSlot {
            class compatibleItems {};
        };
    };
};

class ls_weapon_acpr: ls_weapon_acpr_base {
    scope = 2;
    author = AUTHOR;
};
