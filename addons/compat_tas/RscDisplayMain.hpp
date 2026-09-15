// Fix 3AS deleting vanilla menus
class RscText;
class RscPicture;
class RscActivePictureKeepAspect;
class RscStandardDisplay;
class RscControlsGroupNoScrollbars;
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {
    class Controls {
        class GroupPicture: RscControlsGroupNoScrollbars {
            class Controls {
                class Picture;
                class Video;
            };
        };
        class GroupHover: RscControlsGroupNoScrollbars {
            class Controls {
                class Overlay;
                class LineLeft;
                class LineTop;
                class LineBottom;
            };
        };
        class TextBackground;
        class Text;
        class Button;
    };
};
class RscDisplayMain: RscStandardDisplay {
    class Controls {
        class BackgroundSpotlight: RscPicture  {
            show = 1;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = "0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 2 * 	(2 * pixelW)";
            y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2) - 	(2 * pixelH)";
            w = "3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW)";
            h = "(	10) * 	(pixelH * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelH)";
        };
        class BackgroundSpotlightLeft: BackgroundSpotlight {
            show = 1;
            angle = 180;
            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
            x = "safezoneX";
            y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2) - 	(2 * pixelH)";
            w = "(safezoneW - (3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW))) / 2";
            h = "(	10) * 	(pixelH * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelH)";
        };
        class BackgroundSpotlightRight: BackgroundSpotlightLeft {
            show = 1;
            angle = 0;
            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
            x = "0.5 + (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelW)";
            y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2) - 	(2 * pixelH)";
            w = "(safezoneW - (3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW))) / 2";
            h = "(	10) * 	(pixelH * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelH)";
        };
        class Spotlight1: RscMainMenuSpotlight {
            show = 1;
            idc = 1021;
            x="0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 	(2 * pixelW)";
            class Controls: Controls {
                class GroupPicture: GroupPicture {
                    class Controls: Controls {
                        class Picture: Picture {
                            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_2_ca.paa";
                        };
                        class Video: Video {
                            text = "\a3\Ui_f\Video\spotlight_2.ogv";
                        };
                    };
                };
                class GroupHover: GroupHover {
                    class Controls: Controls {
                        class Overlay: Overlay {};
                        class LineLeft: LineLeft {};
                        class LineTop: LineTop {
                            text = "$STR_A3_RscDisplayMain_Spotlight_Open";
                        };
                        class LineBottom: LineBottom {};
                    };
                };
                class TextBackground: TextBackground {};
                class Text: Text {
                    text = "$STR_A3_RscDisplayMain_GroupMultiplayer_QuickPlay_text";
                };
                class Button: Button {};
            };
        };
        class Spotlight2: RscText {
            show = 0;
            idc = 1020;
            x = "0.5 - (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2)";
            y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
            w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
            h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
        };
        class Spotlight3: RscMainMenuSpotlight {
            show = 1;
            idc = 1022;
            x = "0.5 + (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 	(2 * pixelW)";
            y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
            w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
            h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
            class Controls: Controls {
                class GroupPicture: GroupPicture {
                    class Controls: Controls {
                        class Picture: Picture {
                            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_3_ca.paa";
                        };
                        class Video: Video {
                            text = "\a3\Ui_f\Video\spotlight3.ogv";
                        };
                    };
                };
                class GroupHover: GroupHover {
                    class Controls: Controls {
                        class Overlay: Overlay {};
                        class LineLeft: LineLeft {};
                        class LineTop: LineTop {
                            text = "$STR_A3_RscDisplayMain_Spotlight_Create";
                        };
                        class LineBottom: LineBottom {};
                    };
                };
                class TextBackground: TextBackground {};
                class Text: Text {
                    text = "$STR_A3_RscDisplayMain_ButtonEditor";
                };
                class Button: Button {};
            };
        };
        class SpotLightPrev: RscActivePictureKeepAspect {
            show = 1;
        };
        class SpotlightNext: SpotLightPrev {
            show = 1;
        };
    };
};

// 3AS breaks inheritance for SplashArma3Apex
class RscTitles {
    class SplashArma3 {
        class Picture;
    };
    class SplashArma3Apex: SplashArma3 {
        class Picture: Picture {
            idc = 1200;
            onLoad = "";
            x = "0.5 - 10 * 		(0.01875 * SafezoneH)";
            y = "0.5 - 7 * 		(0.025 * SafezoneH)";
            w = "20 * 		(0.01875 * SafezoneH)";
            h = "10 * 		(0.025 * SafezoneH)";
        };
    };
};
