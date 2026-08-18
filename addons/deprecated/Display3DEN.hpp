class ctrlMenuStrip;

class Display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Tools {
                    items[] += {QGVAR(replaceDeprecatedObjects)};
                };
                class GVAR(replaceDeprecatedObjects) {
                    text = "Replace Deprecated LS Objects";
                    picture = QPATHTOEF(main,data\ui\ls_logo_ca.paa);
                    action = QUOTE([] call FUNC(replaceObjects));
                };
            };
        };
    };
};
