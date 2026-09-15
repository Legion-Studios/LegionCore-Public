class CfgVehicles {
    class ls_helmet_groundHolder_base;
    HELMET_GH(CSTRING(armorer_helmet),ls_mandalorianHelmet_armorer);
    HELMET_GH(CSTRING(dinDjarin_helmet),ls_mandalorianHelmet_dinDjarin);
    HELMET_GH(CSTRING(dinDjarin_beskar_helmet),ls_mandalorianHelmet_dinDjarin_beskar);
    HELMET_GH(CSTRING(elite_helmet),ls_mandalorianHelmet_elite);
    HELMET_GH(CSTRING(executioner_helmet),ls_mandalorianHelmet_executioner);
    HELMET_GH(CSTRING(nightowl_helmet),ls_mandalorianHelmet_nightowl);
    HELMET_GH(CSTRING(stalker_helmet),ls_mandalorianHelmet_stalker);
    HELMET_GH(CSTRING(traditional_helmet),ls_mandalorianHelmet_traditional);

    class ls_indfor_unit_base;
    #include "uniforms\undersuit\CfgVehicles.hpp"
    #include "uniforms\protectorMale\CfgVehicles.hpp"
    #include "uniforms\traditionalWoman\CfgVehicles.hpp"

    #include "units\traditional\CfgVehicles.hpp"
    #include "units\deathwatch\CfgVehicles.hpp"
    #include "units\eldar\CfgVehicles.hpp"
    #include "units\ordo\CfgVehicles.hpp"
    #include "units\saxon\CfgVehicles.hpp"
    #include "units\superCommando\CfgVehicles.hpp"
    #include "units\vizsla\CfgVehicles.hpp"

    class ls_backpack_base;
    #include "backpacks\journeymanJet\CfgVehicles.hpp"
    #include "backpacks\light\CfgVehicles.hpp"
    #include "backpacks\standard\CfgVehicles.hpp"
};
