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
        picture = QPATHTOF(data\ui\droidDispenser_icon_side_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droidDispenser.jpg);

        curatorInfoType = QEGVAR(modules,RscDisplayAttributesDispenser); // Double click menu for Zeus

        faction = "ls_cis";
        editorsubcategory = "ls_edsubcat_special";
        crew = "O_UAV_AI";
        typicalCargo[] = {};

        cargoAction[] = {};
        availableForSupportTypes[] = {"Drop"};
        airFriction2[] = {25, 12, 2.5};
        armor = 150;
        isUav = 1;
        // slingLoadCargoMemoryPoints[] = {"Sling1", "Sling2", "Sling3"};
        armorStructural = 10;
        damageResistance = 0.00719;
        canFloat = 0;

        class Wheels {};
        class Turrets {};
        class Sounds {};

        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOF2(data\camo1.rvmat),
                QPATHTOF2(data\camo1_damage.rvmat),
                QPATHTOF2(data\camo1_destruct.rvmat),
                QPATHTOF2(data\camo1.rvmat),
                QPATHTOF2(data\camo1_damage.rvmat),
                QPATHTOF2(data\camo1_destruct.rvmat),
            };
        };

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
                animPeriod = HATCH_ANIM_LENGTH;
                initPhase = 0;
                sound = QGVAR(hatchMove);
                soundPosition = "spawn_1";
            };

            class hatch2_move: hatch1_move {
                displayName = "Move Hatch 2";
                soundPosition = "spawn_2";
            };

            class hatch3_move: hatch1_move {
                displayName = "Move Hatch 3";
                soundPosition = "spawn_3";
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
                condition = QUOTE(!GETVAR(active,false));
                statement = QUOTE(this call FUNC(activate));
            };

            class deactivate: activate {
                displayName = "Deactivate Dispenser";
                condition = QUOTE(GETVAR(active,false));
                statement = QUOTE(this call FUNC(deactivate));
            };
        };

        class Reflectors {};
        class SimpleObject {};
        class TransportWeapons {};
        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};
    };

    class ls_droidDispenser: ls_droidDispenser_base {
        scope = 2;
        author = AUTHOR;
    };
};
