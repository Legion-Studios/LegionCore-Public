class CfgVehicles {
    #define FLAG_CARRIER(type,name) \
        class DOUBLES(ls_carrierFlag,type): ls_carrierFlag_base { \
            scope = 1; \
            author = AUTHOR; \
            displayName = QUOTE(name); \
        }

    class ace_flags_carrier_white;
    class ls_carrierFlag_base: ace_flags_carrier_white  {
        scope = 0;
        scopeCurator = 0;
        author = AUTHOR;

        editorCategory = "ls_edcat_statics";
        editorSubcategory = "ls_edsubcat_flags";
    };

    FLAG_CARRIER(republic,Republic Flag);
    FLAG_CARRIER(republicNavy,Republic Navy Flag);
    FLAG_CARRIER(cis,CIS Flag);
    FLAG_CARRIER(imperial,Imperial);
    FLAG_CARRIER(jedi,Jedi Flag);
    FLAG_CARRIER(jedi_damaged,Jedi Flag (Damaged));
    FLAG_CARRIER(mandalorian,Mandalorian Flag);
    FLAG_CARRIER(rebelAlliance,Rebel Alliance Flag);
    FLAG_CARRIER(technoUnion,Techno Union Flag);
    FLAG_CARRIER(tradeFederation,Trade Federation Flag);
};
