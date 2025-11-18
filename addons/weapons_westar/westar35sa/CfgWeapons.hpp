class ls_weapon_westar35sa_base: ls_pistol_base {
    scope = 0;
    author = AUTHOR;
    displayName = "Westar-35SA";

    model = QPATHTOF(westar35sa\ls_weapon_westar35sa.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(westar35sa\data\camo1_co.paa)
    };
    picture = QPATHTOF(data\ui\westar35sa_ui_ca.paa);

    reloadAction = "GestureReloadPistol";

    magazines[] = {"ls_magazine_westar35sa"};
    magazineWell[] = {"ls_magwell_westar35sa"};

    drySound[] = {"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five.wss", 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17.wss), 0.56234133, 1, 30};

    fireLightDuration = 0.05;
    fireLightIntensity = 0.4;
    fireLightDiffuse[] = {1, 1, 0};
    fireLightAmbient[] = {0, 0, 0};

    inertia = 1.4;
    dexterity = 1.7;
    initSpeed = 300;
    recoil = "recoil_pistol_4five";
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;

    modes[] = {"Single", "close", "short", "medium"};
    muzzles[] = {"this"};
    class Single: Mode_SemiAuto {
        recoil = "recoil_pistol_heavy";
        recoilProne = "recoil_prone_pistol_heavy";
        reloadTime = 0.2;
        dispersion = 0.01015;
        minRange = 5;
        minRangeProbab = 0.3;
        midRange = 25;
        midRangeProbab = 0.6;
        maxRange = 50;
        maxRangeProbab = 0.1;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        // TODO: Convert to sound shader
        sounds[] = {"StandardSound"};
        class StandardSound {
            weaponSoundEffect = "";
            begin1[] = {QPATHTOEF(sounds,weapons\westar35sa\shot1.wss), 1, 1, 1800};
            soundBegin[] = {"begin1", 1};
        };
    };
    class close: Single {
        showToPlayer = 0;
        aiRateOfFire = 0.25;
        aiRateOfFireDistance = 400;
        minRange = 0;
        minRangeProbab = 0.05;
        midRange = 200;
        midRangeProbab = 0.7;
        maxRange = 400;
        maxRangeProbab = 0.2;
    };
    class short: close {
        aiRateOfFire = 0.5;
        aiRateOfFireDistance = 500;
        minRange = 300;
        minRangeProbab = 0.2;
        midRange = 400;
        midRangeProbab = 0.7;
        maxRange = 500;
        maxRangeProbab = 0.2;
    };
    class medium: close {
        aiRateOfFire = 1;
        aiRateOfFireDistance = 900;
        minRange = 400;
        minRangeProbab = 0.2;
        midRange = 700;
        midRangeProbab = 0.7;
        maxRange = 900;
        maxRangeProbab = 0.2;
    };

    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 24;
        holsterScale = 0.9;
        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_cows_westar35s_scope = 1;
            };
        };
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {};
        };
        class PointerSlot: PointerSlot {
            class compatibleItems {
                ls_pointer_westar35sa_flashlight = 1;
                ls_pointer_westar35sa_laser = 1;
            };
        };
    };
};

class ls_weapon_westar35sa: ls_weapon_westar35sa_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_westar35sa";
};

class ls_weapon_westar35sa_flashlight: ls_weapon_westar35sa {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsAcc {
            slot = "PointerSlot";
            item = "ls_muzzle_westar35s_suppressor";
        };
    };
};

class ls_weapon_westar35sa_laser: ls_weapon_westar35sa {
    scope = 1;
    author = AUTHOR;
    class LinkedItems {
        class LinkedItemsAcc {
            slot = "PointerSlot";
            item = "ls_pointer_westar35sa_laser";
        };
    };
};

class ls_pointer_westar35sa_flashlight: acc_flashlight {
    scope = 2;
    author = AUTHOR;
    displayName = "Westar-35SA Flashlight";

    model = QPATHTOF(westar35sa\ls_pointer_westar35sa_laser.p3d);
    picture = QPATHTOF(data\ui\westar35sa_pointer_ui_ca.paa);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(westar35sa\data\camo1_co.paa)
    };
};

class ls_pointer_westar35sa_laser: acc_pointer_IR {
    scope = 2;
    author = AUTHOR;
    displayName = "Westar-35SA Laser Pointer";

    model = QPATHTOF(westar35sa\ls_pointer_westar35sa_laser.p3d);
    picture = QPATHTOF(data\ui\westar35sa_pointer_ui_ca.paa);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(westar35sa\data\camo1_co.paa)
    };

    class ItemInfo: ItemInfo {
        class Pointer {
            // Not ideal, but model is missing laser dir and laser pos memory points
            irLaserPos = "flash dir";
            irLaserEnd = "flash";
        };
    };
};
