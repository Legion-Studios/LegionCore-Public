class CfgWeapons {
    class ls_weapon_laati_turret_50mm_he;
    class ls_weapon_hmp_turret_50mm_he: ls_weapon_laati_turret_50mm_he {
        displayname = "HMP Auto Guns (HE)";
        magazines[] = {
            "ls_magazine_50mm_200Rnd_HE_red"
        };

        selectionFireAnim[] = {
            "zasleh_c",
            "zasleh_r_1",
            "zasleh_r_2",
            "zasleh_l_1",
            "zasleh_l_2",
        };
    };

    class ls_weapon_laati_turret_50mm_ap;
    class ls_weapon_hmp_turret_50mm_ap: ls_weapon_laati_turret_50mm_ap {
        displayname = "HMP Auto Guns (AP)";
        magazines[] = {
            "ls_magazine_50mm_200Rnd_APFSDS_red"
        };

        selectionFireAnim[] = {
            "zasleh_c",
            "zasleh_r_1",
            "zasleh_r_2",
            "zasleh_l_1",
            "zasleh_l_2",
        };
    };

    class ls_weapon_hmp_turret_50mm_apfsds: ls_weapon_laati_turret_50mm_ap {
        displayname = "HMP Cheek Gun";
        magazines[] = {
            "ls_magazine_hmp_500Rnd_APFSDS"
        };
    };

    DEPRECATED(ls_hmp_gun,ls_weapon_hmp_turret_50mm_he);
    DEPRECATED(ls_hmp_gun_2,ls_weapon_hmp_turret_50mm_ap);
};
