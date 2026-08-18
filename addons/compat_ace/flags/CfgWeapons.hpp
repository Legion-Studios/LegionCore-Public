#define FLAG_ITEM(type,name,color) \
    class TRIPLES(ls_carrierFlag,type,item): ace_flags_white { \
        author = AUTHOR; \
        displayName = QUOTE(Flag (##name##)); \
        picture = QUOTE(\z\ace\addons\flags\data\pictures\##color##_item.paa); \
        ace_flags_texture = QPATHTOEF(data,flags\TRIPLES(flag,type,ca.paa)); \
        ace_flags_carrier = QUOTE(DOUBLES(ls_carrierFlag,type)); \
        ace_flags_actionIconPlace = QUOTE(\z\ace\addons\flags\data\icons\place\##color##_place_icon.paa); \
        ace_flags_actionIconCarry = QUOTE(\z\ace\addons\flags\data\icons\carry\##color##_carry_icon.paa); \
    }

class CfgWeapons {
    class ace_flags_white;
    FLAG_ITEM(republic,Republic,red);
    FLAG_ITEM(republicNavy,Republic Navy,yellow);
    FLAG_ITEM(cis,CIS,blue);
    FLAG_ITEM(imperial,Imperial,blue);
    FLAG_ITEM(jedi,Jedi,white);
    FLAG_ITEM(mandalorian,Mandalorian,white);
    FLAG_ITEM(rebelAlliance,Rebel Alliance,white);
    FLAG_ITEM(technoUnion,Techno Union,yellow);
    FLAG_ITEM(tradeFederation,Trade Federation,blue);
};
