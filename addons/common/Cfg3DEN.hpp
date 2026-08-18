#define CHECK_SKILL(SKILL_NAME) (getNumber (configOf _this >> QQGVAR(SKILL_NAME)))
#define SKILL_EXPRESSION(SKILL_NAME) (if (_value != CHECK_SKILL(SKILL_NAME)) then { [ARR_3(_this,'SKILL_NAME',_value)] call FUNC(setSkill) })

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
                        CSTRING(skill_untrained),
                        CSTRING(skill_trained),
                        CSTRING(skill_advanced)
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
                        displayName = CSTRING(skill_tech_name);
                        tooltip = CSTRING(skill_tech_tooltip);
                        property = "ls_skill_tech";

                        control = QGVAR(skillControl);
                        expression = QUOTE(SKILL_EXPRESSION(tech));
                        defaultValue = QUOTE(CHECK_SKILL(tech));
                        condition = "objectBrain";
                        typeName = "NUMBER";
                    };

                    class ls_skill_pilot: ls_skill_tech {
                        displayName = "$STR_A3_c_man_pilot_f0";
                        tooltip = CSTRING(skill_pilot_tooltip);
                        property = "ls_skill_pilot";
                        expression = QUOTE(SKILL_EXPRESSION(tech));
                        defaultValue = QUOTE(CHECK_SKILL(pilot));
                    };

                    class ls_skill_crewman: ls_skill_tech {
                        displayName = "$STR_b_crew_f0";
                        tooltip = CSTRING(skill_crewman_tooltip);
                        property = "ls_skill_crewman";
                        expression = QUOTE(SKILL_EXPRESSION(tech));
                        defaultValue = QUOTE(CHECK_SKILL(crewman));
                    };
                };
            };
        };
    };
};

#undef CHECK_SKILL
