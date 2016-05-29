class CfgPatches {
    class cnto_assets_configs {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F", "A3_Weapons_F"};
    };
};

#define UNIFORM_SOLDIER(name, base, paa) \
    class name : base { \
        scope = 1; \
        uniformClass = name; \
        hiddenSelections[] += {"camo"}; \
        hiddenSelectionsTextures[] = { paa }; \
    }
#define UNIFORM(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelections[] += {"camo"}; \
        hiddenSelectionsTextures[] =  { paa }; \
        class ItemInfo : ItemInfo { \
            uniformClass = name; \
        }; \
    }

class CfgVehicles {
    class B_Soldier_base_F;
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    UNIFORM_SOLDIER(cnto_flecktarn_arid, B_Soldier_base_F, TXR(arid.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_med,  B_Soldier_base_F, TXR(med.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_snow, B_Soldier_base_F, TXR(snow.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_wood, B_Soldier_base_F, TXR(wood.paa));
};

class CfgWeapons {
    class ItemInfo;
    class U_B_CombatUniform_mcam;
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    UNIFORM(cnto_flecktarn_arid, U_B_CombatUniform_mcam, "CNTO Flecktarn (Arid)",          TXR(arid.paa));
    UNIFORM(cnto_flecktarn_med,  U_B_CombatUniform_mcam, "CNTO Flecktarn (Mediterranean)", TXR(med.paa));
    UNIFORM(cnto_flecktarn_snow, U_B_CombatUniform_mcam, "CNTO Flecktarn (Snow)",          TXR(snow.paa));
    UNIFORM(cnto_flecktarn_wood, U_B_CombatUniform_mcam, "CNTO Flecktarn (Wood)",          TXR(wood.paa));
};
