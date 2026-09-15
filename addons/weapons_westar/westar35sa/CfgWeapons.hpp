class ls_weapon_westar35sa_base: ls_pistol_base {
    scope = 0;
    author = AUTHOR;
    displayName = CSTRING(westar35sa_displayName);
    descriptionShort = ECSTRING(weapons,blasterPistol);
    baseWeapon = "ls_weapon_westar35sa";

    model = QPATHTOF(westar35sa\ls_weapon_westar35sa.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(westar35sa\data\camo1_co.paa)};
    picture = QPATHTOF(data\ui\westar35sa_ui_ca.paa);

    magazines[] = {"ls_magazine_westar35sa"};
    magazineWell[] = {"ls_magwell_westar35sa"};

    drySound[] = {"\A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five.wss", 0.39810717, 1, 20};
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\westar35s\reload.wss), 0.56234133, 1, 30};

    fireLightDiffuse[] = {FIRELIGHT_YELLOW};

    inertia = 1.4;
    dexterity = 1.7;
    initSpeed = 300;
    recoil = "recoil_pistol_4five";
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;

    muzzles[] = {"this"};
    modes[] = {"Single"};
    class Single: Mode_SemiAuto {
        reloadTime = RPM(300);
        dispersion = 0.001015;
        maxRange = 50;
        maxRangeProbab = 0.1;
        midRange = 25;
        midRangeProbab = 0.6;
        minRange = 5;
        minRangeProbab = 0.3;
        aiRateOfFire = 2;
        aiRateOfFireDistance = 25;

        recoil = "recoil_pistol_heavy";
        recoilProne = "recoil_prone_pistol_heavy";

        sounds[] = {"StandardSound"};
        class StandardSound {
            soundSetShot[] = {"ls_westar35sa_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
        };
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
    displayName = CSTRING(westar35sa_pointer_flashlight_displayName);

    model = QPATHTOF(westar35sa\ls_pointer_westar35sa_laser.p3d);
    picture = QPATHTOF(data\ui\westar35sa_pointer_ui_ca.paa);
};

class ls_pointer_westar35sa_laser: acc_pointer_IR {
    scope = 2;
    author = AUTHOR;
    displayName = CSTRING(westar35sa_pointer_laser_displayName);

    model = QPATHTOF(westar35sa\ls_pointer_westar35sa_laser.p3d);
    picture = QPATHTOF(data\ui\westar35sa_pointer_ui_ca.paa);

    class ItemInfo: ItemInfo {
        class Pointer {
            irLaserPos = "flash dir";
            irLaserEnd = "flash";
        };
    };
};
