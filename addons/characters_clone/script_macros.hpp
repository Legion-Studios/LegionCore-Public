#define LIGHTING_P1_HEADLAMP \
    class ls_lighting { \
        enabled = 1; \
        lightModes[] = { \
            QEGVAR(lighting,whiteHigh), QEGVAR(lighting,whiteLow), \
            QEGVAR(lighting,redHigh), QEGVAR(lighting,redLow), \
            QEGVAR(lighting,blueHigh), QEGVAR(lighting,blueLow) \
        }; \
        soundOn = QEGVAR(lighting,activationRepublic); \
        soundOff = QEGVAR(lighting,deactivationRepublic); \
        soundToggle = QEGVAR(lighting,toggle); \
        sources[] = {"right"}; \
        class left { \
            attachBone = "head"; \
            attachBoneFollow = 1; \
            attachOffset[] = {-0.175, -0.001, 0.135}; \
            attachVectorDir[] = {0, 0, 0}; \
            attachVectorUp[] = {0, 0, 0}; \
        }; \
        class right: left { \
            attachOffset[] = {0.05, -0.001, 0.135}; \
        }; \
    }

#define LIGHTING_P2_HEADLAMP \
    class ls_lighting { \
        enabled = 1; \
        lightModes[] = { \
            QEGVAR(lighting,whiteHigh), QEGVAR(lighting,whiteLow), \
            QEGVAR(lighting,redHigh), QEGVAR(lighting,redLow), \
            QEGVAR(lighting,blueHigh), QEGVAR(lighting,blueLow) \
        }; \
        soundOn = QEGVAR(lighting,activationRepublic); \
        soundOff = QEGVAR(lighting,deactivationRepublic); \
        soundToggle = QEGVAR(lighting,toggle); \
        sources[] = {"left"}; \
        class left { \
            attachBone = "head"; \
            attachBoneFollow = 1; \
            attachOffset[] = {-0.175, -0.001, 0.135}; \
            attachVectorDir[] = {0, 0, 0}; \
            attachVectorUp[] = {0, 0, 0}; \
        }; \
        class right: left { \
            attachOffset[] = {0.05, -0.001, 0.135}; \
        }; \
    }
