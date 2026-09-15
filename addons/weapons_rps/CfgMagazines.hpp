class CfgMagazines {
    class ls_launcherMagazine_base;
    class ls_magazine_rps6_heat: ls_launcherMagazine_base {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(rps6_magazine_displayName);
        displayNameShort = "$STR_A3_heat_0";
        descriptionShort = CSTRING(rps6_magazine_descriptionShort);

        model = QPATHTOF(ls_magazine_rps6.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\camo1_co.paa)};
        modelSpecial = QPATHTOF(ls_magazine_rps6.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\rps6_mag_ui_ca.paa);

        initSpeed = 140;
        mass = RPS6_MASS_MAGAZINE;

        ammo = "ls_rocket_rps6_heat";
    };

    // CBA Disposable launchers need their own versions of the magazines. This is because CBA will replace magazines for disposables with
    // pre-loaded launchers. So we just make hidden versions of the same magazine instead and use that in the disposables.
    class ls_magazine_rps6_heat_disposable: ls_magazine_rps6_heat {
        scope = 1;
        author = AUTHOR;
    };

    AI_MAG(ls_magazine_rps6_heat);
};
