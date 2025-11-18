#define FLAG_WAVY(type,name) \
    class DOUBLES(ls_flag,type): ls_flag_base { \
        scope = 2; \
        scopeCurator = 2; \
        author = AUTHOR; \
        displayName = QUOTE(name); \
        editorPreview = QPATHTOF(data\ui\editorPreviews\DOUBLES(ls_flag,type).jpg); \
        class EventHandlers: EventHandlers { \
            init = QUOTE((_this select 0) setFlagTexture QUOTE(QPATHTOEF(data,flags\TRIPLES(flag,type,ca.paa)))); \
        }; \
    }

class ls_flag_base: FlagCarrier {
    scope = 0;
    author = AUTHOR;

    editorCategory = "ls_edcat_statics";
    editorSubcategory = "ls_edsubcat_flags";

    class EventHandlers {
        init = "";
    };

    class SimpleObject {
        eden = 0;
        animate[] = {{"flag", 0}};
        hide[] = {};
        verticalOffset = 3.977;
        verticalOffsetWorld = 0;
        init = "";
    };
};

FLAG_WAVY(republic,Republic Flag);
FLAG_WAVY(republic_damaged,Republic Flag (Damaged));
FLAG_WAVY(republicNavy,Republic Navy Flag);
FLAG_WAVY(republicNavy_damaged,Republic Navy Flag (Damaged));
FLAG_WAVY(cis,CIS Flag);
FLAG_WAVY(cis_damaged,CIS Flag (Damaged));
FLAG_WAVY(imperial,Imperial);
FLAG_WAVY(imperial_damaged,Imperial Flag (Damaged));
FLAG_WAVY(jedi,Jedi Flag);
FLAG_WAVY(jedi_damaged,Jedi Flag (Damaged));
FLAG_WAVY(mandalorian,Mandalorian Flag);
FLAG_WAVY(mandalorian_damaged,Mandalorian Flag (Damaged));
FLAG_WAVY(rebelAlliance,Rebel Alliance Flag);
FLAG_WAVY(rebelAlliance_damaged,Rebel Alliance Flag (Damaged));
FLAG_WAVY(technoUnion,Techno Union Flag);
FLAG_WAVY(technoUnion_damaged,Techno Union Flag (Damaged));
FLAG_WAVY(tradeFederation,Trade Federation Flag);
FLAG_WAVY(tradeFederation_damaged,Trade Federation Flag (Damaged));

class ls_staticFlag_base: House_F {
    scope = 0;
    author = AUTHOR;

    editorCategory = "ls_edcat_statics";
    editorSubcategory = "ls_edsubcat_flags";

    model = "";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {};
};

// Static horizontal flags
#define FLAG_STATIC_HORIZONTAL(type,name) \
    class DOUBLES(ls_staticFlag,type): ls_staticFlag_base { \
        scope = 2; \
        scopeCurator = 2; \
        author = AUTHOR; \
        displayName = QUOTE(name); \
        model = QPATHTOF(flags\ls_horizontal_flag.p3d); \
        hiddenSelectionsTextures[] = { \
            QPATHTOEF(data,flags\TRIPLES(flag,type,ca.paa)) \
        }; \
        editorPreview = QPATHTOEF(data,flags\TRIPLES(flag,type,ca.paa)); \
    }

FLAG_STATIC_HORIZONTAL(republic,Republic Banner);
FLAG_STATIC_HORIZONTAL(republic_damaged,Republic Banner (Damaged));
FLAG_STATIC_HORIZONTAL(republicNavy,Republic Navy Banner);
FLAG_STATIC_HORIZONTAL(republicNavy_damaged,Republic Navy Banner (Damaged));
FLAG_STATIC_HORIZONTAL(cis,CIS Banner);
FLAG_STATIC_HORIZONTAL(cis_damaged,CIS Banner (Damaged));
FLAG_STATIC_HORIZONTAL(imperial,Imperial Banner);
FLAG_STATIC_HORIZONTAL(imperial_damaged,Imperial Banner (Damaged));
FLAG_STATIC_HORIZONTAL(jedi,Jedi Banner);
FLAG_STATIC_HORIZONTAL(jedi_damaged,Jedi Banner (Damaged));
FLAG_STATIC_HORIZONTAL(mandalorian,Mandalorian Banner);
FLAG_STATIC_HORIZONTAL(mandalorian_damaged,Mandalorian Banner (Damaged));
FLAG_STATIC_HORIZONTAL(rebelAlliance,Rebel Alliance Banner);
FLAG_STATIC_HORIZONTAL(rebelAlliance_damaged,Rebel Alliance Banner (Damaged));
FLAG_STATIC_HORIZONTAL(technoUnion,Techno Union Banner);
FLAG_STATIC_HORIZONTAL(technoUnion_damaged,Techno Union Banner (Damaged));
FLAG_STATIC_HORIZONTAL(tradeFederation,Trade Federation Banner);
FLAG_STATIC_HORIZONTAL(tradeFederation_damaged,Trade Federation Banner (Damaged));

#define FLAG_STATIC_VERTICAL(type,name,ending) \
    class TRIPLES(ls_staticFlag,type,vertical): ls_staticFlag_base { \
        scope = 2; \
        scopeCurator = 2; \
        author = AUTHOR; \
        displayName = QUOTE(name); \
        model = QPATHTOF(flags\ls_vertical_flag.p3d); \
        hiddenSelectionsTextures[] = { \
            QPATHTOEF(data,flags\TRIPLES(flag,type,ending).paa) \
        }; \
        editorPreview = QPATHTOEF(data,flags\TRIPLES(flag,type,ending).paa); \
    }

// Static Vertical Flags
// Some flags have unique textures, others use the same
// Third arg should be ca to use the same texture, or vertical_ca to use a vertical texture
FLAG_STATIC_VERTICAL(republic,Republic Banner (Vertical),ca);
FLAG_STATIC_VERTICAL(republic_damaged,Republic Banner (ARR_2(Damaged,Vertical)),ca);
FLAG_STATIC_VERTICAL(republicNavy,Republic Navy Banner (Vertical),ca);
FLAG_STATIC_VERTICAL(republicNavy_damaged,Republic Navy Banner (ARR_2(Damaged,Vertical)),ca);
FLAG_STATIC_VERTICAL(cis,CIS Banner (Vertical),ca);
FLAG_STATIC_VERTICAL(cis_damaged,CIS Banner (ARR_2(Damaged,Vertical)),ca);
FLAG_STATIC_VERTICAL(imperial,Imperial Banner (Vertical),ca);
FLAG_STATIC_VERTICAL(imperial_damaged,Imperial Banner (ARR_2(Damaged,Vertical)),ca);
FLAG_STATIC_VERTICAL(jedi,Jedi Banner (Vertical),vertical_ca);
FLAG_STATIC_VERTICAL(jedi_damaged,Jedi Banner (ARR_2(Damaged,Vertical)),vertical_ca);
FLAG_STATIC_VERTICAL(mandalorian,Mandalorian Banner (Vertical),vertical_ca);
FLAG_STATIC_VERTICAL(mandalorian_damaged,Mandalorian Banner (ARR_2(Damaged,Vertical)),vertical_ca);
FLAG_STATIC_VERTICAL(rebelAlliance,Rebel Alliance Banner (Vertical),vertical_ca);
FLAG_STATIC_VERTICAL(rebelAlliance_damaged,Rebel Alliance Banner (ARR_2(Damaged,Vertical)),vertical_ca);
FLAG_STATIC_VERTICAL(technoUnion,Techno Union Banner (Vertical),vertical_ca);
FLAG_STATIC_VERTICAL(technoUnion_damaged,Techno Union Banner (ARR_2(Damaged,Vertical)),vertical_ca);
FLAG_STATIC_VERTICAL(tradeFederation,Trade Federation Banner (Vertical),ca);
FLAG_STATIC_VERTICAL(tradeFederation_damaged,Trade Federation Banner (ARR_2(Damaged,Vertical)),ca);

class ls_standardFlag_republic: ls_static_base {
    scope = 2;
    author = AUTHOR;
    displayName = "Republic Standard";

    model = QPATHTOF(flags\ls_standard_flag.p3d);
    hiddenSelections[] = {"rope", "accessories", "post"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(flags\data\rope_co.paa),
        QPATHTOF(flags\data\accessories_co.paa),
        QPATHTOF(flags\data\post_co.paa)
    };
    editorPreview = QPATHTOF(data\ui\editorPreviews\ls_flag_standardRepublic.jpg);
};
