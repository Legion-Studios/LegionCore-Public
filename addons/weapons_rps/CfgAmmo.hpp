class CfgAmmo {
    class R_PG32V_F;
    class ls_rocket_rps6_heat: R_PG32V_F {
        aiAmmoUsageFlags = AMMO_USAGE_INFANTRY + AMMO_USAGE_VEHICLES + AMMO_USAGE_AIRCRAFT + AMMO_USAGE_ARMORED_VEHICLES;
        irLock = 1;
        allowAgainstInfantry = 1;
        indirectHit = 100;
        indirectHitRange = 10;

        // Values from R_TBG32V_F (child of R_PG32V_F)
        ace_frag_enabled = 1;
        ace_frag_metal = 400;
        ace_frag_charge = 210;
        ace_frag_gurney_c = 2800;
        ace_frag_gurney_k = 3 / 5;
        ace_frag_classes[] = {"ACE_frag_medium_HD"};
    };
};
