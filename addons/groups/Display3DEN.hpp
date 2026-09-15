class ctrlMenuStrip;

class Display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Tools {
                    items[] += {QGVAR(exportComposition)};
                };
                class GVAR(exportComposition) {
                    text = "Export Composition to Config";
                    picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
                    action = QUOTE([] call FUNC(exportComposition));
                };
            };
        };
    };
};
