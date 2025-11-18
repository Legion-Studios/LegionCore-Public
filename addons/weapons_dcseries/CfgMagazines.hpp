class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_dc15a: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-15A Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 30<br/>Used in: DC-15A, DC-15SAW, DC-15AC";
        model = QPATHTOF(dc15a\ls_magazine_dc15a.p3d);
        picture = QPATHTOF(data\ui\dc15a_mag_ui_ca.paa);

        initSpeed = 800;
        mass = 8;

        count = 30;
        ammo = "ls_bullet_192mw_blue";
    };

    class ls_magazine_dc15s: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-15S Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 60<br/>Used in: DC-15S";
        model = QPATHTOF(dc15s\ls_magazine_dc15s.p3d);
        picture = QPATHTOF(data\ui\dc15s_mag_ui_ca.paa);

        initSpeed = 920;
        mass = 8;

        count = 60;
        ammo = "ls_bullet_12mw_blue";
    };

    class ls_magazine_dc17s: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-17S Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 30<br/>Used in: DC-17S";

        model = QPATHTOF(dc17s\ls_magazine_dc17s.p3d);
        modelSpecial = QPATHTOF(dc17s\ls_magazine_dc17s.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\dc17s_mag_ui_ca.paa);

        count = 30;
        ammo = "ls_bullet_12mw_blue";
    };

    class ls_magazine_dc15sa: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-15SA Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Self Charging Energy Cell<br/>Rounds: 7<br/>Used in: DC-15SA";
        // model = QPATHTOF(dc15sa\ls_magazine_dc15sa.p3d);
        picture = QPATHTOF(data\ui\dc15sa_mag_ui_ca.paa);

        deleteIfEmpty = 0; // Never delete magazine, on the chance someone unloads it with no ammo
        GVAR(rechargeRate) = 1; // Seconds to give a single a bullet back

        initSpeed = 300;
        mass = 8;
        maxLeadSpeed = 27.7778;

        count = 7;
        ammo = "ls_bullet_63mw_blue";
    };

    class ls_magazine_dc15br: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-15BR Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell<br />Rounds: 15<br />Used in: DC-15BR";

        initSpeed = 910;
        mass = 14;

        count = 15;
        ammo = "ls_bullet_22mw_blue";
    };

    class ls_magazine_dc15x: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-15X Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell<br />Rounds: 15<br />Used in: DC-15X";

        initSpeed = 800;
        mass = 14;

        count = 15;
        ammo = "ls_bullet_22mw_blue";
    };

    class ls_magazine_dp20: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DP-20 Scatter Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell<br/>Rounds: 8<br/>Used in: DP-20";

        mass = 20;
        count = 8;
        ammo = "ls_12Gauge_Pellets_Submunition";
    };

    class ls_magazine_dp20_slug: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DP-20 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 8<br/>Used in: DP-20";

        ammo = "ls_12Gauge_Slug_ammo";
        count = 5;
    };

    class ls_magazine_dc17m: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-17M Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 60<br/>Used in: DP-17M";

        model = QPATHTOF(dc17m\ls_magazine_dc17m_blaster.p3d);
        modelSpecial = QPATHTOF(dc17m\ls_magazine_dc17m_blaster.p3d);
        modelSpecialIsProxy = 1;

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(dc17m\data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\dc17m_mag_blaster_ui_ca.paa);

        GVAR(isBlasterMag) = 1;

        initSpeed = 430;
        mass = 10;

        count = 60;
        ammo = "ls_bullet_9mw_blue";
    };

    class ls_magazine_dc17m_activeCamo: ls_magazine_dc17m {
        scope = 1;
        author = AUTHOR;
        hiddenSelectionsTextures[] = {
            QPATHTOEF(data,textures\blank_ca.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOEF(data,materials\activeCamo.rvmat)
        };
    };

    class ls_magazine_dc17m_sniper: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-17M Sniper Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "High Power Energy Cell<br/>Rounds: 5<br/>Used in: DP-17M";

        model = QPATHTOF(dc17m\ls_magazine_dc17m_sniper.p3d);
        modelSpecial = QPATHTOF(dc17m\ls_magazine_dc17m_sniper.p3d);
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(dc17m\data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\dc17m_mag_sniper_ui_ca.paa);

        GVAR(isSniperMag) = 1;

        count = 5;
        ammo = "ls_bullet_22mw_blue";
    };

    class ls_magazine_dc17m_sniper_activeCamo: ls_magazine_dc17m_sniper {
        scope = 1;
        author = AUTHOR;
        hiddenSelectionsTextures[] = {
            QPATHTOEF(data,textures\blank_ca.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOEF(data,materials\activeCamo.rvmat)
        };
    };

    class ls_magazine_dc17m_antiArmor: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-17M Anti-Armor Grenade";
        displayNameShort = "AT";
        descriptionShort = "Anti-Armor Grebade<br />Rounds: 1<br />Used in DC-17M";

        model = QPATHTOF(dc17m\ls_magazine_dc17m_antiArmor.p3d);
        modelSpecial = QPATHTOF(dc17m\ls_magazine_dc17m_antiArmor.p3d);
        modelSpecialIsProxy = 1;
        mass = 12;

        GVAR(isATMag) = 1;

        count = 1;
        ammo = "ls_40mm_G76_HEF";
    };

    class ls_magazine_dc17m_antiArmor_activeCamo: ls_magazine_dc17m_antiArmor {
        scope = 1;
        author = AUTHOR;
        hiddenSelectionsTextures[] = {
            QPATHTOEF(data,textures\blank_ca.paa)
        };
        hiddenSelectionsMaterials[] = {
            QPATHTOEF(data,materials\activeCamo.rvmat)
        };
    };
};
