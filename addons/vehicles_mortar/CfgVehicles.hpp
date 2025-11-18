class CfgVehicles {
    class StaticWeapon;
    class StaticMortar: StaticWeapon {
        class Turrets;
    };
    class Mortar_01_base_F: StaticMortar {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class ls_vehicle_mortar_base: Mortar_01_base_F {
        scope = 0;
        author = AUTHOR;
        displayname = "Mortar Launcher";

        picture = QPATHTOF(data\ui\mortar_icon_side_ca.paa);
        icon = QPATHTOF(data\ui\mortar_icon_ca.paa);

        editorSubcategory = "EdSubcat_Turrets";
        availableForSupportTypes[] = {"Artillery"};

        model = QPATHTOF(ls_turret_mortar.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };

        class HitPoints {};

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"ls_weapon_mortar_82mm"};
                magazines[] = {
                    "ls_5Rnd_82mm_mortar_HE",
                    "ls_5Rnd_82mm_mortar_HE",
                    "ls_5Rnd_82mm_mortar_HE",
                    "ls_5Rnd_82mm_mortar_HE",
                    "ls_5Rnd_82mm_mortar_HE",
                    "ls_5Rnd_82mm_mortar_HE"
                };
            };
        };

        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOF2(data\camo1.rvmat),
                "A3\Static_f\Mortar_01\data\Mortar_01_damage.rvmat",
                "A3\Static_f\Mortar_01\data\Mortar_01_destruct.rvmat"
            };
        };

        class ACE_CSW {
            enabled = 1;
            proxyWeapon = "ls_weapon_mortar_82mm_proxy";
            magazineLocation = "_target selectionPosition 'usti hlavne'";
            disassembleWeapon = "ls_launcher_mortar_carry_base";
            disassembleTurret = "";
            ammoLoadTime = 3;
            ammoUnloadTime = 3;
            desiredAmmo = 5;
        };

        class assembleInfo {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {};
            primary = 0;
        };

        class SimpleObject {
            eden = 1;
            animate[] = {
                {"mainturret", 0},
                {"maingun", 0},
                {"optics", 0},
                {"optics_stabilization", 0},
                {"legs_zeroing", 0},
                {"uplegs_zeroing", 0}
            };
            hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
            verticalOffset = 0.757;
            verticalOffsetWorld = 0.035;
            init = "";
        };
    };

    class ls_vehicle_mortar_gar: ls_vehicle_mortar_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Republic Mortar Launcher";

        side = 1;
        faction = "ls_gar";
        crew = "ls_clone_phase2_rifleman";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mortar_gar.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };

        class assembleInfo: assembleInfo {
            dissasembleTo[] = {"ls_backpack_mortar_gar"};
        };

        class ACE_CSW: ACE_CSW {
            disassembleWeapon = "ls_launcher_mortar_carry_gar";
        };
    };

    class ls_vehicle_mortar_cis: ls_vehicle_mortar_base {
        scope = 2;
        author = AUTHOR;
        displayName = "CIS Mortar Launcher";

        side = 0;
        faction = "ls_cis";
        crew = "ls_droid_b1_crew";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mortar_cis.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\cis\camo1_co.paa)
        };

        class assembleInfo: assembleInfo {
            dissasembleTo[] = {"ls_backpack_mortar_cis"};
        };

        class ACE_CSW: ACE_CSW {
            disassembleWeapon = "ls_launcher_mortar_carry_cis";
        };
    };

    class ls_vehicle_mortar_mercenary: ls_vehicle_mortar_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Mercenary Mortar Launcher";

        side = 2;
        faction = "ls_mandalorians";
        crew = "ls_mandalorian_traditionalWarrior";
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_mortar_mercenary.jpg);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\mercenary\camo1_co.paa)
        };

        class assembleInfo: assembleInfo {
            dissasembleTo[] = {"ls_backpack_mortar_mercenary"};
        };

        class ACE_CSW: ACE_CSW {
            disassembleWeapon = "ls_launcher_mortar_carry_mercenary";
        };
    };

    class Weapon_Bag_Base;
    class ls_backpack_mortar_base: Weapon_Bag_Base {
        scope = 0;
        author = AUTHOR;

        displayName = "Mortar";
        editorCategory = "ls_edcat_groundholders";
        editorSubcategory = "EdSubcat_DismantledWeapons";
        picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_mcamo.paa";

        model = QPATHTOF(ls_turret_mortar_backpack.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };

        mass = 200;

        class assembleInfo {
            assembleTo = "ls_vehicle_mortar_base";
            base = "";
            displayName = "Mortar Launcher";
            dissasembleTo[] = {};
            primary = 1;
        };
    };

    class ls_backpack_mortar_gar: ls_backpack_mortar_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Republic Mortar";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa)
        };

        class assembleInfo: assembleInfo {
            assembleTo = "ls_vehicle_mortar_gar";
        };
    };

    class ls_backpack_mortar_cis: ls_backpack_mortar_base {
        scope = 2;
        author = AUTHOR;
        displayName = "CIS Mortar";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\cis\camo1_co.paa)
        };

        class assembleInfo: assembleInfo {
            assembleTo = "ls_vehicle_mortar_cis";
        };
    };

    class ls_backpack_mortar_mercenary: ls_backpack_mortar_base {
        scope = 2;
        author = AUTHOR;
        displayName = "Mercenary Mortar";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\textures\mercenary\camo1_co.paa)
        };

        class assembleInfo: assembleInfo {
            assembleTo = "ls_vehicle_mortar_mercenary";
        };
    };
};
