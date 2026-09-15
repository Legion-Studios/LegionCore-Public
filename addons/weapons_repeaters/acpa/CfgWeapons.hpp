class ls_weapon_acpa_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(acpa_displayName);
    descriptionShort = CSTRING(acpa_descriptionShort);
    baseWeapon = "ls_weapon_acpa";

    model = QPATHTOF(acpa\ls_weapon_acpa.p3d);
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    picture = QPATHTOF(data\ui\acpa_ui_ca.paa);

    cursor = "sgun";
    handAnim[] = {"OFP2_ManSkeleton", QPATHTOF(acpa\anims\acpa_handanim.rtm)};
    reloadAction = "ReloadMagazine";

    magazines[] = {"ls_magazine_acpa"};
    magazineWell[] = {"ls_magwell_acpa"};

    drySound[] = {"\A3\Sounds_F_Enoch\Assets\Arsenal\HunterShotgun_01\HunterShotgun_01_Shot_Dry_01.wss", 0.501187, 1, 10};
    changeFiremodeSound[] = {"\A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_firemode.wss", 0.177828, 1, 5};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\acpa\reload.wss), 0.56234133, 1, 30};

    fireLightDiffuse[] = {FIRELIGHT_YELLOW};

    inertia = 0.5;
    dexterity = 1.5;
    initSpeed = -0.893443;
    recoil = "ls_recoil_acpa";
    maxRecoilSway = 0.008;
    swayDecaySpeed = 2;
    fireSpreadAngle = 1.2;

    muzzles[] = {"this"};
    modes[] = {"Single", "single_close", "single_far"};
    class Single: Mode_SemiAuto {
        reloadTime = RPM(50);
        dispersion = 0.00185;
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
            soundSetShot[] = {"ls_acpa_Shot_SoundSet", "HunterShotgun_01_Tail_SoundSet"};
        };
    };
    class single_close: Single {
        showToPlayer = 0;
        maxRange = 200;
        maxRangeProbab = 0.15;
        midRange = 140;
        midRangeProbab = 0.8;
        minRange = 50;
        minRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 200;
    };
    class single_far: single_close {
        maxRange = 300;
        maxRangeProbab = 0.15;
        midRange = 230;
        midRangeProbab = 0.7;
        minRange = 180;
        minRangeProbab = 0.1;
        aiRateOfFire = 4;
        aiRateOfFireDistance = 300;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 65;
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

class ls_weapon_acpa: ls_weapon_acpa_base {
    scope = 2;
    author = AUTHOR;

    class EventHandlers {
        fired = QUOTE(call FUNC(weaponEvents));
    };

    class ls_WeaponEvents {
        sound = "ls_acpa_pump";
        delay = 0.2;
    };
};
