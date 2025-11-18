class CfgAmmo {
    // Common vehicle ammos
    class ls_bullet_base;
    class ls_plasma_base;
    class ls_grenade_base;
    class B_20mm;
    class MissileBase;
    class ammo_Penetrator_Base;

    class Cannon_30mm_HE_Plane_CAS_02_F;
    class ls_50mm_he_blue: Cannon_30mm_HE_Plane_CAS_02_F {
        hit = 150;
        indirectHit = 10;
        indirectHitRange = 4;
        caliber = 6;
        explosive = 0.65;
        allowAgainstInfantry = 1;

        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectFly = "ls_plasma_blue";
        flareSize = 3;
        tracerScale = 3;
        tracerStartTime = 0.05;
        tracerEndTime = 10;
    };
    class ls_50mm_he_red: ls_50mm_he_blue {
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectFly = "ls_plasma_red";
    };
    class ls_50mm_he_green: ls_50mm_he_blue {
        model = QPATHTOEF(data,effects\ls_laser_green.p3d);
        effectFly = "ls_plasma_green";
    };

    class ls_50mm_apfsds_blue: Cannon_30mm_HE_Plane_CAS_02_F {
        hit = 240;
        indirectHit = 5;
        indirectHitRange = 0.2;
        caliber = 10;
        explosive = 0;
        allowAgainstInfantry = 1;

        model = QPATHTOEF(data,effects\ls_laser_green.p3d);
        effectFly = "ls_plasma_green";
        flareSize = 3;
        tracerScale = 3;
        tracerStartTime = 0.05;
        tracerEndTime = 10;
    };
    class ls_50mm_apfsds_red: ls_50mm_apfsds_blue {
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectFly = "ls_plasma_red";
    };
    class ls_50mm_apfsds_green: ls_50mm_apfsds_blue {
        model = QPATHTOEF(data,effects\ls_laser_green.p3d);
        effectFly = "ls_plasma_green";
    };

    class ls_127x99_blue: ls_bullet_base {
        scope = 2;

        hit = 30;
        indirectHit = 0;
        indirectHitRange = 0;
        dangerRadiusHit = 16;
        dangerRadiusBulletClose = 12;
        suppressionRadiusHit = 12;
        suppressionRadiusBulletClose = 8;
        caliber = 2.6;
        typicalSpeed = 880;
        airFriction = -0.00086;
        airLock = 1;

        audibleFire = 120;
        cost = 5;
        timeToLive = 10;

        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectfly = "ls_plasma_blue";
        cartridge = "";
        visibleFire = 8;
        tracerScale = 1.2;
        tracerStartTime = 0.05;
        tracerEndTime = 10;

        class CamShakeExplode {
            power = 3.60555;
            duration = 0.8;
            frequency = 20;
            distance = 10.8167;
        };
        class CamShakeHit {
            power = 13;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
    };


    class ls_speeder_HE: ls_grenade_base {
        explosionSoundEffect = "DefaultExplosion";
        simulation = "shotShell";
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectfly="ls_plasma_red";
        hit = 20;
        indirectHit = 8;
        indirectHitRange = 3;
        warheadName = "HE";
        visibleFire = 1;
        audibleFire = 30;
        visibleFireTime = 3;
        dangerRadiusHit = 60;
        suppressionRadiusHit = 24;
        explosive = 1;
        cost = 10;
        deflecting = 0;
        airFriction = -0.001;
        fuseDistance = 1;
        whistleDist = 16;
        typicalSpeed = 185;
        caliber = 2;
        // Custom explosion sounds: Future development
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01.wss",3.1622777,1,1500};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02.wss",3.1622777,1,1500};
        soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03.wss",3.1622777,1,1500};
        soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04.wss",3.1622777,1,1500};
        multiSoundHit[] = {
            "soundHit1", 0.25,
            "soundHit2", 0.25,
            "soundHit3", 0.25,
            "soundHit4", 0.25
        };
        class CamShakeExplode {
            power = 8;
            duration = 1.2;
            frequency = 20;
            distance = 74.5964;
        };
        class CamShakeHit {
            power = 20;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 0;
            duration = 0.2;
            frequency = 20;
            distance = 0;
        };
        class CamShakePlayerFire {
            power = 0;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };

    class ls_127x99_red: ls_127x99_blue {
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectfly = "ls_plasma_red";
    };
    class ls_127x99_green: ls_127x99_blue {
        model = QPATHTOEF(data,effects\ls_laser_green.p3d);
        effectfly = "ls_plasma_green";
    };

    class Sh_120mm_HE;
    class ls_120mm_he_blue: Sh_120mm_HE {
        caliber = 6;
        indirectHit = 40;
        indirectHitRange = 3;
        hit = 150;
        explosive = 0.89999998;
        flareSize = 10;
        tracerScale = 2;

        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectFly = "ls_plasma_blue";
    };
    class ls_120mm_he_red: ls_120mm_he_blue {
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectFly = "ls_plasma_red";
    };
    class ls_120mm_he_green: ls_120mm_he_blue {
        model = QPATHTOEF(data,effects\ls_laser_green.p3d);
        effectFly = "ls_plasma_green";
    };

    class Sh_105mm_APFSDS;
    class ls_120mm_apfsds_blue: Sh_105mm_APFSDS {
        caliber = 18;
        hit = 350;
        flareSize = 10;
        tracerScale = 2;

        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectFly = "ls_plasma_blue";
    };
    class ls_120mm_apfsds_red: ls_120mm_apfsds_blue {
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectFly = "ls_plasma_red";
    };
    class ls_120mm_apfsds_green: ls_120mm_apfsds_blue {
        model = QPATHTOEF(data,effects\ls_laser_green.p3d);
        effectFly = "ls_plasma_green";
    };

    class ls_40mm_he_blue: ls_grenade_base {
        scope = 2;

        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectFly = "ls_plasma_blue";

        explosionSoundEffect = "DefaultExplosion";
        simulation = "shotShell";
        hit = 80;
        indirectHit = 8;
        indirectHitRange = 6;
        warheadName = "HE";
        visibleFire = 1;
        audibleFire = 30;
        visibleFireTime = 3;
        dangerRadiusHit = 60;
        suppressionRadiusHit = 24;
        explosive = 1;
        cost = 10;
        deflecting = 5;
        airFriction = -0.001;
        fuseDistance = 1;
        whistleDist = 16;
        typicalSpeed = 185;
        caliber = 2;
        // Custom explosion sounds: Future development
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01.wss",3.1622777,1,1500};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02.wss",3.1622777,1,1500};
        soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03.wss",3.1622777,1,1500};
        soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04.wss",3.1622777,1,1500};
        multiSoundHit[] = {
            "soundHit1", 0.25,
            "soundHit2", 0.25,
            "soundHit3", 0.25,
            "soundHit4", 0.25
        };
        class CamShakeExplode {
            power = 8;
            duration = 1.2;
            frequency = 20;
            distance = 74.5964;
        };
        class CamShakeHit {
            power = 20;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 0;
            duration = 0.2;
            frequency = 20;
            distance = 0;
        };
        class CamShakePlayerFire {
            power = 0;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class ls_40mm_he_red: ls_40mm_he_blue {
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectFly = "ls_plasma_red";
    };
    class ls_40mm_he_green: ls_40mm_he_blue {
        model = QPATHTOEF(data,effects\ls_laser_green.p3d);
        effectFly = "ls_plasma_green";
    };

    class Sh_105mm_APFSDS_T_Green;
    class ls_75mm_HE_red: Sh_105mm_APFSDS_T_Green {
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectFly = "ls_plasma_red";
    };

    class ls_bullet_30mw_blue: ls_plasma_base {
        scope = 2;

        hit = 30;
        caliber = 2.3;
        typicalSpeed = 890;
        initSpeed = 880;
        airFriction = -0.00061;
        cost = 6;
        airLock = 1;

        dangerRadiusBulletClose = 10;
        dangerRadiusHit = 14;
        indirectHit = 0;
        indirectHitRange = 0;
        suppressionRadiusBulletClose = 8;
        suppressionRadiusHit = 10;

        audibleFire = 80;
        timeToLive = 10;
        tracerEndTime = 1;
        tracerScale = 1.2;
        tracerStartTime = 0.075;
        visibleFireTime = 3;

        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectFly = "ls_plasma_blue";

        class CamShakeExplode {
            distance = 9.48683;
            duration = 0.6;
            frequency = 20;
            power = 3.16228;
        };

        class CamShakeHit {
            distance = 9.48683;
            duration = 0.6;
            frequency = 20;
            power = 3.16228;
        };

        class CamShakePlayerFire {
            power = 0.4;
            duration = 0.2;
            frequency = 1;
            distance = 1;
        };
    };
    class ls_bullet_30mw_red: ls_bullet_30mw_blue {
        model = QPATHTOEF(data,effects\ls_laser_red.p3d);
        effectFly = "ls_plasma_red";
    };
    class ls_bullet_30mw_green: ls_bullet_30mw_blue {
        model = QPATHTOEF(data,effects\ls_laser_green.p3d);
        effectFly = "ls_plasma_green";
    };

    class CMflareAmmo;
    class CMflare_Chaff_Ammo;
    class ls_ammo_CMFlare_red: CMflareAmmo {
        effectsSmoke = "ls_counterMeasureFlare_red";
    };
    class ls_ammo_CMFlareChaff_red: CMflare_Chaff_Ammo {
        effectsSmoke = "ls_counterMeasureChaff_red";
    };

    class ls_ammo_CMFlare_yellow: CMflareAmmo {
        effectsSmoke = "ls_counterMeasureFlare_yellow";
    };
    class ls_ammo_CMFlareChaff_yellow: CMflare_Chaff_Ammo {
        effectsSmoke = "ls_counterMeasureChaff_yellow";
    };

    class ls_ammo_CMFlare_blue: CMflareAmmo {
        effectsSmoke = "ls_counterMeasureFlare_blue";
    };
    class ls_ammo_CMFlareChaff_blue: CMflare_Chaff_Ammo {
        effectsSmoke = "ls_counterMeasureChaff_blue";
    };

    class ls_ammo_CMFlare_green: CMflareAmmo {
        effectsSmoke = "ls_counterMeasureFlare_green";
    };
    class ls_ammo_CMFlareChaff_green: CMflare_Chaff_Ammo {
        effectsSmoke = "ls_counterMeasureChaff_green";
    };

    class ls_ammo_CMFlare_cyan: CMflareAmmo {
        effectsSmoke = "ls_counterMeasureFlare_cyan";
    };
    class ls_ammo_CMFlareChaff_cyan: CMflare_Chaff_Ammo {
        effectsSmoke = "ls_counterMeasureChaff_cyan";
    };

    class ls_ammo_CMFlare_purple: CMflareAmmo {
        effectsSmoke = "ls_counterMeasureFlare_purple";
    };
    class ls_ammo_CMFlareChaff_purple: CMflare_Chaff_Ammo {
        effectsSmoke = "ls_counterMeasureChaff_purple";
    };

    #include "ammo\guns.hpp"
    #include "ammo\submunitions.hpp"
    #include "ammo\missiles.hpp"
};
