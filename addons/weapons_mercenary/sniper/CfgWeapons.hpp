class ls_weapon_mercenarySniper_base: ls_rifle_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(sniper_displayName);
    descriptionShort = ECSTRING(weapons,sniperBlasterRifle);
    baseWeapon = "ls_weapon_mercenarySniper";

    model = QPATHTOF(sniper\ls_weapon_mercenarySniper.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(sniper\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\sniper_ui_ca.paa);

    handAnim[] = {"OFP2_ManSkeleton", QPATHTOEF(weapons_dcseries,dc15x\anims\dc15x_handanim.rtm)};

    magazines[] = {"ls_magazine_mercenarySniper"};
    magazineWell[] = {"ls_magwell_mercenarySniper"};

    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\dc17s\reload.wss), 0.56234133, 1, 30};
    cursor = "srifle";

    fireLightDiffuse[] = {FIRELIGHT_YELLOW};

    recoil = "recoil_m320";
    maxRecoilSway = 0.008;
    swayDecaySpeed = 2;
    dexterity = 1.1;
    initSpeed = 910;
    inertia = 1.1;
    aimTransitionSpeed = 0.5;

    muzzles[] = {"this"};
    modes[] = {"Single", "far_optic1", "far_optic2", "medium_optic2"};
    class Single: Mode_SemiAuto {
        reloadTime = RPM(50);
        dispersion = 0.00018;
        recoil = "recoil_single_gm6";
        recoilProne = "recoil_single_prone_gm6";

        maxRange = 350;
        maxRangeProbab = 0.05;
        midRange = 250;
        midRangeProbab = 0.7;
        minRange = 2;
        minRangeProbab = 0.1;
        aiRateOfFire = 3;
        aiRateOfFireDistance = 500;

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_mercenarySniper_Shot_SoundSet", "ls_sniper_Tail_SoundSet"};
        };
    };
    class far_optic1: Single {
        showToPlayer = 0;
        requiredOpticType = 1;

        aiRateOfFire = 5;
        aiRateOfFireDistance = 700;
        maxRange = 1000;
        maxRangeProbab = 0.3;
        midRange = 500;
        midRangeProbab = 0.7;
        minRange = 150;
        minRangeProbab = 0.1;
    };
    class far_optic2: far_optic1 {
        requiredOpticType = 2;
        aiRateOfFire = 8;
        aiRateOfFireDistance = 2000;
        maxRange = 2000;
        maxRangeProbab = 0.3;
        midRange = 1050;
        midRangeProbab = 0.7;
        minRange = 500;
        minRangeProbab = 0.1;
    };
    class medium_optic2: Single {
        showToPlayer = 0;
        requiredOpticType = 2;

        aiRateOfFire = 6;
        aiRateOfFireDistance = 1000;
        maxRange = 1000;
        maxRangeProbab = 0.3;
        midRange = 750;
        midRangeProbab = 0.7;
        minRange = 250;
        minRangeProbab = 0.1;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 310;

        class CowsSlot: CowsSlot {
            iconPosition[] = {0.619, 0.331};
            class compatibleItems {
                ls_cows_mercenarySniper_scope = 1;
            };
        };
        class MuzzleSlot: MuzzleSlot {
            iconPosition[] = {-0.053, 0.472};
            class compatibleItems {
            };
        };
        class PointerSlot: PointerSlot {
            iconPosition[] = {0.514, 0.511};
            class compatibleItems {
            };
        };
        class UnderBarrelSlot: UnderBarrelSlot {
            iconPosition[] = {0.234, 0.683};
            class compatibleItems {
                bipod_03_F_blk = 1;
            };
        };
    };
};

class ls_weapon_mercenarySniper: ls_weapon_mercenarySniper_base {
    scope = 2;
    author = AUTHOR;

    class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "ls_cows_mercenarySniper_scope";
        };
    };
};

DEPRECATED(ls_weapon_mercenarySniper_scoped,ls_weapon_mercenarySniper);

class ls_cows_mercenarySniper_scope: optic_LRPS {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(sniper_optic_sniper_displayName);
    descriptionShort = CSTRING(sniper_optic_sniper_descriptionShort);

    model = QPATHTOF(sniper\ls_cows_mercenarySniper_scope.p3d);
    picture = QPATHTOF(data\ui\sniper_scope_ui_ca.paa);

    GVAR(adsSounds)[] = {
        {QGVAR(sniperRifle_zoomIn01), QGVAR(sniperRifle_zoomIn02)},
        QGVAR(sniperRifle_zoomOut01)
    };

    class ItemInfo: ItemInfo {
        class OpticsModes: OpticsModes {
            class Snip: Snip {
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {0, 1};
            };
        };
    };
};
