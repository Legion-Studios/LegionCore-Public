class CfgMagazines {
    // Common vehicle magazines
    class VehicleMagazine;
    class ls_vehicleMagazine_base: VehicleMagazine {
        scope = 0;
        author = AUTHOR;

        picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
        tracersEvery = 1;
    };

    class ls_magazine_50mm_200Rnd_HE_blue: ls_vehicleMagazine_base {
        scope = 2;
        displayName = "50mm HE";
        displayNameShort = "50mm HE";

        initSpeed = 1120;
        maxLeadSpeed = 83.3333;
        muzzleImpulseFactor[] = {-0.1, 1};
        nameSound = "cannon";

        ammo = "ls_50mm_he_blue";
        count = 200;
    };
    class ls_magazine_50mm_200Rnd_HE_red: ls_magazine_50mm_200Rnd_HE_blue {
        ammo = "ls_50mm_he_red";
    };
    class ls_magazine_50mm_200Rnd_HE_green: ls_magazine_50mm_200Rnd_HE_blue {
        ammo = "ls_50mm_he_green";
    };

    class ls_magazine_50mm_200Rnd_APFSDS_blue: ls_magazine_50mm_200Rnd_HE_blue {
        displayName = "50mm APFSDS";
        displayNameShort = "50mm APFSDS";
        ammo = "ls_50mm_apfsds_blue";
    };
    class ls_magazine_50mm_200Rnd_APFSDS_red: ls_magazine_50mm_200Rnd_HE_blue {
        ammo = "ls_50mm_apfsds_red";
    };
    class ls_magazine_50mm_200Rnd_APFSDS_green: ls_magazine_50mm_200Rnd_HE_blue {
        ammo = "ls_50mm_apfsds_green";
    };

    class ls_magazine_120mm_30Rnd_HE_blue: ls_vehicleMagazine_base {
        scope = 2;
        displayName = "120mm 30Rnd HE Plasma Rod";
        displayNameShort = "120mm HE";

        initSpeed = 1700;
        maxLeadSpeed = 25;
        nameSound = "cannon";
        muzzleImpulseFactor[] = {1.0, 6};

        ammo = "ls_120mm_he_blue";
        count = 30;
    };
    class ls_magazine_120mm_30Rnd_HE_red: ls_magazine_120mm_30Rnd_HE_blue {
        ammo = "ls_120mm_he_red";
    };

    class ls_magazine_120mm_30Rnd_HE_green: ls_magazine_120mm_30Rnd_HE_blue {
        ammo = "ls_120mm_he_green";
    };

    class ls_magazine_120mm_30Rnd_APFSDS_blue: ls_magazine_120mm_30Rnd_HE_blue {
        displayName = "120mm 30Rnd AP Plasma Rod";
        displayNameShort = "120mm AP";
        ammo = "ls_120mm_apfsds_blue";
    };
    class ls_magazine_120mm_30Rnd_APFSDS_red: ls_magazine_120mm_30Rnd_APFSDS_blue {
        ammo = "ls_120mm_apfsds_red";
    };

    class ls_magazine_120mm_30Rnd_APFSDS_green: ls_magazine_120mm_30Rnd_APFSDS_blue {
        ammo = "ls_120mm_apfsds_green";
    };

    class ls_magazine_40mm_50Rnd_G_blue: ls_vehicleMagazine_base {
        scope = 2;
        displayName = "40mm 50Rnd HE Plasma Grenades";
        descriptionShort = "40mm HE";

        initSpeed = 400;
        maxLeadSpeed = 25;
        nameSound = "";
        muzzleImpulseFactor[] = {0.1, 0.1};

        count = 50;
        ammo = "ls_40mm_he_blue";
    };
    class ls_magazine_40mm_50Rnd_G_red: ls_magazine_40mm_50Rnd_G_blue {
        ammo = "ls_40mm_he_red";
    };
    class ls_magazine_40mm_50Rnd_G_green: ls_magazine_40mm_50Rnd_G_blue {
        ammo = "ls_40mm_he_green";
    };

    class ls_magazine_127x99_500Rnd_blue: ls_vehicleMagazine_base {
        scope = 2;
        displayname = "12.7x99mm 500Rnd Plasma Cell (Blue)";
        displaynameshort = "12.7x99mm";

        initSpeed = 910;
        maxLeadSpeed = 36.1111;
        nameSound = "mgun";
        muzzleImpulseFactor[] = {0.05, 0.05};

        count = 500;
        ammo = "ls_127x99_blue";
    };
    class ls_magazine_127x99_500Rnd_red: ls_magazine_127x99_500Rnd_blue {
        displayname = "12.7x99mm 500Rnd Plasma Cell (Red)";
        ammo = "ls_127x99_red";
    };
    class ls_magazine_127x99_500Rnd_green: ls_magazine_127x99_500Rnd_blue {
        displayname = "12.7x99mm 500Rnd Plasma Cell (Green)";
        ammo = "ls_127x99_green";
    };

    class 40Rnd_105mm_APFSDS_T_Green;
    class ls_magazine_75mm_30Rnd_HE_red: 40Rnd_105mm_APFSDS_T_Green {
        author = AUTHOR;
        ammo = "ls_75mm_HE_red";
        count = 30;
        muzzleImpulseFactor[] = {1.0, 6};
    };

    class ls_magazine_30mw_500Rnd_blue: ls_vehicleMagazine_base {
        scope = 1;
        displayName = "30MW 500Rnd Plasma Cell (Blue)";
        descriptionShort = "Caliber: 30 MW<br />Rounds: 500";
        model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
        // picture = "\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";

        initSpeed = 750;
        maxLeadSpeed = 36;
        nameSound = "mgun";
        mass = 60;
        weaponpoolavailable = 1;
        ACE_isBelt = 1;

        count = 500;
        ammo = "ls_bullet_30mw_blue";
    };
    class ls_magazine_30mw_500Rnd_red: ls_magazine_30mw_500Rnd_blue {
        scope = 2;
        author = AUTHOR;
        displayName = "30MW 500Rnd Plasma Cell (Red)";
        ammo = "ls_bullet_30mw_red";
    };
    class ls_magazine_30mw_500Rnd_green: ls_magazine_30mw_500Rnd_blue {
        scope = 2;
        author = AUTHOR;
        displayName = "30MW 500Rnd Plasma Cell (Green)";
        ammo = "ls_bullet_30mw_green";
    };

    MAG_CSW(ls_magazine_30mw_500Rnd_blue,1);
    MAG_CSW(ls_magazine_30mw_500Rnd_red,1);
    MAG_CSW(ls_magazine_30mw_500Rnd_green,1);

    class ls_magazine_CM_base: ls_vehicleMagazine_base {
        displayName = "$STR_a3_flares1";
        initSpeed = 30;
    };

    class ls_magazine_speederHE_belt: ls_vehicleMagazine_base {
        scope = 2;
        ammo = "ls_speeder_HE";
        initSpeed = 400;
        maxLeadSpeed = 25;
        nameSound = "";
        count = 50;
        displayName = "50Rnd HE Plasma Cartridge";
        descriptionShort = "HE Plasma Cartridge";
        muzzleImpulseFactor[] = {0.1,0.1};
    };

    FLARECHAFF_MAGS(Flare,red);
    FLARECHAFF_MAGS(FlareChaff,red);
    FLARECHAFF_MAGS(Flare,yellow);
    FLARECHAFF_MAGS(FlareChaff,yellow);
    FLARECHAFF_MAGS(Flare,blue);
    FLARECHAFF_MAGS(FlareChaff,blue);
    FLARECHAFF_MAGS(Flare,green);
    FLARECHAFF_MAGS(FlareChaff,green);
    FLARECHAFF_MAGS(Flare,cyan);
    FLARECHAFF_MAGS(FlareChaff,cyan);
    FLARECHAFF_MAGS(Flare,purple);
    FLARECHAFF_MAGS(FlareChaff,purple);

    #include "magazines\guns.hpp"
    #include "magazines\missiles.hpp"
};
