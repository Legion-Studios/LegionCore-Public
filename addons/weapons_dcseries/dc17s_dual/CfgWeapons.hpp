class ls_weapon_dc17s_dual_base: ls_weapon_dc17s_base {
    scope = 0;
    author = AUTHOR;
    displayName = "Dual DC-17S Blaster Pistols";

    model = QPATHTOF(dc17s_dual\ls_weapon_dc17s_dual.p3d);
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc17s_dual\data\camo1_co.paa),
        QPATHTOF(dc17s_dual\data\camo1_co.paa)
    };

    magazines[] = {};
    magazineWell[] = {};

    GVAR(weaponType) = WEAPONTYPE_AKIMBO;
    GVAR(akimboDummy) = "ls_weapon_dc17s_dual_dummyWeapon";
    GVAR(akimboReloadTime) = 2.49;

    inertia = 0.7;
    dexterity = 3.8;

    handAnim[] = {
        "OFP2_ManSkeleton",
        QPATHTOF(dc17s_dual\anims\dc17s_dual_handanim.rtm)
    };
    reloadAction = "ls_reload_dc17s_dual";
    reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17s_dual.ogg), 3.5481339, 1, 10};

    modes[] = {};
    muzzles[] = {"Right", "Left"};
    class Right: ls_weapon_dc17s_base {
        displayName = "Right Hand";
        reloadAction = "ls_reload_dc17s_dual";
        reloadMagazineSound[] = {QPATHTOEF(sounds,weapons\reload\dc17s_dual.ogg), 3.5481339, 1, 10};
        magazines[] = {"ls_magazine_dc17s"};
        magazineWell[] = {"ls_magwell_dc17s_dual"};

        class EventHandlers {
            reload = QUOTE(call FUNC(animateAkimbo)); // Triggers *before* reload
        };
    };

    class Left: Right {
        displayName = "Left Hand";
        showToPlayer = 0;
        muzzlePos = "usti hlavne left";
        muzzleEnd = "konec hlavne left";
    };
};

class ls_weapon_dc17s_dual: ls_weapon_dc17s_dual_base {
    scope = 2;
    author = AUTHOR;
    baseWeapon = "ls_weapon_dc17s_dual";
};

class ls_weapon_dc17s_dual_dummyWeapon: NVGoggles {
    scope = 1;
    author = AUTHOR;
    displayName = "";
    descriptionShort = "";

    model = QPATHTOF(dc17s_dual\ls_weapon_dc17s_dual_dummy.p3d);
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(dc17s_dual\data\camo1_co.paa)
    };
    modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d);

    visionMode[] = {"Normal"};
    thermalMode[] = {0, 1};

    class ItemInfo: ItemInfo {
        uniformModel = QPATHTOF(dc17s_dual\ls_weapon_dc17s_dual_dummy.p3d);
        modelOff = QPATHTOF(dc17s_dual\ls_weapon_dc17s_dual_dummy.p3d);
        hiddenSelections[] = {"camo1"};
        mass = 0;
    };
};
