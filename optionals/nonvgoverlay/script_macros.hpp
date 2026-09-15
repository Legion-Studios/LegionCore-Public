#define REMOVE_OVERLAY(NVG_CLASS, PARENT_CLASS) \
    class NVG_CLASS: PARENT_CLASS { \
        modelOptics = QPATHTOEF(characters,equipment\nvg\ls_optic_dummy.p3d); \
        ace_nightvision_border = ""; \
    }
