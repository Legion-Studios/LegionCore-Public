class CfgVehicles {
    class O_UGV_01_F;
    class ls_droidDispenser_base: O_UGV_01_F {
        scope = 0;
        author = AUTHOR;
        displayName = "Droid Dispenser";

        model = QPATHTOF(ls_vehicle_droidDispenser.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa),
            QPATHTOF(data\camo1_co.paa)
        };
        icon = QPATHTOF(data\ui\droidDispenser_icon_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droidDispenser.jpg);

        faction = "ls_cis";
        editorsubcategory = "ls_edsubcat_special";
        vehicleClass = "spawner";
        crew = "O_UAV_AI";
        typicalCargo[] = {};

        cargoAction[] = {};
        availableForSupportTypes[] = {"Drop"};
        airFriction2[] = {25, 12, 2.5};
        armor = 150;
        isUav = 1;
        // slingLoadCargoMemoryPoints[] = {"Sling1", "Sling2", "Sling3"};
        picture = "";
        armorStructural = 10;
        damageResistance = 0.00719;
        canFloat = 0;

        class Wheels {};
        class Turrets {};
        class Sounds {};

        class Library {
            libTextDesc = "A roughly cylindrical container, that could transport, dispense and possibly construct battle droids, used by the Trade Federation and later more predominantly by the Confederacy of Independent Systems during the Clone Wars to continually dispense a supply of battle droids.";
        };

        animationList[] = {
            "hatch1_move", 0,
            "hatch2_move", 0,
            "hatch3_move", 0
        };
        class AnimationSources {
            class hatch1_move {
                displayName = "Move Hatch 1";
                source = "user";
                animPeriod = 1;
                initphase = 0;
            };

            class hatch2_move: hatch1_move {
                displayName = "Move Hatch 2";
            };

            class hatch3_move: hatch1_move {
                displayName = "Move Hatch 3";
            };
        };

        class UserActions {
            class activate {
                displayname = "Activate Dispenser";
                position = "pilotview";
                onlyForPlayer = 0;
                radius = 1.5;
                priority = 107;
                hideOnUse = 0;
                condition = QUOTE(!GETVAR(active,false) and {GETPAGE == PAGE_HOME});
                statement = QUOTE(this call FUNC(activate));
            };

            class deactivate: activate {
                displayName = "Deactivate Dispenser";
                condition = QUOTE(GETVAR(active,false) and {GETPAGE == PAGE_HOME});
                statement = QUOTE(this call FUNC(deactivate));
            };

            // Page values are stored to vehicle, see script_macros
            class home: activate {
                displayName = "Home";
                condition = QUOTE(GETPAGE != PAGE_HOME);
                statement = QUOTE(SETPAGE(PAGE_HOME));
            };

            class settings: activate {
                displayName = "==SETTINGS==";
                condition = "true";
                statement = "";
            };

            class changeDroidType: activate {
                displayName = "-Spawn Type";
                condition = QUOTE(GETPAGE == PAGE_HOME);
                statement = QUOTE(SETPAGE(PAGE_DROIDTYPE));
            };

            class changeGroupSize: activate {
                displayName = "-Group Size";
                condition = QUOTE(GETPAGE == PAGE_HOME);
                statement = QUOTE(SETPAGE(PAGE_GROUPSIZE));
            };

            class autoPatrol: activate {
                displayName = "-Patrol Settings";
                condition = QUOTE(GETPAGE == PAGE_HOME);
                statement = QUOTE(SETPAGE(PAGE_AUTOPATROL));
            };

            class behavior: activate {
                displayName = "-Behavior Settings";
                condition = QUOTE(GETPAGE == PAGE_HOME);
                statement = QUOTE(SETPAGE(PAGE_BEHAVIOR));
            };

            // class automation: activate
            // {
            // 	displayName = "-Automation";
            // 	condition = "this getVariable[""Menu"", 0] == 0";
            // 	statement = "this setVariable[""Menu"", 4, true];";
            // };
            class GVAR(changeDroidTypeStandard): activate {
                displayName = "Change: B1";
                condition = QUOTE(GETPAGE == PAGE_DROIDTYPE and {GETVAR(droidType,""lsd_cis_b1_standard"") != ""lsd_cis_b1_standard""});
                statement = QUOTE(SETVAR(droidType,""lsd_cis_b1_standard"",true));
            };

            CHANGE_DROID(B1 (Shotgun),Shotgun,""lsd_cis_b1Shotgun_standard"");
            CHANGE_DROID(B1 (Heavy),Heavy,""lsd_cis_b1Heavy_standard"");
            CHANGE_DROID(B1 (Grenadier),Grenadier,""lsd_cis_b1Grenadier_standard"");
            CHANGE_DROID(B1 (Marksman),Marksman,""lsd_cis_b1Marksman_standard"");
            CHANGE_DROID(B1 (AT),AT,""lsd_cis_b1AT_standard"");
            CHANGE_DROID(B1 (AT Missile),ATMissile,""lsd_cis_b1ATMissile_standard"");
            CHANGE_DROID(B1 (AA),AA,""lsd_cis_b1AA_standard"");
            CHANGE_DROID(B1 (AA Missile),AAMissile,""lsd_cis_b1AAMissile_standard"");
            CHANGE_DROID(OOM Security,Security,""ls_cis_oomSecurity_standard"");
            CHANGE_DROID(BX Commandos,BX,""lsd_cis_bxdroid_specops"");

            // Change Group size: 2
            class changeGroupSize_noLimit: activate {
                displayName = "-No Limit-";
                condition = QUOTE(GETPAGE == PAGE_GROUPSIZE and {GETVAR(groupSize,100) != 100});
                statement = QUOTE(SETVAR(groupSize,100,true));
            };
            CHANGE_GROUPSIZE(4);
            CHANGE_GROUPSIZE(6);
            CHANGE_GROUPSIZE(8);
            CHANGE_GROUPSIZE(10);
            CHANGE_GROUPSIZE(12);

            class autoPatrol_true: activate {
                displayName = "AutoPatrol: True";
                condition = QUOTE(GETPAGE == PAGE_AUTOPATROL and {!GETVAR(autoPatrol,false)});
                statement = QUOTE(SETVAR(autoPatrol,true,true));
            };

            class autoPatrol_false: activate {
                displayName = "AutoPatrol: False";
                condition = QUOTE(GETPAGE == PAGE_AUTOPATROL and {GETVAR(autoPatrol,false)});
                statement = QUOTE(SETVAR(autoPatrol,false,true));
            };
            CHANGE_AUTOPATROL_RADIUS(50);
            CHANGE_AUTOPATROL_RADIUS(100);
            CHANGE_AUTOPATROL_RADIUS(250);
            CHANGE_AUTOPATROL_RADIUS(500);

            CHANGE_BEHAVIOR(AWARE);
            CHANGE_BEHAVIOR(COMBAT);
            CHANGE_BEHAVIOR(STEALTH);
            CHANGE_BEHAVIOR(CARELESS);
            CHANGE_BEHAVIOR(SAFE);

            // // Automation Settings 4
            // class automation_false: activate
            // {
            // 	displayName = "Automated: False";
            // 	condition = "this getVariable [""automation"", 0] == 0 and this getVariable[""Menu"", 0] == 4;";
            // 	statement = "this setVariable[""automation"", 1, true];";
            // };

            // class automation_true: activate
            // {
            // 	displayName = "Automated: True";
            // 	condition = "this getVariable [""automation"", 0] == 1 and this getVariable[""Menu"", 0] == 4;";
            // 	statement = "this setVariable[""automation"", 0, true];";
            // };
            // // Limited Spawn Settings
            // class automation_modeLimit: activate
            // {
            // 	displayName = "Mode: Limit # of Spawns";
            // 	condition = "this getVariable [""automation_mode"", 0] == 0 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1;";
            // 	statement = "this setVariable[""automation_mode"", 1, true];";
            // };

            // class automation_modeLimit_units: activate
            // {
            // 	displayName = "Limit: Units";
            // 	condition = "this getVariable [""mode_limit"", 0] == 0 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""groupSize"", 100] == 0);";
            // 	statement = "this setVariable[""mode_limit"", 1, true];";
            // };
            // // UNITS
            // class automation_modeLimit_units_10: activate
            // {
            // 	displayName = "10 Units";
            // 	condition = "this getVariable [""mode_limit"", 0] == 0 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""groupSize"", 100] == 0) and !(this getVariable [""limit_units"", 10] == 10);";
            // 	statement = "this setVariable[""limit_units"", 10, true];";
            // };

            // class automation_modeLimit_units_20: activate
            // {
            // 	displayName = "20 Units";
            // 	condition = "this getVariable [""mode_limit"", 0] == 0 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""groupSize"", 100] == 0) and !(this getVariable [""limit_units"", 10] == 20);";
            // 	statement = "this setVariable[""limit_units"", 20, true];";
            // };

            // class automation_modeLimit_units_30: activate
            // {
            // 	displayName = "30 Units";
            // 	condition = "this getVariable [""mode_limit"", 0] == 0 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""groupSize"", 100] == 0) and !(this getVariable [""limit_units"", 10] == 30);";
            // 	statement = "this setVariable[""limit_units"", 30, true];";
            // };

            // class automation_modeLimit_units_40: activate
            // {
            // 	displayName = "40 Units";
            // 	condition = "this getVariable [""mode_limit"", 0] == 0 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""groupSize"", 100] == 0) and !(this getVariable [""limit_units"", 10] == 40);";
            // 	statement = "this setVariable[""limit_units"", 40, true];";
            // };

            // class automation_modeLimit_units_50: activate
            // {
            // 	displayName = "50 Units";
            // 	condition = "this getVariable [""mode_limit"", 0] == 0 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""groupSize"", 100] == 0) and !(this getVariable [""limit_units"", 10] == 50);";
            // 	statement = "this setVariable[""limit_units"", 50, true];";
            // };
            // // NO LIMIT
            // class automation_modeLimit_unitsNoLimit: activate
            // {
            // 	displayName = "Limit: -No Limit-";
            // 	condition = "this getVariable [""mode_limit"", 0] == 0 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and this getVariable [""groupSize"", 100] == 100;";
            // 	statement = "this setVariable[""groupSize"", 6, true];";
            // };

            // // GROUPS
            // class automation_modeLimit_groups: activate
            // {
            // 	displayName = "Limit: Groups";
            // 	condition = "this getVariable [""mode_limit"", 0] == 1 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0;";
            // 	statement = "this setVariable[""mode_limit"", 0, true];";
            // };

            // class automation_modeLimit_groups_2: activate
            // {
            // 	displayName = "2 groups";
            // 	condition = "this getVariable [""mode_limit"", 0] == 1 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""limit_groups"", 2] == 2);";
            // 	statement = "this setVariable[""limit_groups"", 2, true];";
            // };

            // class automation_modeLimit_groups_3: activate
            // {
            // 	displayName = "3 groups";
            // 	condition = "this getVariable [""mode_limit"", 0] == 1 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""limit_groups"", 2] == 3);";
            // 	statement = "this setVariable[""limit_groups"", 3, true];";
            // };

            // class automation_modeLimit_groups_4: activate
            // {
            // 	displayName = "4 groups";
            // 	condition = "this getVariable [""mode_limit"", 0] == 1 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""limit_groups"", 2] == 4);";
            // 	statement = "this setVariable[""limit_groups"", 4, true];";
            // };

            // class automation_modeLimit_groups_5: activate
            // {
            // 	displayName = "5 groups";
            // 	condition = "this getVariable [""mode_limit"", 0] == 1 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1 and this getVariable [""automation_mode"", 0] == 0 and !(this getVariable [""limit_groups"", 2] == 5);";
            // 	statement = "this setVariable[""limit_groups"", 5, true];";
            // };

            // // Proximity Mode settings
            // class automation_modeProximity: activate
            // {
            // 	displayName = "Mode: Proximity";
            // 	condition = "this getVariable [""automation_mode"", 0] == 1 and this getVariable[""Menu"", 0] == 4 and this getVariable [""automation"", 0] == 1;";
            // 	statement = "this setVariable[""automation_mode"", 0, true];";
            // };

            class endSettings: activate {
                displayName = "============";
                condition = "true";
                statement = "";
            };
        };

        class SimpleObject {};
    };

    class ls_droidDispenser: ls_droidDispenser_base {
        scope = 2;
        author = AUTHOR;
    };
};
