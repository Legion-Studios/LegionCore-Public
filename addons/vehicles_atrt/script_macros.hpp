#define LEGION_ATRT(LEGION,DRIVER_UNIT) \
    class DOUBLES(ls_vehicle_atrt,41strb): ls_vehicle_atrt { \
        author = AUTHOR; \
        faction = "ls_gar_legions"; \
        editorSubcategory = QUOTE(DOUBLES(ls_edsubcat_clone,LEGION)); \
        ls_crew = QUOTE(DRIVER_UNIT); \
    }; \
    class DOUBLES(ls_vehicle_atrt_rotaryBlaster,41strb): ls_vehicle_atrt_rotaryBlaster { \
        author = AUTHOR; \
        faction = "ls_gar_legions"; \
        editorSubcategory = QUOTE(DOUBLES(ls_edsubcat_clone,LEGION)); \
        ls_crew = QUOTE(DRIVER_UNIT); \
    }; \
    class DOUBLES(ls_vehicle_atrt_flamethrower,41strb): ls_vehicle_atrt_flamethrower { \
        author = AUTHOR; \
        faction = "ls_gar_legions"; \
        editorSubcategory = QUOTE(DOUBLES(ls_edsubcat_clone,LEGION)); \
        ls_crew = QUOTE(DRIVER_UNIT); \
    }
