class CfgMagazines {
    class ls_magazine_base;
    class ls_magazine_dcSeries_universal: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(universal_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(universal_magazine_descriptionShort);

        model = QPATHTOF(dc15a\ls_magazine_dc15a.p3d);
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = QPATHTOF(data\ui\dc15a_mag_ui_ca.paa);

        initSpeed = 774;
        mass = 10;

        count = 30;
        ammo = "ls_ammo_65x39_blue";
    };

    // TODO: Idk if we actually want to fully deprecate this
    DEPRECATED(ls_magazine_dc15a,ls_magazine_dcSeries_universal);

    class ls_magazine_dc15s: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(dc15s_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(dc15s_magazine_descriptionShort);

        model = QPATHTOF(dc15s\ls_magazine_dc15s.p3d);
        picture = QPATHTOF(data\ui\dc15s_mag_ui_ca.paa);

        initSpeed = 774;
        mass = 12;

        count = 60;
        ammo = "ls_ammo_556x45_blue";
    };

    class ls_magazine_dc17s: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(dc17s_magazine_displayName);
        displayNameShort = ECSTRING(weapons,lowEnergy);
        descriptionShort = CSTRING(dc17s_magazine_descriptionShort);

        model = QPATHTOF(dc17s\ls_magazine_dc17s.p3d);
        modelSpecial = QPATHTOF(dc17s\ls_magazine_dc17s.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\dc17s_mag_ui_ca.paa);

        initSpeed = 430;
        mass = 10;

        count = 30;
        ammo = "ls_ammo_45ACP_blue";
    };

    class ls_magazine_dc17s_highPower: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(dc17s_highPower_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(dc17s_highPower_magazine_descriptionShort);

        model = QPATHTOF(dc17s\ls_magazine_dc17s.p3d);
        modelSpecial = QPATHTOF(dc17s\ls_magazine_dc17s.p3d);
        modelSpecialIsProxy = 1;
        picture = QPATHTOF(data\ui\dc17s_mag_ui_ca.paa);

        initSpeed = 430;
        mass = 10;

        count = 5;
        ammo = "ls_ammo_65x39_blue";
    };

    class ls_magazine_dc15sa: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(dc15sa_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(dc15sa_magazine_descriptionShort);
        // model = QPATHTOF(dc15sa\ls_magazine_dc15sa.p3d);
        picture = QPATHTOF(data\ui\dc15sa_mag_ui_ca.paa);

        deleteIfEmpty = 0; // Never delete magazine on the chance someone unloads it with no ammo
        GVAR(rechargeRate) = 1; // Seconds to give a single a bullet back

        initSpeed = 450;
        mass = 10;
        maxLeadSpeed = 27.7778;

        count = 7;
        ammo = "ls_ammo_93x64_blue";
    };

    // TODO: Probably yeeted with new DC-Series
    class ls_magazine_dc15br: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = "DC-15BR Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell<br/>Rounds: 15<br/>Used in: DC-15BR";

        initSpeed = 910;
        mass = 14;

        count = 15;
        ammo = "ls_bullet_22mw_blue";
    };

    class ls_magazine_dc15x: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(dc15x_magazine_displayName);
        displayNameShort = ECSTRING(weapons,highEnergy);
        descriptionShort = CSTRING(dc15x_magazine_descriptionShort);

        initSpeed = 867;
        mass = 20;

        count = 10;
        ammo = "ls_ammo_408_blue";
    };

    class ls_magazine_dp20: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(dp23_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(dp23_magazine_descriptionShort);

        initSpeed = 380;

        mass = 30;
        count = 10;
        ammo = "ls_ammo_12Gauge_Pellets_Submunition_Blue";
    };

    class ls_magazine_dp20_slug: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(dp23_slug_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(dp23_slug_magazine_descriptionShort);

        initSpeed = 380;

        mass = 15;
        count = 5;
        ammo = "ls_ammo_12Gauge_Slug_Blue";
    };

    class ls_magazine_dc17m: ls_magazine_base {
        scope = 2;
        author = AUTHOR;

        displayName = CSTRING(dc17m_blaster_magazine_displayName);
        displayNameShort = ECSTRING(weapons,standardEnergy);
        descriptionShort = CSTRING(dc17m_blaster_magazine_descriptionShort);

        model = QPATHTOF(dc17m\ls_magazine_dc17m_blaster.p3d);
        modelSpecial = QPATHTOF(dc17m\ls_magazine_dc17m_blaster.p3d);
        modelSpecialIsProxy = 1;

        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(dc17m\data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\dc17m_mag_blaster_ui_ca.paa);

        GVAR(isBlasterMag) = 1;

        initSpeed = 520;
        mass = 15;

        count = 60;
        ammo = "ls_ammo_65x39_blue";
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

        displayName = CSTRING(dc17m_sniper_magazine_displayName);
        displayNameShort = ECSTRING(weapons,highEnergy);
        descriptionShort = CSTRING(dc17m_sniper_magazine_descriptionShort);

        model = QPATHTOF(dc17m\ls_magazine_dc17m_sniper.p3d);
        modelSpecial = QPATHTOF(dc17m\ls_magazine_dc17m_sniper.p3d);
        modelSpecialIsProxy = 1;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(dc17m\data\camo1_co.paa)
        };
        picture = QPATHTOF(data\ui\dc17m_mag_sniper_ui_ca.paa);

        GVAR(isSniperMag) = 1;

        initSpeed = 867;
        mass = 10;

        count = 5;
        ammo = "ls_ammo_408_blue";
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

        displayName = CSTRING(dc17m_antiArmor_magazine_displayName);
        displayNameShort = "$STR_A3_heat_0";
        descriptionShort = CSTRING(dc17m_antiArmor_magazine_descriptionShort);
        picture = QPATHTOF(data\ui\dc17m_mag_antiArmor_ui_ca.paa);

        model = QPATHTOF(dc17m\ls_magazine_dc17m_antiArmor.p3d);
        modelSpecial = QPATHTOF(dc17m\ls_magazine_dc17m_antiArmor.p3d);
        modelSpecialIsProxy = 1;

        GVAR(isAntiArmorMag) = 1;

        initSpeed = 241;
        mass = 10;

        count = 1;
        ammo = "ls_ammo_dc17m_antiArmor";
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
