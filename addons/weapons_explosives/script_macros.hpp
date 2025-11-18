#define PLACEABLE_EXPLOSIVE(CLASS_NAME,DISPLAY_NAME) \
    class DOUBLES(ls_explosive,CLASS_NAME): MineBase { \
        scope = 2; \
        scopeCurator = 2; \
        author = AUTHOR; \
        displayName = QUOTE(DISPLAY_NAME); \
        model = QPATHTOF(CLASS_NAME\DOUBLES(ls_explosive,CLASS_NAME).p3d); \
        ammo = QUOTE(TRIPLES(ls_explosive,CLASS_NAME,ammo)); \
    }; \
    class TRIPLES(ls_explosive,CLASS_NAME,zeus): ModuleExplosive_F { \
        scopeCurator = 2; \
        author = AUTHOR; \
        icon = "iconExplosiveGP"; \
        displayName = QUOTE(DISPLAY_NAME); \
        explosive = QUOTE(TRIPLES(ls_explosive,CLASS_NAME,ammo)); \
    }
