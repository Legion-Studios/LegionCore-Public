class CfgVehicles {
    class O_UGV_01_F;
    class ls_droidDispenser_base: O_UGV_01_F {
        scope = 0;
        author = AUTHOR;
        displayName = CSTRING(displayName);

        curatorInfoType = QEGVAR(modules,RscDisplayAttributesDispenser); // Double click menu for Zeus

        faction = "ls_cis";
        editorsubcategory = "ls_edsubcat_special";
        crew = "O_UAV_AI";
        typicalCargo[] = {};

        cargoAction[] = {};
        availableForSupportTypes[] = {"Drop"};
        airFriction2[] = {25, 12, 2.5};
        isUav = 1;
        // slingLoadCargoMemoryPoints[] = {"Sling1", "Sling2", "Sling3"};
        canFloat = 0;

        class Wheels {};
        class Turrets {};
        class Sounds {};

        class Library {
            libTextDesc = CSTRING(description);
        };

        class UserActions {
            class activate {
                displayname = CSTRING(activate);
                position = "pilotview";
                onlyForPlayer = 1;
                radius = 1.5;
                priority = 107;
                hideOnUse = 0;
                condition = QUOTE(!GETVAR(active,false));
                statement = QUOTE(this call FUNC(activate));
            };

            class deactivate: activate {
                displayName = CSTRING(deactivate);
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

        model = QPATHTOF(ls_vehicle_droidDispenser.p3d);
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa),
            QPATHTOF(data\camo1_co.paa)
        };
        icon = QPATHTOF(data\ui\droidDispenser_icon_ca.paa);
        picture = QPATHTOF(data\ui\droidDispenser_icon_side_ca.paa);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_droidDispenser.jpg);

        GVAR(hatchCount) = 3;
        GVAR(hatchHitpoint) = "HitHatch%1";
        GVAR(hatchAnimation) = "Hatch%1_move";
        GVAR(hatchDirections)[] = {90, 330, 210};
        GVAR(activationSelection)[] = {
            "camo2",
            "#(rgb,8,8,3)color(0.9,0,0.2,0.7)",
            "#(rgb,8,8,3)color(1,0,0,0.7)"
        };
        GVAR(unitAnimation) = "ls_droid_folded";

        armor = 100;
        armorStructural = 1;
        explosionShielding = 1;
        class HitPoints {
            class HitHull {
                simulation = "Default";
                armorComponent = "hull";
                name = "hull_point";
                armor = 2;
                explosionShielding = 1;
                passThrough = 1;
                minimalHit = 0.3;
                material = -1;
                visual = "hull";
                radius = 0.5;
            };
            class HitHatch1 {
                simulation = "Default";
                armorComponent = "hatch1";
                name = "hatch1_point";
                armor = 2.5;
                explosionShielding = 1;
                passThrough = 0;
                material = -1;
                visual = "hatch1";
                radius = 0.5;
            };
            class HitHatch2: HitHatch1 {
                armorComponent = "hatch2";
                name = "hatch2_point";
                visual = "hatch2";
            };
            class HitHatch3: HitHatch1 {
                armorComponent = "hatch3";
                name = "hatch3_point";
                visual = "hatch3";
            };
        };

        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOF2(data\camo1.rvmat),
                QPATHTOF2(data\camo1_damage.rvmat),
                QPATHTOF2(data\camo1_destruct.rvmat),
                QPATHTOF2(data\camo1.rvmat),
                QPATHTOF2(data\camo1_damage.rvmat),
                QPATHTOF2(data\camo1_destruct.rvmat)
            };
        };

        animationList[] = {
            "Hatch1_move", 0,
            "Hatch2_move", 0,
            "Hatch3_move", 0
        };
        class AnimationSources {
            class Hatch1_move {
                displayName = CSTRING(openHatch1);
                source = "user";
                animPeriod = 1.75;
                initPhase = 0;
                sound = QGVAR(hatchMove);
                soundPosition = "spawn1";
            };

            class Hatch2_move: Hatch1_move {
                displayName = CSTRING(openHatch2);
                soundPosition = "spawn2";
            };

            class Hatch3_move: Hatch1_move {
                displayName = CSTRING(openHatch3);
                soundPosition = "spawn3";
            };
        };
    };
};
