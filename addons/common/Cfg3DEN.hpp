#define CHECK_SKILL(SKILL_NAME) (getNumber (configOf _this >> QQGVAR(SKILL_NAME)))

class ctrlToolbox;

class Cfg3DEN {
    class Attributes {
        class Default;
        class Title: Default {
            class Controls {
                class Title;
            };
        };
        class GVAR(skillControl): Title {
            attributeLoad = QUOTE((_this controlsGroupCtrl 100) lbSetCurSel (0 max _value min 2));
            attributeSave = QUOTE(lbCurSel (_this controlsGroupCtrl 100));
            class Controls: Controls {
                class Title: Title {};
                class Value: ctrlToolbox {
                    idc = 100;
                    x = QUOTE(48 * GRID_3DEN_W);
                    w = QUOTE(82 * GRID_3DEN_W);
                    h = QUOTE(5  * GRID_3DEN_H);
                    rows = 1;
                    columns = 3;
                    strings[] = {
                        "None",
                        "Trained",
                        "Advanced"
                    };
                };
            };
        };
    };

    class Object {
        class AttributeCategories {
            class ls_attributes {
                displayName = QUOTE(MOD_NAME);
                collapsed = 0;

                class Attributes {
                    // ! Note, the expression only runs if the value is set in the mission.sqm.
                    // Meaning that the defaultValue here does *not* handle setting the properties for units that match the defaultValue.
                    // Those are handled in fnc_onEditableEntityAdded.
                    class ls_skill_tech {
                        displayName = "Is Tech Specialist";
                        tooltip = "Unit's skill in hacking, slicing, and working with electronic systems.";
                        property = "ls_skill_tech";

                        control = QGVAR(skillControl);
                        // %s is used as a placeholder for the property's name, so this sets the ls_skill_tech variable on the unit
                        expression = QUOTE(if (_value != CHECK_SKILL(%s)) then { _this setVariable [ARR_3('%s',_value,true)] });
                        defaultValue = QUOTE(CHECK_SKILL(tech));
                        condition = "objectBrain";
                        typeName = "NUMBER";
                    };

                    class ls_skill_pilot: ls_skill_tech {
                        displayName = "$STR_A3_c_man_pilot_f0";
                        tooltip = "Unit's skill in piloting aerial vehicles.";
                        property = "ls_skill_pilot";
                        defaultValue = QUOTE(CHECK_SKILL(pilot));
                    };

                    class ls_skill_crewman: ls_skill_tech {
                        displayName = "$STR_b_crew_f0";
                        tooltip = "Unit's skill in operating ground vehicles.";
                        property = "ls_skill_crewman";
                        defaultValue = QUOTE(CHECK_SKILL(crewman));
                    };
                };
            };
        };
    };
};
