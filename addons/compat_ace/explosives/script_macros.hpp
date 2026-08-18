#define DEMO_ITEMS(COUNT) \
    class TransportItems { \
        ITEM_XX(ACE_M26_Clacker,COUNT); \
        ITEM_XX(ACE_Clacker,COUNT); \
        ITEM_XX(ACE_defusalKit,COUNT); \
    }

#define ADD_DEMO_ITEMS(BACKPACK_CLASS) \
    class BACKPACK_CLASS; \
    class DOUBLES(BACKPACK_CLASS,predef_demo): BACKPACK_CLASS { \
        DEMO_ITEMS(1); \
    }
