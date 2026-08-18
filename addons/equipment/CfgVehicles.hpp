class CfgVehicles {
    class ThingX;
    class GVAR(squadShield): ThingX {
        scope = 2;
        author = AUTHOR;
        displayName = CSTRING(squadShield_displayName);

        model = QPATHTOF(squadShield\ls_equipment_squadShield.p3d);
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(squadShield\data\camo1_co.paa)};
        editorPreview = QPATHTOF(data\ui\editorPreviews\GVAR(squadShield).jpg);
        icon = QPATHTOF(data\ui\squadShield_icon_ca.paa);
        picture = QPATHTOF(data\ui\squadShield_icon_side_ca.paa);

        editorCategory = "ls_edcat_statics";
        editorSubcategory = "EdSubcat_Electronics";

        class AnimationSources {
            class deploy_shield {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
                sound = "ls_squadShield_deployShield";
                soundPosition = "generator_point";
            };
        };

        class UVAnimations {
            class Translation {
                type = "translation";
                source = "time";
                sourceAddress = "loop";
                section = "shield";
                minValue = 0;
                maxValue = 16;
                offset0[] = {0, 0};
                offset1[] = {1, 1};
            };
        };

        explosionShielding = 3;
        epeImpulseDamageCoef = 0;
        class HitPoints {
            class HitGenerator {
                simulation = "Default";
                armorComponent = "generator";
                name = "generator_point";
                armor = 1;
                material = -1;
                passThrough = 1;
                visual = "camo1";
                radius = 0.25;
            };
            class HitShield {
                simulation = "Default";
                armorComponent = "shield";
                name = "shield_point";
                armor = 1; // Leave as 1, shield health is changed via CBA setting
                material = -1;
                passThrough = 0;
                visual = "";
                radius = 2;
            };
        };

        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOF2(squadShield\data\camo1.rvmat),
                QPATHTOF2(squadShield\data\camo1_damage.rvmat),
                QPATHTOF2(squadShield\data\camo1_destruct.rvmat)
            };
        };

        class DestructionEffects {
            class Smoke1 {
                intensity = 1;
                interval = 1;
                lifeTime = 1;
                position = "destructionEffect";
                simulation = "particles";
                type = "SmallWreckSmoke";
            };
        };

        class ACE_Actions {
            class ACE_MainActions {
                displayName = "$STR_ace_interaction_MainAction";
                selection = "interact";
                condition = "true";
                distance = 5;
            };
        };

        class Attributes {
            class deploy_shield {
                displayName = ECSTRING(common,activateShield);
                control = "CheckboxNumber";
                expression = "_this animateSource ['%s', _value, true]";
                property = "deploy_shield";
                defaultvalue = 0;
            };
        };
    };
};
