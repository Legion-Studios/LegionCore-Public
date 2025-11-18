class RCWSOptics;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;

class CfgVehicles {
    class Car_F;
    class UGV_01_base_F: Car_F {
        class Turrets;
        class HitPoints;
    };
    class UGV_01_rcws_base_F: UGV_01_base_F {
        class AnimationSources;
        class Turrets: Turrets {
            class MainTurret;
        };
        class HitPoints: HitPoints {
            class HitFuel;
            class HitBody;
            class HitEngine;
        };
        class Components;
    };
    class ls_vehicle_agtRaptor_base: UGV_01_rcws_base_F {
        model = QPATHTOF(ls_vehicle_agtRaptor.p3d);
        editorPreview = QPATHTOF(data\ui\editorPreviews\ls_vehicle_agtRaptor.jpg);
        icon = QPATHTOF(data\ui\agt_icon_ca.paa);
        picture = QPATHTOF(data\ui\agt_icon_side_ca.paa);
        editorSubcategory = "EdSubcat_drones";
        crew = "O_UAV_AI";
        displayName = "AGT_BASE";
        weapons[] = {
            "CarHorn"
        };
        magazines[] = {};
        memoryPointGun[] = {};
        uavCameraDriverPos = "PiP0_pos";
        uavCameraDriverDir = "PiP0_dir";

        #include "cfg\HitPoints.hpp"
        #include "cfg\Components.hpp"

        hiddenSelections[] = {
            "Camo1",
            "Camo2"
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\camo1_co.paa),
            QPATHTOF(data\camo2_co.paa)
        };

        class AnimationSources: AnimationSources {
            class HitFRWheel {
                hitPoint = "HitRFWheel";
                raw = 1;
                source = "Hit";
            };
            class HitEngine {
                hitPoint = "HitEngine";
                raw = 1;
                source = "Hit";
            };
            class HitFLWheel: HitFRWheel {
                hitPoint = "HitLFWheel";
            };

            class HitBRWheel: HitFRWheel {
                hitPoint = "HitRF2Wheel";
            };

            class HitBLWheel: HitFRWheel {
                hitPoint = "HitLF2Wheel";
            };
        };

        class TransportItems {};

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                isCopilot = 0;
                dontCreateAI = 0;
                body = "mainTurret";
                gun = "mainGun";
                memoryPointGunnerOptics = "PiP1_pos";
                memoryPointGun = "machinegun";
                gunnerForceOptics = 1;
                gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
                turretInfoType = "RscOptics_UGV_gunner";
                weapons[] = {
                    "ls_lmg_127"
                };
                magazines[] = {
                    "ls_magazine_127x99_500Rnd_red",
                    "ls_magazine_127x99_500Rnd_red"
                };
                maxHorizontalRotSpeed = 1.8;
                soundServo[] = {
                    "A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner.wss",
                    0.31622776,
                    1,
                    30
                };
                soundServoVertical[] = {
                    "A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical.wss",
                    0.31622776,
                    1,
                    30
                };
                minElev = -10;
                maxElev = 60;
                forceHideGunner = 1;
                outGunnerMayFire = 1;
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
                discreteDistanceInitIndex=2;
                stabilizedInAxes=3;

                class HitPoints {
                    class HitTurret {
                        armor = 0.5;
                        material = -1;
                        armorComponent = "hit_main_turret";
                        name = "hit_main_turret_point";
                        visual = "OtocVez";
                        passThrough = 0;
                        minimalHit = 0.029999999;
                        explosionShielding = 0.40000001;
                        radius = 0.25;
                        isTurret = 1;
                    };

                    class HitGun {
                        armor = 0.5;
                        material = -1;
                        armorComponent = "hit_main_gun";
                        name = "hit_main_gun_point";
                        visual = "OtocHlaven";
                        passThrough = 0;
                        minimalHit = 0.029999999;
                        explosionShielding = 0.40000001;
                        radius = 0.2;
                        isGun = 1;
                    };
                };


                class ViewOptics: RCWSOptics {
                    visionMode[] = {
                        "Normal",
                        "TI"
                    };
                    initFov = 0.46669999;
                    maxFov = 0.46669999;
                    minFov = 0.035;
                    directionStabilized = 1;
                };

                class Components {
                    class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft {
                        class components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class MinimapDisplay {
                                componentType = "MinimapDisplayComponent";
                                resource = "RscCustomInfoMiniMap";
                            };
                            class UAVDisplay {
                                componentType = "UAVFeedDisplayComponent";
                            };
                        };
                    };

                    class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight {
                        class components {
                            class EmptyDisplay {
                                componentType = "EmptyDisplayComponent";
                            };
                            class MinimapDisplay {
                                componentType = "MinimapDisplayComponent";
                                resource = "RscCustomInfoMiniMap";
                            };
                            class UAVDisplay {
                                componentType = "UAVFeedDisplayComponent";
                            };
                        };
                    };
                };
            };
        };

        #include "cfg\Sounds.hpp"
        #include "cfg\PhysX.hpp"


        // /// memory points where do tracks of the wheel appear
        // // front left track, left offset
        // memoryPointTrackFLL = "TrackFLL";
        // // front left track, right offset
        // memoryPointTrackFLR = "TrackFLR";
        // // back left track, left offset
        // memoryPointTrackBLL = "TrackBLL";
        // // back left track, right offset
        // memoryPointTrackBLR = "TrackBLR";
        // // front right track, left offset
        // memoryPointTrackFRL = "TrackFRL";
        // // front right track, right offset
        // memoryPointTrackFRR = "TrackFRR";
        // // back right track, left offset
        // memoryPointTrackBRL = "TrackBRL";
        // // back right track, right offset
        // memoryPointTrackBRR = "TrackBRR";

        /// damage changes material in specific places (visual in hitPoint)
        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOF2(data\camo1.rvmat),
                QPATHTOF2(data\camo1_damage.rvmat),
                QPATHTOF2(data\camo1_destruct.rvmat),
                QPATHTOF2(data\camo2.rvmat),
                QPATHTOF2(data\camo2_damage.rvmat),
                QPATHTOF2(data\camo2_destruct.rvmat)
            };
        };
        // specific exhaust effects for the car
        // class Exhausts {
        //     /// the car has two exhausts - each on one side
        //     class Exhaust1 {
        //         position = "exhaust1";      // name of initial memory point
        //         direction = "exhaust1_dir"; // name of memory point for exhaust direction
        //         effect = "ExhaustsEffect";  // what particle effect is it going to use
        //     };
        // };

        /// only front lights are considered to be reflectors to save CPU
        class Reflectors {
            class Left {
                color[] = {7000, 7500, 10000};  // defines red, green, blue and alpha components of the light
                ambient[] = {70, 75, 100};      // the same definition format for colouring the environment around
                intensity = 50;                 // how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
                size = 5;                       // defines the visible size of light, has not much of an effect now
                innerAngle = 15;                // angle from light direction vector where the light is at full strength
                outerAngle = 65;                // angle from light direction vector where the light is completely faded out
                coneFadeCoef = 10;              // coefficient of fading the light between inner and outer cone angles
                position = "Light_L_Pos";       // name of memory point in model to take the origin of the light
                direction = "Light_L_Dir";      // name of memory point in the model to make a vector of direction of light from it's position
                hitpoint = "Light_b_hitpoint";  // name of hitpoint selection in hitpoint lod of the model to be affected by damage
                selection = "Light_L_Lamp";     // name of selection in visual lods of the model that are going to be hidden while the light is off
                useFlare = 1;                   // boolean switch if the light produces flare or not
                flareSize = 15;                 // how big is the flare, using the same metrics as intensity
                flareMaxDistance = 250;         // maximum distance where the flare is drawn
                dayLight = 0;                   // boolean switch if the light is used during day or not
                class Attenuation {
                    start = 0;                  // offset of start of the attenuation
                    constant = 0;               // constant attenuation of the light in any distance from source
                    linear = 1;                 // coefficient for linear attenuation
                    quadratic = 1;              // coefficient for attenuation with square of distance from source
                    hardLimitStart = 100;       // distance from source where the light intensity decreases for drawing
                    hardLimitEnd = 200;         // distance from source where the light is not displayed (shorter distances increase performance)
                };
            };

            class Right: Left {
                position = "Light_R_Pos";
                direction = "Light_R_Dir";
                hitpoint = "Light_b_hitpoint";
                selection = "Light_R_Lamp";
            };
        };
    };

    class ls_vehicle_agtRaptor: ls_vehicle_agtRaptor_base {
        scope = 2;
        author = AUTHOR;
        displayName = "AGT 'Raptor'";

        side = 0;
        faction = "ls_cis";

        class TextureSources {
            class CIS {
                author = AUTHOR;
                displayName = "CIS";
                textures[] = {
                    QPATHTOF(data\camo1_co.paa),
                    QPATHTOF(data\camo2_co.paa)
                };
                factions[] = {};
            };

            class Tan: CIS {
                displayName = "Tan";
                textures[] = {
                    QPATHTOF(data\textures\tan\camo1_co.paa),
                    QPATHTOF(data\textures\tan\camo2_co.paa)
                };
            };

            class Olive: CIS {
                displayName = "Olive";
                textures[] = {
                    QPATHTOF(data\textures\olive\camo1_co.paa),
                    QPATHTOF(data\textures\olive\camo2_co.paa)
                };
            };

            class Snow: CIS {
                displayName = "Snow";
                textures[] = {
                    QPATHTOF(data\textures\snow\camo1_co.paa),
                    QPATHTOF(data\textures\snow\camo2_co.paa)
                };
            };

            class Urban: CIS {
                displayName = "Urban";
                textures[] = {
                    QPATHTOF(data\textures\urban\camo1_co.paa),
                    QPATHTOF(data\textures\urban\camo2_co.paa)
                };
            };

            class Woodland: CIS {
                displayName = "Woodland";
                textures[] = {
                    QPATHTOF(data\textures\woodland\camo1_co.paa),
                    QPATHTOF(data\textures\woodland\camo2_co.paa)
                };
            };

            class TradeFederation: CIS {
                displayName = "Trade Federation";
                textures[] = {
                    QPATHTOF(data\textures\tradefederation\camo1_co.paa),
                    QPATHTOF(data\textures\tradefederation\camo2_co.paa)
                };
            };
        };
    };

    DEPRECATED(lsd_ground_agtRaptor,ls_vehicle_agtRaptor);
};
