class ls_weapon_lightsaber_yellow: ls_weapon_melee_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Lightsaber (Yellow)";
    baseWeapon = "ls_weapon_lightsaber_yellow";

    model = QPATHTOF(lightsabers\ls_weapon_lightsaber.p3d);
    hiddenSelections[] = {
        "color_inner",
        "color_outer",
        "emitter_camo",
        "body_camo",
        "grip_camo",
        "pommel_camo"
    };
    hiddenSelectionsTextures[] = {
        "#(argb,8,8,3)color(1,1,1,0.9,co)",
        "#(argb,8,8,3)color(1,1,0.501961,0.75,co)"
    };

    magazines[] = {"ls_weapon_kyberCrystal"};
    magazineWell[] = {"ls_magwell_lightsabers"};

    class WeaponSlotsInfo: WeaponSlotsInfo {
        class CowsSlot: CowsSlot {
            class compatibleItems {
                ls_acc_lightsaber_grip = 1;
            };
        };
        class MuzzleSlot: MuzzleSlot {
            class compatibleItems {
                ls_acc_lightsaber_emitter = 1;
            };
        };
        class PointerSlot: PointerSlot {
            class compatibleItems {
                ls_acc_lightsaber_pommel = 1;
            };
        };
        class UnderBarrelSlot: UnderBarrelSlot {
            class compatibleItems {
                ls_acc_lightsaber_body = 1;
            };
        };
    };
};

class ls_acc_lightsaber_body: ls_weapon_lightsaber_body_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Lightsaber Body";
    model = QPATHTOF(lightsabers\ls_weapon_lightsaber_body.p3d);
};

class ls_acc_lightsaber_emitter: ls_weapon_lightsaber_emitter_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Lightsaber Emitter";
    model = QPATHTOF(lightsabers\ls_weapon_lightsaber_emitter.p3d);
};

class ls_acc_lightsaber_grip: ls_weapon_lightsaber_grip_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Lightsaber Grip";
    model = QPATHTOF(lightsabers\ls_weapon_lightsaber_grip.p3d);
};

class ls_acc_lightsaber_pommel: ls_weapon_lightsaber_pommel_base {
    scope = 1;
    author = AUTHOR;
    displayName = "Lightsaber Pommel";
    model = QPATHTOF(lightsabers\ls_weapon_lightsaber_pommel.p3d);
};
