class CfgAmmo {
    class DemoCharge_Remote_Ammo;
    class ls_explosive_ammo_base: DemoCharge_Remote_Ammo {
        scope = 0;
        author = AUTHOR;

        explosionEffects = "MineNondirectionalExplosionSmall";
        craterEffects = "MineNondirectionalCraterSmall";
        whistleDist = 32;
        mineInconspicuousness = 5;
        mineTrigger = "RemoteTrigger";

        soundHit[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge.wss", 3.1622777, 1, 1500};
        soundActivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_Placement_01.wss", 1.58489, 1, 20};
        soundDeactivation[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_Deactivate_01.wss", 1.58489, 1, 20};
        soundTrigger[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_TouchOff_01.wss", 1, 1, 20};
    };

    #include "breachCharge\CfgAmmo.hpp"
    #include "demoCharge\CfgAmmo.hpp"
    #include "detpack\CfgAmmo.hpp"

    class APERSMineDispenser_Ammo;
    class APERSMineDispenser_Deploy;
    class TrainingMine_Ammo;
    #include "caltrops\CfgAmmo.hpp"
};
