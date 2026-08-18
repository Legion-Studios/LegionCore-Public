class ls_atrt_skeleton {
    isDiscrete = 0;
    skeletonInherit = "";
    skeletonBones[] = {
        "body", "",
        "leg_l", "body",
        "leg_l2", "leg_l",
        "leg_l3", "leg_l2",
        "leg_l4", "leg_l3",
        "leg_l5", "leg_l4",
        "leg_l6", "leg_l5",
        "leg_l7", "leg_l4",
        "leg_l8", "leg_l7",
        "pivot_lbot", "leg_l",
        "leg_r", "body",
        "leg_r2", "leg_r",
        "leg_r3", "leg_r2",
        "leg_r4", "leg_r3",
        "leg_r5", "leg_r4",
        "leg_r6", "leg_r5",
        "leg_r7", "leg_r4",
        "leg_r8", "leg_r7",
        "pivot_rbot", "leg_r",
        "turret", "body",
        "turret.001", "turret",
        "pivot_ltop", "body",
        "pivot_rtop", "body",
        "attena_big1", "body",
        "attena_big2", "attena_big1",
        "attena_big3", "attena_big2",
        "attena_big4", "attena_big3",
        "attena_big_leaf", "attena_big4",
        "attena_small1", "body",
        "attena_small2", "attena_small1",
        "attena_small3", "attena_small2",
        "attena_small_leaf", "attena_small3"
    };
    pivotsModel = "ls\core\addons\vehicles_atrt\ls_vehicle_atrt_pivots.p3d";
};
