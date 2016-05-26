class CfgPatches
{
    class cnto_assets_flecktarn_uniforms
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F", "A3_Weapons_F"};
        author[] = {"Price"};
    };
};

#include "\cnto\assets\shared\uniforms.h"

#define TXR(path) \cnto\assets\flecktarn_uniforms\##path

class CfgVehicles {
    class B_Soldier_base_F;
    UNIFORM_SOLDIER(cnto_flecktarn_arid,    B_Soldier_base_F, TXR(arid.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_meadows, B_Soldier_base_F, TXR(meadows.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_snow,    B_Soldier_base_F, TXR(snow.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_wood,    B_Soldier_base_F, TXR(wood.paa));
};

class CfgWeapons {
    class ItemInfo;
    class U_B_CombatUniform_mcam;
    UNIFORM(cnto_flecktarn_arid,    U_B_CombatUniform_mcam, "CNTO Flecktarn (Arid)",    TXR(arid.paa));
    UNIFORM(cnto_flecktarn_meadows, U_B_CombatUniform_mcam, "CNTO Flecktarn (Meadows)", TXR(meadows.paa));
    UNIFORM(cnto_flecktarn_snow,    U_B_CombatUniform_mcam, "CNTO Flecktarn (Snow)",    TXR(snow.paa));
    UNIFORM(cnto_flecktarn_wood,    U_B_CombatUniform_mcam, "CNTO Flecktarn (Wood)",    TXR(wood.paa));
};
