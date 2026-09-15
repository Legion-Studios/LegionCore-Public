#define LEGION_ATRT(LEGION,PHASE,DRIVER_UNIT) \
    class TRIPLES(ls_vehicle_atrt,LEGION,PHASE): ls_vehicle_atrt { \
        author = AUTHOR; \
        faction = "ls_gar_legions"; \
        editorSubcategory = QUOTE(TRIPLES(ls_edsubcat_clone,LEGION,PHASE)); \
        ls_crew = QUOTE(DRIVER_UNIT); \
    }; \
    class TRIPLES(ls_vehicle_atrt_rotaryBlaster,LEGION,PHASE): ls_vehicle_atrt_rotaryBlaster { \
        author = AUTHOR; \
        faction = "ls_gar_legions"; \
        editorSubcategory = QUOTE(TRIPLES(ls_edsubcat_clone,LEGION,PHASE)); \
        ls_crew = QUOTE(DRIVER_UNIT); \
    }; \
    class TRIPLES(ls_vehicle_atrt_flamethrower,LEGION,PHASE): ls_vehicle_atrt_flamethrower { \
        author = AUTHOR; \
        faction = "ls_gar_legions"; \
        editorSubcategory = QUOTE(TRIPLES(ls_edsubcat_clone,LEGION,PHASE)); \
        ls_crew = QUOTE(DRIVER_UNIT); \
    }
