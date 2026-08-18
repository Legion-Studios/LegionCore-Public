class CfgMovesAtrt_ls {
    collisionGeomCompPattern[] = {1, 3};
    collisionVertexPattern[] = {
        "1a",
        "2a",
        "3a",
        "4a",
        "5a",
        "6a",
        "7a",
        "8a",
        "9a",
        "10a",
        "11a",
        "12a",
        "13a",
        "14a",
        "15a",
        "16a",
        "17a",
        "18a",
        "19a",
        "20a",
        "21a",
        "22a",
        "23a",
        "24a",
        "25a",
        "26a",
        "27a",
        "28a",
        "29a",
        "30a",
        "31a",
        "32a",
        "33a",
        "34a",
        "1c",
        "2c",
        "3c",
        "4c",
        "5c",
        "6c",
        "7c",
        "8c"
    };
    extended = "";
    gestures = "CfgGesturesAtrt_ls";
    primaryActionMaps[] = {"ls_vehicle_atrt_moveset"};
    skeletonName = "ls_atrt_skeleton";
    transitionsDisabled[] = {};
    transitionsInterpolated[] = {};
    transitionsSimple[] = {};

    class Default {
            access = 1;
            actions = "NoActions";
            adjstance = "m";
            aiming = "empty";
            aimingBody = "empty";
            aimPrecision = 0;
            boundingSphere = 2;
            camShakeFire = 1;
            canBlendStep = 1;
            canPullTrigger = 0;
            canReload = 1;
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
            collisionShapeSafe = "";
            connectAs = "";
            connectFrom[] = {};
            disableWeapons = 1;
            disableWeaponsLong = 1;
            duty = -1;
            enableAutoActions = 0;
            enableBinocular = 1;
            enableDirectControl = 1;
            enableMissile = 0;
            enableOptics = 1;
            equivalentTo = "";
            file = "";
            forceAim = 0;
            hasCollShapeSafe = 0;
            head = "empty";
            headBobMode = 1;
            headBobStrength = 0.1;
            idle = "";
            ignoreMinPlayTime[] = {};
            interpolateFrom[] = {};
            interpolateWith[] = {};
            interpolationRestart = 0;
            interpolationSpeed = 4;
            leaning = "empty";
            leaningFactorBeg = 1;
            leaningFactorEnd = 1;
            leaningFactorZeroPoint = -1;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {0};
            leftHandIKEnd = 0;
            legs = "empty";
            limitGunMovement = 1;
            looped = 1;
            mask = "weaponSwitching";
            minPlayTime = 0;
            onLadder = 0;
            onLandBeg = 0;
            onLandEnd = 0;
            preload = 1;
            ragdoll = 0;
            relSpeedMax = 1;
            relSpeedMin = 1;
            rightHandIKBeg = 0;
            rightHandIKCurve[] = {0};
            rightHandIKEnd = 0;
            showHandGun = 1;
            showItemInHand = 1;
            showItemInRightHand = 0;
            showWeaponAim = 0;
            soundEdge[] = {};
            soundEnabled = 1;
            soundOverride = "";
            speed = 1;
            stamina = 0;
            static = 1;
            terminal = 0;
            turnSpeed = 3;
            useIdles = 1;
            variantAfter[] = {1, 1, 1};
            variantsAI[] = {};
            variantsPlayer[] = {};
            visibleSize = 1;
            Walkcycles = 1;
            weaponIK = 0;
            weaponLowered = 1;
            weaponObstructed = 0;
            connectTo[] = {};
            interpolateTo[] = {};
    };

    class ManActions {
        access = 3;
        AdjustB = "";
        AdjustF = "";
        AdjustL = "";
        AdjustLB = "";
        AdjustLF = "";
        AdjustR = "";
        AdjustRB = "";
        AdjustRF = "";
        agonyStart = "";
        agonyStop = "";
        binocOff = "";
        binocOn = "";
        Binoculars = "";
        BottomDive = "";
        bottomSwim = "";
        CanNotMove = "";
        carriedStill = "";
        Civil = "";
        CivilLying = "";
        Combat = "";
        Crouch = "";
        CutsceneCivilStand = "";
        CutscenePistolLowStand = "";
        CutscenePistolRaisedStand = "";
        CutsceneRifleLowStand = "";
        default = "";
        Diary = "";
        Die = "";
        DismountOptic = "";
        DismountSide = "";
        dooraction = "";
        down = "";
        EvasiveLeft = "";
        EvasiveRight = "";
        FastB = "";
        FastF = "";
        FastL = "";
        FastLB = "";
        FastLF = "";
        FastR = "";
        FastRB = "";
        FastRF = "";
        FDStart = "";
        FireNotPossible = "";
        Gear = "";
        gestureAdvance[] = {"", "Gesture"};
        GestureAgonyCargo[] = {"", "Gesture"};
        gestureAttack[] = {"", "Gesture"};
        gestureCeaseFire[] = {"", "Gesture"};
        GestureChangeAntenna[] = {"", "Gesture"};
        gestureCover[] = {"", "Gesture"};
        GestureDismountMuzzle[] = {"", "Gesture"};
        GestureEmpty[] = {"", "Gesture"};
        gestureFollow[] = {"", "Gesture"};
        gestureFreeze[] = {"", "Gesture"};
        gestureGo[] = {"", "Gesture"};
        gestureGoB[] = {"", "Gesture"};
        gestureHi[] = {"", "Gesture"};
        gestureHiB[] = {"", "Gesture"};
        gestureHiC[] = {"", "Gesture"};
        GestureLegPush[] = {"", "Gesture"};
        GestureMountMuzzle[] = {"", "Gesture"};
        gestureNo[] = {"", "Gesture"};
        GestureNod[] = {"", "Gesture"};
        gesturePoint[] = {"", "Gesture"};
        GestureSpasm0[] = {"", "Gesture"};
        GestureSpasm0weak[] = {"", "Gesture"};
        GestureSpasm1[] = {"", "Gesture"};
        GestureSpasm1weak[] = {"", "Gesture"};
        GestureSpasm2[] = {"", "Gesture"};
        GestureSpasm2weak[] = {"", "Gesture"};
        GestureSpasm3[] = {"", "Gesture"};
        GestureSpasm3weak[] = {"", "Gesture"};
        GestureSpasm4[] = {"", "Gesture"};
        GestureSpasm4weak[] = {"", "Gesture"};
        GestureSpasm5[] = {"", "Gesture"};
        GestureSpasm5weak[] = {"", "Gesture"};
        GestureSpasm6[] = {"", "Gesture"};
        GestureSpasm6weak[] = {"", "Gesture"};
        gestureUp[] = {"", "Gesture"};
        gestureYes[] = {"", "Gesture"};
        getOver = "";
        grabCarried = "";
        grabCarry = "";
        grabDrag = "";
        grabDragged = "";
        handGunOn = "";
        HandSignalFreeze[] = {"", "Gesture"};
        HandSignalGetDown[] = {"", "Gesture"};
        HandSignalGetUp[] = {"", "Gesture"};
        HandSignalHold[] = {"", "Gesture"};
        HandSignalMoveForward[] = {"", "Gesture"};
        HandSignalMoveOut[] = {"", "Gesture"};
        HandSignalPoint[] = {"", "Gesture"};
        HandSignalRadio[] = {"", "Gesture"};
        healedStart = "";
        healedStop = "";
        JumpOff = "";
        LadderOff = "";
        LadderOffBottom = "";
        LadderOffTop = "";
        ladderOnDown = "";
        ladderOnUp = "";
        leanLRot = 0.5;
        leanLShift = 0;
        leanRRot = 0.5;
        leanRShift = 0;
        limitFast = 5.5;
        LimpB = "";
        LimpF = "";
        LimpL = "";
        LimpLB = "";
        LimpLF = "";
        LimpR = "";
        LimpRB = "";
        LimpRF = "";
        Lying = "";
        medic = "";
        medicOther = "";
        medicStart = "";
        medicStartRightSide = "";
        medicStartUp = "";
        medicStop = "";
        medicUp = "";
        MountOptic = "";
        MountSide = "";
        Obstructed = "";
        Panic = "";
        PlayerCrouch = "";
        PlayerProne = "";
        PlayerSlowB = "";
        PlayerSlowF = "";
        PlayerSlowL = "";
        PlayerSlowLB = "";
        PlayerSlowLF = "";
        PlayerSlowR = "";
        PlayerSlowRB = "";
        PlayerSlowRF = "";
        PlayerStand = "";
        PlayerTactB = "";
        PlayerTactF = "";
        PlayerTactL = "";
        PlayerTactLB = "";
        PlayerTactLF = "";
        PlayerTactR = "";
        PlayerTactRB = "";
        PlayerTactRF = "";
        PlayerWalkB = "";
        PlayerWalkF = "";
        PlayerWalkL = "";
        PlayerWalkLB = "";
        PlayerWalkLF = "";
        PlayerWalkR = "";
        PlayerWalkRB = "";
        PlayerWalkRF = "";
        PrimaryWeapon = "";
        putDown = "";
        PutDownEnd = "";
        Relax = "";
        released = "";
        releasedBad = "";
        reloadMagazine[] = {"", "Gesture"};
        salute = "";
        saluteOff = "";
        SecondaryWeapon = "";
        sitDown = "";
        SlowB = "";
        SlowF = "";
        SlowL = "";
        SlowLB = "";
        SlowLF = "";
        SlowR = "";
        SlowRB = "";
        SlowRF = "";
        stance = "ManStanceUndefined";
        Stand = "";
        startDive = "";
        StartFreefall = "";
        startSwim = "";
        stop = "";
        StopDive = "";
        StopRelaxed = "";
        StopSwim = "";
        StrokeFist = "";
        strokeGun = "";
        SurfaceDive = "";
        surfaceSwim = "";
        Surrender = "";
        swimDown = "";
        swimUp = "";
        TactB = "";
        TactF = "";
        TactL = "";
        TactLB = "";
        TactLF = "";
        TactR = "";
        TactRB = "";
        TactRF = "";
        takeFlag = "";
        throwGrenade[] = {"", "Gesture"};
        throwPrepare = "";
        treated = "";
        turnL = "";
        turnLRelaxed = "";
        turnR = "";
        turnRRelaxed = "";
        turnSpeed = 8;
        Unconscious = "";
        up = "";
        upDegree = 0;
        useFastMove = 0;
        WalkB = "";
        WalkF = "";
        WalkL = "";
        WalkLB = "";
        WalkLF = "";
        WalkR = "";
        WalkRB = "";
        WalkRF = "";
        weaponOff = "";
        WeaponOn = "";
    };

    class Actions {
        class NoActions: ManActions {};
        class ls_vehicle_atrt_moveset: NoActions {
            Disable_Gesture[] = {"Disable_Gesture", "Gesture"};
            stance = "ManStanceStand";
            upDegree = "ManPosCombat";
            useFastMove = 1;
            limitFast = 5.5;
            turnSpeed = 2;


            stop = "atrt_standIdle";
            default = "atrt_standIdle";
            stopRelaxed = "atrt_standIdle";
            combat = "atrt_standIdle";
            up = "atrt_standIdle";
            down = "atrt_standIdle";
            gear = "atrt_standIdle";
            stand = "atrt_standIdle";

            getOver = "atrt_vault";

            LimpF = "atrt_walkF";
            LimpLF = "atrt_walkLF";
            LimpRF = "atrt_walkRF";
            LimpL = "atrt_walkL";
            LimpR = "atrt_walkR";
            LimpB = "atrt_walkB";
            LimpLB = "atrt_walkB";
            LimpRB = "atrt_walkB";

            TurnL = "atrt_turnL";
            TurnR = "atrt_turnR";
            TurnLRelaxed = "atrt_turnL";
            TurnRRelaxed = "atrt_turnR";

            walkF = "atrt_walkF";
            PlayerwalkF = "atrt_walkF";
            walkLF = "atrt_walkLF";
            PlayerwalkLF = "atrt_walkLF";
            walkRF = "atrt_walkRF";
            PlayerwalkRF = "atrt_walkRF";
            walkL = "atrt_walkL";
            PlayerwalkL = "atrt_walkL";
            walkR = "atrt_walkR";
            PlayerwalkR = "atrt_walkR";
            walkB = "atrt_walkB";
            PlayerwalkB = "atrt_walkB";
            walkLB = "atrt_walkB";
            PlayerwalkLB = "atrt_walkB";
            walkRB = "atrt_walkB";
            PlayerwalkRB = "atrt_walkB";

            SlowF = "atrt_walkF";
            PlayerSlowF = "atrt_walkF";
            SlowB = "atrt_walkB";
            PlayerSlowB = "atrt_walkB";
            PlayerSlowLF = "atrt_walkLF";
            PlayerSlowRF = "atrt_walkRF";
            PlayerSlowL = "atrt_walkL";
            PlayerSlowR = "atrt_walkR";
            PlayerSlowLB = "atrt_walkB";
            PlayerSlowRB = "atrt_walkB";

            FastF = "atrt_runF";
            FastLF = "";
            FastRF = "";
            FastL = "";
            FastR = "";
            FastLB = "";
            FastRB = "";

            TactF = "atrt_walkF";
            TactLF = "atrt_walkLF";
            TactRF = "atrt_walkRF";
            TactL = "atrt_walkL";
            TactR = "atrt_walkR";
            TactLB = "atrt_walkB";
            TactRB = "atrt_walkB";
            TactB = "atrt_walkB";

            PlayerTactF = "atrt_walkF";
            PlayerTactLF = "atrt_walkLF";
            PlayerTactRF = "atrt_walkRF";
            PlayerTactL = "atrt_walkL";
            PlayerTactR = "atrt_walkR";
            PlayerTactLB = "atrt_walkB";
            PlayerTactRB = "atrt_walkB";
            PlayerTactB = "atrt_walkB";

            Die = "atrt_deathStanding";
            StartFreefall = "atrt_standIdle";
            Unconscious = "atrt_deathStanding";
            idle = "ls_atrt_idle";
        };

        class ls_vehicle_atrt_moveset_sit: ls_vehicle_atrt_moveset {
            turnSpeed = 0;
            stance = "ManStanceSit";
            stop = "atrt_sitIdle";
            default = "atrt_sitIdle";
            stopRelaxed = "atrt_sitIdle";
            combat = "atrt_sitIdle";
            up = "atrt_sitIdle";
            down = "atrt_sitIdle";
            gear = "atrt_sitIdle";
            stand = "atrt_sitIdle";

            getOver = "";

            Die = "atrt_deathSitting";
            StartFreefall = "atrt_sitIdle";
            Unconscious = "atrt_deathSitting";
            idle = "atrt_sitIdle";
        };

        class DeadActionsStand: NoActions {
            upDegree = "ManPosDead";
            stance = "ManStanceProne";
            Die = "atrt_DeathStanding";
        };

        class DeadActionsSit: NoActions {
            upDegree = "ManPosDead";
            stance = "ManStanceProne";
            Die = "atrt_DeathSitting";
        };

        MOVESETS(ls_vehicle_atrt_moveset);
        MOVESETS(ls_vehicle_atrt_moveset_sit);
    };

    class BlendAnims {
        empty[] = {};
        ls_atrt_idle[] = {
            "body", 1,
            "leg_L", 1,
            "leg_L2", 1,
            "leg_L3", 1,
            "leg_L4", 1,
            "leg_L5", 1,
            "leg_L6", 1,
            "leg_L7", 1,
            "leg_L8", 1,
            "pivot_Lbot", 1,
            "leg_R", 1,
            "leg_R2", 1,
            "leg_R3", 1,
            "leg_R4", 1,
            "leg_R5", 1,
            "leg_R6", 1,
            "leg_R7", 1,
            "leg_R8", 1,
            "pivot_Rbot", 1,
            "turret", 1,
            "turret.001", 1,
            "pivot_Ltop", 1,
            "pivot_Rtop", 1,
            "attena_big1", 1,
            "attena_big2", 1,
            "attena_big3", 1,
            "attena_big4", 1,
            "attena_big_leaf", 1,
            "attena_small1", 1,
            "attena_small2", 1,
            "attena_small3", 1,
            "attena_small_leaf", 1
        };
        ls_atrt_wholeBody[] = {
            "body", 1,
            "leg_L", 1,
            "leg_L2", 1,
            "leg_L3", 1,
            "leg_L4", 1,
            "leg_L5", 1,
            "leg_L6", 1,
            "leg_L7", 1,
            "leg_L8", 1,
            "pivot_Lbot", 1,
            "leg_R", 1,
            "leg_R2", 1,
            "leg_R3", 1,
            "leg_R4", 1,
            "leg_R5", 1,
            "leg_R6", 1,
            "leg_R7", 1,
            "leg_R8", 1,
            "pivot_Rbot", 1,
            "turret", 1,
            "turret.001", 1,
            "pivot_Ltop", 1,
            "pivot_Rtop", 1,
            "attena_big1", 1,
            "attena_big2", 1,
            "attena_big3", 1,
            "attena_big4", 1,
            "attena_big_leaf", 1,
            "attena_small1", 1,
            "attena_small2", 1,
            "attena_small3", 1,
            "attena_small_leaf", 1
        };
        ls_atrt_aimingDefault[] = {
            "turret", 1,
            "turret.001", 1,
        };
        ls_atrt_legsDefault[] = {
            "leg_L", 0,
            "leg_L2", .20,
            "leg_L3", .65,
            "leg_L4", .85,
            "leg_L5", 1,
            "leg_L6", 1,
            "leg_L7", 1,
            "leg_L8", 1,
            "pivot_Lbot", 0,
            "leg_R",  0,
            "leg_R2", .20,
            "leg_R3", .65,
            "leg_R4", .85,
            "leg_R5", 1,
            "leg_R6", 1,
            "leg_R7", 1,
            "leg_R8", 1,
            "pivot_Rbot", 0
        };
        ls_atrt_headDefault[] = {
            "turret", 1,
            "turret.001", 1,
        };
    };

    class Interpolations {};
    class States {
        class Default {
            access = 1;
            actions = "NoActions";
            adjstance = "m";
            aiming = "empty";
            aimingBody = "empty";
            aimPrecision = 0;
            boundingSphere = 2;
            camShakeFire = 1;
            canBlendStep = 1;
            canPullTrigger = 0;
            canReload = 1;
            collisionShape = QPATHTOF2(data\vehicle\atrt\atrt_standing_geo.p3d);
            collisionShapeSafe = "";
            connectAs = "";
            connectFrom[] = {};
            disableWeapons = 1;
            disableWeaponsLong = 1;
            duty = -1;
            enableAutoActions = 0;
            enableBinocular = 1;
            enableDirectControl = 1;
            enableMissile = 0;
            enableOptics = 1;
            equivalentTo = "";
            file = "";
            forceAim = 0;
            hasCollShapeSafe = 0;
            head = "empty";
            headBobMode = 1;
            headBobStrength = 0.1;
            idle = "";
            ignoreMinPlayTime[] = {};
            interpolateFrom[] = {};
            interpolateWith[] = {};
            interpolationRestart = 0;
            interpolationSpeed = 4;
            leaning = "empty";
            leaningFactorBeg = 1;
            leaningFactorEnd = 1;
            leaningFactorZeroPoint = -1;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {0};
            leftHandIKEnd = 0;
            legs = "empty";
            limitGunMovement = 1;
            looped = 1;
            mask = "";
            minPlayTime = 0;
            onLadder = 0;
            onLandBeg = 0;
            onLandEnd = 0;
            preload = 1;
            ragdoll = 0;
            relSpeedMax = 1;
            relSpeedMin = 1;
            rightHandIKBeg = 0;
            rightHandIKCurve[] = {0};
            rightHandIKEnd = 0;
            showHandGun = 1;
            showItemInHand = 1;
            showItemInRightHand = 0;
            showWeaponAim = 0;
            soundEdge[] = {};
            soundEnabled = 1;
            soundOverride = "";
            speed = 1;
            stamina = 0;
            static = 1;
            terminal = 0;
            turnSpeed = 3;
            useIdles = 1;
            variantAfter[] = {1, 1, 1};
            variantsAI[] = {};
            variantsPlayer[] = {};
            visibleSize = 1;
            Walkcycles = 1;
            weaponIK = 0;
            weaponLowered = 1;
            weaponObstructed = 0;
            connectTo[] = {};
            interpolateTo[] = {};
        };

        class atrt_standIdle: Default {
            access = 3;
            relSpeedMin = 1;
            relSpeedMax = 1;
            minPlayTime = 0;
            ignoreMinPlayTime[]  = {"atrt_death"};
            boundingSphere = 4;

            interpolationSpeed = 2;
            interpolationRestart = 1;
            file = QPATHTOF(data\vehicle\atrt\atrt_standIdle.rtm);
            collisionShape = QPATHTOF2(data\vehicle\atrt\atrt_standing_geo.p3d);
            duty = 0;
            actions = "ls_vehicle_atrt_moveset";
            speed = -1;
            canPullTrigger = 1;
            canReload = 1;
            limitGunMovement = 1;
            headBobStrength = 0;
            headBobMode = 0;
            disableWeapons = 0;
            disableWeaponsLong = 0;
            enableMissile = 1;
            enableOptics = 1;
            showWeaponAim = 1;

            idle = "ls_atrt_idle";
            leaning = "empty";
            aiming = "ls_atrt_aimingDefault";
            aimingBody = "ls_atrt_aimingDefault";
            head = "ls_atrt_headDefault";
            legs = "ls_atrt_legsDefault";
            static= 1;

            interpolateTo[] = {
                "atrt_walkF", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkB", 0.01,
                "atrt_walkL", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnL", 0.01,
                "atrt_turnR", 0.01,
                "atrt_deathStanding", 0.01,
                // "atrt_deathSitting", 0.01,
                "atrt_vault", 0.01
            };
            preload = 1;
        };

        class atrt_walkF: atrt_standIdle {
            file = QPATHTOF(data\vehicle\atrt\atrt_walkF.rtm);
            speed = -0.8;
            looped = 1;

            soundEnabled = 1;
            soundEdge[] = {0.1};

            interpolationRestart = 0; // Use 1 for transition animations, 0 for looped, 2 for quick transitions (maybe 15 frames)
            interpolateTo[] = {
                "atrt_standIdle", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkB", 0.01,
                "atrt_walkL", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnL", 0.01,
                "atrt_turnR", 0.01,
            };
        };

        class atrt_walkRF: atrt_walkF {
            file = QPATHTOF(data\vehicle\atrt\atrt_walkRF.rtm);
            interpolateTo[] = {
                "atrt_standIdle", 0.01,
                "atrt_walkF", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkB", 0.01,
                "atrt_walkL", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnL", 0.01,
                "atrt_turnR", 0.01,
            };
        };

        class atrt_walkLF: atrt_walkF {
            file = QPATHTOF(data\vehicle\atrt\atrt_walkLF.rtm);
            interpolateTo[] = {
                "atrt_standIdle", 0.01,
                "atrt_walkF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkB", 0.01,
                "atrt_walkL", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnL", 0.01,
                "atrt_turnR", 0.01,
            };
        };

        class atrt_runF: atrt_walkF {
            file = QPATHTOF(data\vehicle\atrt\atrt_runF.rtm);
            speed = -.65;
            interpolateTo[] = {
                "atrt_standIdle", 0.01,
                "atrt_walkF", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_walkB", 0.01,
                "atrt_walkL", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnL", 0.01,
                "atrt_turnR", 0.01,
            };
        };

        class atrt_walkB: atrt_walkF {
            file = QPATHTOF(data\vehicle\atrt\atrt_walkB.rtm);
            interpolateTo[] = {
                "atrt_standIdle", 0.01,
                "atrt_walkF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkL", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnL", 0.01,
                "atrt_turnR", 0.01,
            };
        };

        class atrt_walkL: atrt_walkF {
            file = QPATHTOF(data\vehicle\atrt\atrt_walkL.rtm);
            interpolateTo[] = {
                "atrt_standIdle", 0.01,
                "atrt_walkF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnL", 0.01,
                "atrt_turnR", 0.01,
            };
        };

        class atrt_walkR: atrt_walkF {
            file = QPATHTOF(data\vehicle\atrt\atrt_walkR.rtm);
            interpolateTo[] = {
                "atrt_standIdle", 0.01,
                "atrt_walkF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkL", 0.01,
                "atrt_turnL", 0.01,
                "atrt_turnR", 0.01,
            };
        };
        class atrt_turnL: atrt_walkF {
            file = QPATHTOF(data\vehicle\atrt\atrt_turnL.rtm);
            interpolateTo[] = {
                "atrt_walkF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkL", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnR", 0.01,
                "atrt_standIdle", 0.01,
            };
        };

        class atrt_turnR: atrt_walkF {
            file = QPATHTOF(data\vehicle\atrt\atrt_turnR.rtm);
            interpolateTo[] = {
                "atrt_walkF", 0.01,
                "atrt_walkRF", 0.01,
                "atrt_walkLF", 0.01,
                "atrt_runF", 0.01,
                "atrt_walkL", 0.01,
                "atrt_walkR", 0.01,
                "atrt_turnL", 0.01,
                "atrt_standIdle", 0.01,
            };
        };

        // These animations are not called upon within the MoveSet, but are here for scripts and such.

        class atrt_sitIdle: atrt_standIdle {
            file = QPATHTOF(data\vehicle\atrt\atrt_sitIdle.rtm);
            looped = 0;
            minPlayTime = -1;
            actions = "ls_vehicle_atrt_moveset_sit";

            interpolateTo[] = {
                // "atrt_standIdle", 0.01,
                // "atrt_standTosit", 0.01,
                "atrt_deathSitting", 0.01,
            };
            connectFrom[] = {
                "atrt_standToSit", 0.01
            };
            disableWeapons = 1;
            disableWeaponsLong = 1;
            enableMissile = 0;
            enableOptics = 0;
            head = "";
            aiming = "";
            aimingBody = "";
            turnSpeed = 0;

            collisionShape = QPATHTOF2(data\vehicle\atrt\atrt_sitting_geo.p3d);
        };

        class atrt_standToSit: atrt_sitIdle {
            file = QPATHTOF(data\vehicle\atrt\atrt_standToSit.rtm);
            speed = -2;
            minPlayTime = -2;
            interpolationRestart = 1;
            interpolateTo[] = {
                "atrt_sitIdle", 0.01
            };
            disableWeapons = 1;
            disableWeaponsLong = 1;
            looped = 0;
            collisionShape = QPATHTOF2(data\vehicle\atrt\atrt_sitting_geo.p3d);
        };

        class atrt_sitToStand: atrt_standIdle {
            file = QPATHTOF(data\vehicle\atrt\atrt_sitToStand.rtm);
            speed = -2;
            minPlayTime = -2;
            interpolationRestart = 1;
            interpolateTo[] = {
                "atrt_standIdle", 0.01
            };
            disableWeapons = 1;
            disableWeaponsLong = 1;
            looped = 0;
        };

        class atrt_vault: atrt_standIdle {
            file = QPATHTOF(data\vehicle\atrt\atrt_vault.rtm);
            speed = -1;
            minPlayTime = -1;
            interpolateTo[] = {
                "atrt_standIdle", 0.01,
            };
        };

        class atrt_deathStanding: Default {
            actions = "DeadActionsStand";
            file = QPATHTOF(data\vehicle\atrt\atrt_standDeath.rtm);
            speed = -1;
            minPlayTime = -1;

            looped = 0;
            terminal = 1;
            interpolateTo[] = {};
        };

        class atrt_deathSitting: Default {
            actions = "DeadActionsSit";
            file = QPATHTOF(data\vehicle\atrt\atrt_sitDeath.rtm);
            speed = -.5;
            minPlayTime = -1;

            looped = 0;
            terminal = 1;
            interpolateTo[] = {};
        };
    };
};

class CfgGesturesAtrt_ls {
    skeletonName = "ls_atrt_skeleton";

    class ManActions {};
    class Actions {
        class NoActions {
            turnSpeed = 0;
            upDegree = 0;
            limitFast = 1;
            useFastMove = 0;
            stance = "ManStanceUndefined";
        };
    };
    class Default {
            access = 1;
            actions = "NoActions";
            adjstance = "m";
            aiming = "empty";
            aimingBody = "empty";
            aimPrecision = 0;
            boundingSphere = 2;
            camShakeFire = 1;
            canBlendStep = 1;
            canPullTrigger = 0;
            canReload = 1;
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
            collisionShapeSafe = "";
            connectAs = "";
            connectFrom[] = {};
            disableWeapons = 1;
            disableWeaponsLong = 1;
            duty = -1;
            enableAutoActions = 0;
            enableBinocular = 1;
            enableDirectControl = 1;
            enableMissile = 0;
            enableOptics = 1;
            equivalentTo = "";
            file = "";
            forceAim = 0;
            hasCollShapeSafe = 0;
            head = "empty";
            headBobMode = 1;
            headBobStrength = 0.1;
            idle = "";
            ignoreMinPlayTime[] = {};
            interpolateFrom[] = {};
            interpolateWith[] = {};
            interpolationRestart = 0;
            interpolationSpeed = 4;
            leaning = "empty";
            leaningFactorBeg = 1;
            leaningFactorEnd = 1;
            leaningFactorZeroPoint = -1;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {0};
            leftHandIKEnd = 0;
            legs = "empty";
            limitGunMovement = 1;
            looped = 1;
            mask = "weaponSwitching";
            minPlayTime = 0;
            onLadder = 0;
            onLandBeg = 0;
            onLandEnd = 0;
            preload = 1;
            ragdoll = 0;
            relSpeedMax = 1;
            relSpeedMin = 1;
            rightHandIKBeg = 0;
            rightHandIKCurve[] = {0};
            rightHandIKEnd = 0;
            showHandGun = 1;
            showItemInHand = 1;
            showItemInRightHand = 0;
            showWeaponAim = 0;
            soundEdge[] = {};
            soundEnabled = 1;
            soundOverride = "";
            speed = 1;
            stamina = 0;
            static = 1;
            terminal = 0;
            turnSpeed = 3;
            useIdles = 1;
            variantAfter[] = {1, 1, 1};
            variantsAI[] = {};
            variantsPlayer[] = {};
            visibleSize = 1;
            Walkcycles = 1;
            weaponIK = 0;
            weaponLowered = 1;
            weaponObstructed = 0;
            connectTo[] = {};
            interpolateTo[] = {};
        };
    class States {
        class Disable_Gesture: Default {
            speed = 1;
            file = "";
            disableWeapons = 0;
            interpolationRestart=2;
            enableOptics = 1;
            weaponIK = 0;
            looped = 0;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {0};
            leftHandIKEnd = 0;
            rightHandIKBeg = 0;
            rightHandIKCurve[] = {0};
            rightHandIKEnd = 0;
            connectFrom[] = {};
            connectTo[] = {};
        };
    };
    class BlendAnims {
        class MaskStart { weight = 0.85; };
        class MaskStartDecreased { weight = 0.35; };
        empty[] = {};
        ls_atrt_idle[] = {
            "body", 1,
            "leg_L", 1,
            "leg_L2", 1,
            "leg_L3", 1,
            "leg_L4", 1,
            "leg_L5", 1,
            "leg_L6", 1,
            "leg_L7", 1,
            "leg_L8", 1,
            "pivot_Lbot", 1,
            "leg_R", 1,
            "leg_R2", 1,
            "leg_R3", 1,
            "leg_R4", 1,
            "leg_R5", 1,
            "leg_R6", 1,
            "leg_R7", 1,
            "leg_R8", 1,
            "pivot_Rbot", 1,
            "turret", 1,
            "turret.001", 1,
            "pivot_Ltop", 1,
            "pivot_Rtop", 1,
            "attena_big1", 1,
            "attena_big2", 1,
            "attena_big3", 1,
            "attena_big4", 1,
            "attena_big_leaf", 1,
            "attena_small1", 1,
            "attena_small2", 1,
            "attena_small3", 1,
            "attena_small_leaf", 1
        };
        ls_atrt_wholeBody[] = {
            "body", 1,
            "leg_L", 1,
            "leg_L2", 1,
            "leg_L3", 1,
            "leg_L4", 1,
            "leg_L5", 1,
            "leg_L6", 1,
            "leg_L7", 1,
            "leg_L8", 1,
            "pivot_Lbot", 1,
            "leg_R", 1,
            "leg_R2", 1,
            "leg_R3", 1,
            "leg_R4", 1,
            "leg_R5", 1,
            "leg_R6", 1,
            "leg_R7", 1,
            "leg_R8", 1,
            "pivot_Rbot", 1,
            "turret", 1,
            "turret.001", 1,
            "pivot_Ltop", 1,
            "pivot_Rtop", 1,
            "attena_big1", 1,
            "attena_big2", 1,
            "attena_big3", 1,
            "attena_big4", 1,
            "attena_big_leaf", 1,
            "attena_small1", 1,
            "attena_small2", 1,
            "attena_small3", 1,
            "attena_small_leaf", 1
        };
        ls_atrt_aimingDefault[] = {
            "turret", 1,
            "turret.001", 1,
        };
        ls_atrt_legsDefault[] = {
            "leg_L", 0,
            "leg_L2", .20,
            "leg_L3", .65,
            "leg_L4", .85,
            "leg_L5", 1,
            "leg_L6", 1,
            "leg_L7", 1,
            "leg_L8", 1,
            "pivot_Lbot", 0,
            "leg_R",  0,
            "leg_R2", .20,
            "leg_R3", .65,
            "leg_R4", .85,
            "leg_R5", 1,
            "leg_R6", 1,
            "leg_R7", 1,
            "leg_R8", 1,
            "pivot_Rbot", 0
        };
        ls_atrt_headDefault[] = {
            "turret", 1,
            "turret.001", 1,
        };
    };
    class Interpolations {};
    transitionsInterpolated[] = {};
    transitionsSimple[] = {};
    transitionsDisabled[] = {};
};
