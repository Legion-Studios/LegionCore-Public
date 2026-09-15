#define ARMOR_VEST_OFFICER \
    class HitpointsProtectionInfo { \
        class Chest { \
            hitpointName = "HitChest"; \
            armor = 2; \
            passThrough = 0.3; \
        }; \
    }

#define ARMOR_VEST_ARC \
    class HitpointsProtectionInfo { \
        class Chest { \
            armor = 4; \
            passThrough = 0.2; \
            hitpointName = "HitChest"; \
        }; \
        class Diaphragm: Chest { \
            hitpointName = "HitDiaphragm"; \
        }; \
        class Abdomen: Chest { \
            hitpointName = "HitAbdomen"; \
        }; \
        class Legs: Chest { \
            armor = 2; \
            hitpointName = "HitLegs"; \
        }; \
        class LeftLeg: Legs { \
            hitpointName = "HitLeftLeg"; \
        }; \
        class RightLeg: Legs { \
            hitpointName = "HitRightLeg"; \
        }; \
    }
