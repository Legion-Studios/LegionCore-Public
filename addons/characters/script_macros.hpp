// Shouldn't cause issues if added when ACE isn't loaded
// https://github.com/acemod/ACE3/blob/master/addons/medical_engine/script_macros_config.hpp
#define ADD_ACE_HITPOINTS \
    class HitLeftArm: HitHands { \
        material = -1; \
        name = "hand_l"; \
        radius = 0.08; \
        visual = "injury_hands"; \
        minimalHit = 0.01; \
    }; \
    class HitRightArm: HitLeftArm { \
        name = "hand_r"; \
    }; \
    class HitLeftLeg: HitLegs { \
        material = -1; \
        name = "leg_l"; \
        radius = 0.1; \
        visual = "injury_legs"; \
        minimalHit = 0.01; \
    }; \
    class HitRightLeg: HitLeftLeg { \
        name = "leg_r"; \
    }

#define ARMOR_HELMET_NONE \
    class HitpointsProtectionInfo { \
        class Head { \
            hitpointName = "HitHead"; \
            armor = 0; \
            passThrough = 1; \
        }; \
    }

#define ARMOR_VEST_NONE \
    class HitpointsProtectionInfo { \
        class Body { \
            hitpointName = "HitBody"; \
            armor = 0; \
            passThrough = 1; \
        }; \
    }
