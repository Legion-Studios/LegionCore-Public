class Cfg3DEN {
    class Attributes {
        class Default;
        class Title: Default {
            class Controls;
        };
        class Type: Title {
            class Controls: Controls {
                class Title;
                class Value;
                class Search;
                class SearchButton;
            };
        };
        class Combo: Title {
            class Controls: Controls {
                class Title;
                class Value;
            };
        };

        class GVAR(tree): Type {
            attributeSave = QUOTE(call FUNC(3DEN_tvSave));
            attributeLoad = QUOTE(call FUNC(3DEN_tvLoad));
            class Controls: Controls {
                class Title: Title {};
                class Value: Value {};
                class Search: Search {};
                class SearchButton: SearchButton {};
            };
        };

        class GVAR(dispenserGroup): GVAR(tree) {
            class Controls: Controls {
                class Title: Title {};
                class Value: Value {
                    onLoad = QUOTE(call FUNC(populateDispenserGroups));
                };
                class Search: Search {};
                class SearchButton: SearchButton {};
            };
        };

        class GVAR(vehicleTypes): GVAR(tree) {
            class Controls: Controls {
                class Title: Title {};
                class Value: Value {
                    multiSelectEnabled = 1;
                    onLoad = QUOTE(call FUNC(populateVehicleTypes));
                };
                class Search: Search {};
                class SearchButton: SearchButton {};
            };
        };
        class GVAR(airVehicleTypes): GVAR(vehicleTypes) {
            class Controls: Controls {
                class Title: Title {};
                class Value: Value {
                    onLoad = QUOTE([ARR_2(_this select 0,'air')] call FUNC(populateVehicleTypes));
                };
                class Search: Search {};
                class SearchButton: SearchButton {};
            };
        };

        class lsb_modules_spaceDebrisPreset: Combo {
            class Controls: Controls {
                class Title: Title {};
                class Value: Value {
                    onLoad = QUOTE(call (uiNamespace getVariable QQFUNC(3DEN_spaceDebrisPresetOnLoad)));
                };
            };
        };

        class lsb_modules_distribution: Combo {
            class Controls: Controls {
                class Title: Title {};
                class Value: Value {
                    onLoad = QUOTE(call (uiNamespace getVariable QQFUNC(3DEN_distributionOnLoad)));
                };
            };
        };
    };
};
