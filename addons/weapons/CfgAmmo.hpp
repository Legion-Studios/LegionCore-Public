class CfgAmmo {
    class BulletBase;
    class ls_bullet_base: BulletBase {
        scope = 0;
        author = AUTHOR;

        hit = 8;
        caliber = 0.869565;
        indirectHit = 0;
        indirectHitRange = 0;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadiusHit = 8;
        suppressionRadiusBulletClose = 6;
        typicalSpeed = 920;
        timeToLive = 6;
        waterFriction = -0.3;
        airfriction = -0.0012;
        airlock = 1;
        deflecting = 0;
        cost = 1;
        coefGravity = 0.01;

        aiAmmoUsageFlags = AMMO_USAGE_INFANTRY;

        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectFly = "ls_plasma_blue";
        cartridge = "";

        tracerScale = 1.1;
        tracerStartTime = 0.05;
        tracerEndTime = 10;
        audibleFire = 35;
        nvgOnly = 0;
        irTarget = 1;

        explosionEffects = "ExploAmmoExplosion";
        explosionSoundEffect = "DefaultExplosion";
        craterEffects = "ExploAmmoCrater";
        muzzleEffect = "";
        initTime = 0;

        class HitEffects; // Used by PLASMA_EFFECTS macro
    };

    class ls_plasma_base: ls_bullet_base {
        coefGravity = 0.01;
        cartridge = "";

        PLASMA_SOUNDS;
        PLASMA_EFFECTS;
    };

    class ShotgunCore;
    class ShotgunBase: ShotgunCore {
        class HitEffects;
    };
    class ls_shotgun_base: ShotgunBase {
        effectfly = "ls_plasma_blue";
        simulation = "shotSpread";
        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        lightcolor[] = {0.25, 0.25, 0.5};
        flareSize = 5;
        tracerScale = 1.1;
        effectFlare = "FlareShell";
        tracerStartTime = 0;
        tracerEndTime = 10;

        PLASMA_EFFECTS;
    };

    class ls_bullet_22mw_blue: ls_plasma_base {
        scope = 2;

        hit = 24;
        caliber = 2.4;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 910;
        timeToLive = 10;
        airFriction = -0.00048;
        airLock = 1;
        cost = 7;
        audibleFire = 120;

        tracerScale = 1.2;
        tracerStartTime = 0.075;
        tracerEndTime = 1;
        visibleFire = 5;
        visibleFireTime = 3;

        class CamShakeExplode {
            distance = 9.48683;
            duration = 0.6;
            frequency = 20;
            power = 3.16228;
        };

        class CamShakeHit {
            distance = 1;
            duration = 0.4;
            frequency = 20;
            power = 10;
        };
    };
    BULLET_COLORS(ls_bullet_22mw);

    class ls_bullet_192mw_blue: ls_plasma_base {
        scope = 2;

        hit = 12;
        caliber = 1.6;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadiusBulletClose = 8;
        typicalSpeed = 800;
        timeToLive = 6;
        waterFriction = -0.3;
        audiblefire = 45;

        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = {
            -26.55, -25.47,
            -22.85, -20.12,
            -16.98, -12.8,
            -7.64, -1.53,
            5.96, 15.17,
            26.19
        };
        ACE_ballisticCoefficients[] = {0.2};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
        ACE_barrelLengths[] = {254, 406.4, 508, 609.6, 660.4};
    };
    BULLET_COLORS(ls_bullet_192mw);

    class ls_bullet_12mw_blue: ls_plasma_base {
        scope = 2;

        hit = 8;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        suppressionRadiusBulletClose = 8;
        dangerRadusHit = 12;
        audiblefire = 35;
        airfriction = 0;
        waterFriction = -0.3;
        caliber = 0.869565;
        timetolive = 6;
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = {
            -27.2, -26.44,
            -23.76, -21,
            -17.54, -13.1,
            -7.95, -1.62,
            6.24, 15.48,
            27.75
        };
        ACE_ballisticCoefficients[] = {0.151};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {
            723, 764,
            796, 825,
            843, 866,
            878, 892,
            906, 915,
            922, 900
        };
        ACE_barrelLengths[] = {
            210.82, 238.76,
            269.24, 299.72,
            330.2, 360.68,
            391.16, 419.1,
            449.58, 480.06,
            508, 609.6
        };
    };
    BULLET_COLORS(ls_bullet_12mw);

    class ls_bullet_65x39mw_blue: ls_plasma_base {
        hit = 9.75;
        caliber = 1.262;
        initSpeed = 793;
        typicalSpeed = 50;
        coefGravity = 0;
        warheadName = "";
        deflecting = 0;
        tracerScale = 1;
        tracerStartTime = 0.05;
        brightness = 1000;
        airFriction = 0;
        cost = 1;
        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectFly = "ls_plasma_blue";
        allowAgainstInfantry = 1;
        aiAmmoUsageFlags = 64 + 128 + 256;
        muzzleEffect = "";
        timeToLive = 40;
        waterFriction = 0.01;
    };
    BULLET_COLORS(ls_bullet_65x39mw);

    class ls_bullet_shotgun_blue: ls_shotgun_base {
        hit = 2;
        typicalSpeed = 400;
        airFriction = -0.008;
        caliber = 1;
        deflecting = 30;
        indirectHit = 2;
        indirectHitRange = 0.4;
        model = QPATHTOEF(data,effects\ls_laser_blue.p3d);
        effectFly = "ls_plasma_blue";
        ExplosionEffects = "ls_plasma_impact";
        cratereffects = "ls_plasma_impact";
        explosive = 0.1;
        class CamShakePlayerFire {
            power = 1;
            duration = 0.1;
            frequency = 20;
        };
        class CamShakeHit {
            power = 10;
            duration = 1;
            frequency = 20;
        };
        class CamShakeFire {
            power = 3;
            duration = 0.5;
            frequency = 20;
            distance = 10;
        };
    };
    BULLET_COLORS(ls_bullet_shotgun);

    class ls_bullet_63mw_blue: ls_plasma_base {
        hit = 10;
        caliber = 1.4;
        typicalspeed = 300;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
        audibleFire = 45;
        airFriction = 0;
        timetolive = 6;

        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = {
            -2.655, -2.547,
            -2.285, -2.012,
            -1.698, -1.28,
            -0.764, -0.153,
            0.596, 1.517,
            2.619
        };
        ACE_ballisticCoefficients[] = {0.195};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {230, 250, 285};
        ACE_barrelLengths[] = {101.6, 127, 228.6};
    };
    BULLET_COLORS(ls_bullet_63mw);

    class ls_bullet_9mw_blue: ls_plasma_base {
        hit = 5;
        typicalSpeed = 380;
        explosive = 0.1;
        dangerRadiusHit = 8;
        dangerRadiusBulletClose = 4;
        suppressionRadiusHit = 4;
        suppressionRadiusBulletClose = 2;
        airFriction = -0.00211064;
        tracerScale = 0.5;

        explosionEffects = "";
        craterEffects = "ls_plasma_impact";

        ACE_caliber = 9.042;
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 7.452;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.17};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {380, 390, 420, 435};
        ACE_barrelLengths[] = {93.5, 101.6, 127, 228.6};
    };
    BULLET_COLORS(ls_bullet_9mw);

    class ls_bullet_556mw_blue: ls_plasma_base {
        hit = 8;
        typicalspeed = 920;
        dangerRadiusBulletClose = 8;
        dangerRadiusHit = 12;
        suppressionRadiusBulletClose = 8;
        dangerRadusHit = 12;
        suppressionRadusBulletClose = 6;
        suppressionRadusHit = 8;
        audiblefire = 35;
        waterFriction = -0.3;
        caliber = 0.869565;
        timetolive = 6;
        explosive = 0.1;
        airFriction = -0.00130094;
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.011999;
        ACE_bulletMass = 4.0176001;
        ACE_ammoTempMuzzleVelocityShifts[] = {
            -27.2, -26.44,
            -23.76, -21,
            -17.54, -13.1,
            -7.95, -1.62,
            6.24, 15.48,
            27.75
        };
        ACE_ballisticCoefficients[] = {0.15};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[]={210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508,609.6};
    };
    BULLET_COLORS(ls_bullet_556mw);

    class ls_bullet_45mw_blue: ls_plasma_base {
        hit = 6;
        audibleFire = 50;
        dangerRadiusBulletClose = 4;
        dangerRadiusHit = 8;
        suppressionRadiusBulletClose = 2;
        suppressionRadiusHit = 4;
        caliber = 1.4;
        typicalSpeed = 280;
        tracerStartTime = 0.075;
        tracerEndTime = 1;
        airFriction = -0.00082143;
        tracerScale = 0.6;
        explosive = 0.1;
        ACE_caliber = 11.481;
        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[] = {0.195};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {230, 250, 285};
        ACE_barrelLengths[] = {101.6, 127, 228.6};
    };
    BULLET_COLORS(ls_bullet_45mw);

    class ammo_Penetrator_Base;
    #include "cfg\ammo\penetrators.hpp"

    class GrenadeBase;
    class ls_grenade_base: GrenadeBase {
        scope = 0;
        tracerScale = 1.6;
        tracerStartTime = 0.1;
        tracerEndTime = 20;
        brightness = 100000;
        author = AUTHOR;
    };

    class B_12Gauge_Slug;
    class B_12Gauge_Pellets_Submunition;
    class B_12Gauge_Pellets_Submunition_Deploy;

    class ls_12Gauge_Pellets_Submunition_Deploy: B_12Gauge_Pellets_Submunition_Deploy {
        displayName = "12 Gauge ScatterShot Submunition";
        hit = 3;
        caliber = 0.7936507937;
        indirectHit = 0;
        indirectHitRange = 0;
        cost = 5;
        airFriction = 0.0;
        initSpeed = 420;
        typicalSpeed = 250;
        timetoLive = 8;
    };

    class ls_12Gauge_Pellets_Submunition: B_12Gauge_Pellets_Submunition {
        hit = 20;
        caliber = 0.7936507937;
        indirectHit = 0;
        indirectHitRange = 0;
        airFriction = 0.0;
        submunitionInitSpeed=610;
        typicalSpeed = 360;
        submunitionAmmo = "ls_12Gauge_Pellets_Submunition_Deploy";
        submunitionConeAngle = 0.8;
        submunitionConeType[] = {"poissondisc", 24};
        triggerSpeedCoef[] = {0.85, 1};
        triggerTime = 0.008;
        timeToLive = 8;
    };

    class ls_12Gauge_Slug_ammo: B_12Gauge_Slug {
        hit = 42;
        caliber = 1.037;
        initSpeed = 510;
        typicalSpeed = 250;
        indirectHit = 0;
        indirectHitRange = 0;
        cost = 5;
    };

    class ls_bullet_stun: ls_bullet_base {
        scope = 2;
        GVAR(ammoType) = AMMOTYPE_STUN;
        GVAR(stunDuration) = 10;

        hit = 1;
        caliber = 0.869565;
        explosive = 0.1;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadusHit = 8;
        suppressionRadiusBulletClose = 8;
        typicalSpeed = 30;
        timeToLive = 6;
        airFriction = -0.00130094;
        coefgravity = 0.01;

        model = QPATHTOEF(data,effects\ls_stun_blue.p3d);
        effectfly = "ls_plasma_blue";

        audiblefire = 35;
        waterFriction = -0.30000001;
        explosionEffects = "";
        craterEffects = "ls_plasma_impact";

        ACE_caliber = 1;
        ACE_damageType = "ropeburn";
        ACE_bulletLength = 23.011999;
        ACE_bulletMass = 0.005;
        ACE_ammoTempMuzzleVelocityShifts[] = {
            -27.200001, -26.440001,
            -23.76, -21,
            -17.540001, -13.1,
            -7.9499998, -1.62,
            6.2399998, 15.48,
            27.75
        };
        ACE_ballisticCoefficients[] = {0.15099999};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {
            723, 764,
            796, 825,
            843, 866,
            878, 892,
            906, 915,
            922, 900
        };
        ACE_barrelLengths[] = {
            210.82001, 238.75999,
            269.23999, 299.72,
            330.20001, 360.67999,
            391.16, 419.10001,
            449.57999, 480.06,
            508, 609.59998
        };
    };

    class ls_bullet_ion: ls_bullet_base {
        scope = 2;
        GVAR(ammoType) = AMMOTYPE_ION;
        GVAR(stunDuration) = 10;
        GVAR(ionEngineDamage) = 0.05; // % of engine damage
        GVAR(ionFuelBurn) = 0.05; // % of fuel to drain

        hit = 1;
        caliber = 0.869565;
        explosive = 0.1;
        dangerRadiusHit = 12;
        dangerRadiusBulletClose = 8;
        suppressionRadusHit = 8;
        suppressionRadiusBulletClose = 8;
        typicalSpeed = 70;
        timeTolive = 6;
        airFriction = -0.00130094;
        coefgravity = 0.01;

        model = QPATHTOEF(data,effects\ls_laser_grey.p3d);
        effectfly = "ls_plasma_blue";

        audiblefire = 35;
        waterFriction = -0.30000001;
        explosionEffects = "";
        craterEffects = "ls_plasma_impact";

        ACE_caliber = 1;
        ACE_damageType = "ropeburn";
        ACE_bulletLength = 23.011999;
        ACE_bulletMass = 0.005;
        ACE_ammoTempMuzzleVelocityShifts[] = {
            -27.200001, -26.440001,
            -23.76, -21,
            -17.540001, -13.1,
            -7.9499998, -1.62,
            6.2399998, 15.48,
            27.75
        };
        ACE_ballisticCoefficients[] = {0.15099999};
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {
            723, 764,
            796, 825,
            843, 866,
            878, 892,
            906, 915,
            922, 900
        };
        ACE_barrelLengths[] = {
            210.82001, 238.75999,
            269.23999, 299.72,
            330.20001, 360.67999,
            391.16, 419.10001,
            449.57999, 480.06,
            508, 609.59998
        };
    };

    class G_40mm_HE;
    #include "cfg\ammo\40mm.hpp"

    class M_Titan_AT;
    class M_Titan_AP;
    class M_Titan_AA;
    #include "cfg\ammo\missiles.hpp"
};
