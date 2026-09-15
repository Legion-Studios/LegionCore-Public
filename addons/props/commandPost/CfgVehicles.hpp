

class ls_commandPost_base: House_F {
    scope = 0;
    author = AUTHOR;

    vehicleClass = "Structures";
    editorCategory = "ls_edcat_statics";
    editorSubcategory = "ls_edsubcat_commandPosts";

    model = QPATHTOF(commandPost\ls_prop_commandPost.p3d);
    hiddenSelections[] = {
        "base",
        "holocone",
        "insig_blacksun",
        "insig_cis",
        "insig_zannConsortium",
        "insig_deathwatch",
        "insig_imperial",
        "insig_jedi",
        "insig_mandalorian",
        "insig_rebel",
        "insig_republic",
        "insig_sith"
    };
    hiddenSelectionsTextures[] = {};

    armor = 10;
};

class ls_commandPost_blue_base: ls_commandPost_base {
    author = AUTHOR;
    displayName = "Command Post Base (Blue)";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {
        QPATHTOF(commandPost\data\base_co.paa),
        "#(argb,8,8,3)color(0,0,1,0.7,ca)"
    };
};

class ls_commandPost_green_base: ls_commandPost_base {
    displayName = "Command Post Base (Green)";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {
        QPATHTOF(commandPost\data\base_co.paa),
        "#(argb,8,8,3)color(0,1,0,0.7,ca)"
    };
};

class ls_commandPost_red_base: ls_commandPost_base {
    displayName = "Command Post Base (Red)";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {
        QPATHTOF(commandPost\data\base_co.paa),
        "#(argb,8,8,3)color(1,0,0,0.7,ca)"
    };
};

class ls_commandPost_yellow_base: ls_commandPost_base {
    displayName = "Command Post Base (Yellow)";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {
        QPATHTOF(commandPost\data\base_co.paa),
        "#(argb,8,8,3)color(1,1,0,0.7,ca)"
    };
};

class ls_commandPost_white_base: ls_commandPost_base {
    displayName = "Command Post Base (White)";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {
        QPATHTOF(commandPost\data\base_co.paa),
        "#(argb,8,8,3)color(1,1,1,0.7,ca)"
    };
};

#define COMMAND_POST(faction,color,name) \
    class TRIPLES(ls_commandPost,faction,color): TRIPLES(ls_commandPost,color,base) { \
        scope = 2; \
        scopeCurator = 2; \
        author = AUTHOR; \
        displayName = QUOTE(name); \
        hiddenSelections[] = { \
            "base", \
            QUOTE(DOUBLES(insig,faction)) \
        }; \
        editorPreview = QPATHTOF(data\ui\editorPreviews\TRIPLES(ls_commandPost,faction,color).jpg); \
    }

#define COMMAND_POST_COLORS(faction,name) \
    COMMAND_POST(faction,blue,name (Blue)); \
    COMMAND_POST(faction,green,name (Green)); \
    COMMAND_POST(faction,red,name (Red)); \
    COMMAND_POST(faction,yellow,name (Yellow)); \
    COMMAND_POST(faction,white,name (White))

COMMAND_POST_COLORS(blackSun,Black Sun);
COMMAND_POST_COLORS(cis,CIS);
COMMAND_POST_COLORS(zannConsortium,Zann Consortium);
COMMAND_POST_COLORS(deathwatch,Deathwatch);
COMMAND_POST_COLORS(imperial,Imperial);
COMMAND_POST_COLORS(jedi,Jedi Order);
COMMAND_POST_COLORS(mandalorian,Mandalorian);
COMMAND_POST_COLORS(rebel,Rebel Alliance);
COMMAND_POST_COLORS(republic,Republic);
COMMAND_POST_COLORS(sith,Sith Empire);
