class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class ls_attributes {
                class Attributes {
                    class GVAR(objectMarkerEnabled) {
                        displayName = CSTRING(attributeObjectMarkerEnabled_name);
                        tooltip = CSTRING(attributeObjectMarkerEnabled_tooltip);
                        property = QGVAR(objectMarkerEnabled);
                        expression = "if (isServer) then { _this setVariable ['%s', _value, true] }";
                        control = "CheckBox";
                        defaultValue = "true";
                        condition = "script";
                        conditionScript = QUOTE((call FUNC(getIcon) select 0) != '');
                    };
                    class GVAR(objectMarkerShowName): GVAR(objectMarkerEnabled) {
                        displayName = CSTRING(attributeObjectMarkerShowName_name);
                        tooltip = CSTRING(attributeObjectMarkerShowName_tooltip);
                        property = QGVAR(objectMarkerShowName);
                    };
                };
            };
        };
    };
};
