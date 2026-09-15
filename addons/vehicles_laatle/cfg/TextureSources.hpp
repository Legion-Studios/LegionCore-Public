textureList[] = {
    "Standard", 1,
    "Imperial", 1,
    "Police", 1,
    "IBL", 0
};
class TextureSources {
    class Standard {
        displayname = "Standard";
        author = AUTHOR;
        textures[] = {
            QPATHTOF(data\hull_co.paa),
            QPATHTOF(data\panels_co.paa),
            QPATHTOF(data\chairs_co.paa)
        };
        factions[] = {};
    };

    class Imperial: Standard {
        displayName = "Imperial";
        textures[] = {
            QPATHTOF(data\textures\imperial\hull_co.paa),
            QPATHTOF(data\panels_co.paa),
            QPATHTOF(data\chairs_co.paa)
        };
    };

    class Police: Standard {
        displayName = "Police Cruiser";
        textures[] = {
            QPATHTOF(data\textures\police\hull_co.paa),
            QPATHTOF(data\panels_co.paa),
            QPATHTOF(data\chairs_co.paa)
        };
    };

    class IBL: Standard {
        displayname = "Imperial Black Legion";
        author = "Black Legion";
        textures[] = {
            QPATHTOF(data\textures\ibl\hull_co.paa),
            QPATHTOF(data\textures\ibl\panels_co.paa),
            QPATHTOF(data\textures\ibl\chairs_co.paa)
        };
    };
};
