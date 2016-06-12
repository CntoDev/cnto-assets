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

#define VEST(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelections[] += {"camo"}; \
        hiddenSelectionsTextures[] =  { paa }; \
        class ItemInfo : ItemInfo { \
            hiddenSelections[] += {"camo"}; \
        }; \
    }

class CfgVehicles {
    class B_Soldier_base_F;

    /*
     * Flecktarn Uniforms
     */
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    UNIFORM_SOLDIER(cnto_flecktarn_u_desert, B_Soldier_base_F, TXR(desert.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_forest, B_Soldier_base_F, TXR(forest.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_jungle, B_Soldier_base_F, TXR(jungle.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_snow, B_Soldier_base_F, TXR(snow.paa));
};

class CfgWeapons {
    class Uniform_Base;
    class U_B_CombatUniform_mcam : Uniform_Base { class ItemInfo; };

    /*
     * Flecktarn Uniforms
     */
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    UNIFORM(cnto_flecktarn_u_desert, U_B_CombatUniform_mcam, "CNTO Flecktarn (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_forest, U_B_CombatUniform_mcam, "CNTO Flecktarn (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_jungle, U_B_CombatUniform_mcam, "CNTO Flecktarn (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_mediterranean, U_B_CombatUniform_mcam, "CNTO Flecktarn (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_snow, U_B_CombatUniform_mcam, "CNTO Flecktarn (Snow)", TXR(snow.paa));

    class Vest_NoCamo_Base;
    class V_PlateCarrier1_rgr : Vest_NoCamo_Base { class ItemInfo; };
    class V_PlateCarrier2_rgr : V_PlateCarrier1_rgr { class ItemInfo; };
    class V_PlateCarrierGL_rgr : Vest_NoCamo_Base { class ItemInfo; };
    class V_PlateCarrierSpec_rgr : Vest_NoCamo_Base { class ItemInfo; };

    /*
     * Flecktarn Vests
     */

    #define TXR(path) \cnto\assets\flecktarn_vests\##path
    VEST(cnto_flecktarn_v_l_desert, V_PlateCarrier1_rgr, "CNTO Flecktarn Carrier Lite (Desert)", TXR(desert.paa));
    VEST(cnto_flecktarn_v_desert, V_PlateCarrier2_rgr, "CNTO Flecktarn Carrier (Desert)", TXR(desert.paa));
    VEST(cnto_flecktarn_v_h_desert, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Desert)", TXR(desert_heavy.paa));
    VEST(cnto_flecktarn_v_s_desert, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Desert)", TXR(desert_heavy.paa));

    VEST(cnto_flecktarn_v_l_forest, V_PlateCarrier1_rgr, "CNTO Flecktarn Carrier Lite (Forest)", TXR(forest.paa));
    VEST(cnto_flecktarn_v_forest, V_PlateCarrier2_rgr, "CNTO Flecktarn Carrier (Forest)", TXR(forest.paa));
    VEST(cnto_flecktarn_v_h_forest, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Forest)", TXR(forest_heavy.paa));
    VEST(cnto_flecktarn_v_s_forest, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Forest)", TXR(forest_heavy.paa));

    VEST(cnto_flecktarn_v_l_jungle, V_PlateCarrier1_rgr, "CNTO Flecktarn Carrier Lite (Jungle)", TXR(jungle.paa));
    VEST(cnto_flecktarn_v_jungle, V_PlateCarrier2_rgr, "CNTO Flecktarn Carrier (Jungle)", TXR(jungle.paa));
    VEST(cnto_flecktarn_v_h_jungle, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Jungle)", TXR(jungle_heavy.paa));
    VEST(cnto_flecktarn_v_s_jungle, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Jungle)", TXR(jungle_heavy.paa));

    VEST(cnto_flecktarn_v_l_mediterranean, V_PlateCarrier1_rgr, "CNTO Flecktarn Carrier Lite (Mediterranean)", TXR(mediterranean.paa));
    VEST(cnto_flecktarn_v_mediterranean, V_PlateCarrier2_rgr, "CNTO Flecktarn Carrier (Mediterranean)", TXR(mediterranean.paa));
    VEST(cnto_flecktarn_v_h_mediterranean, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Mediterranean)", TXR(mediterranean_heavy.paa));
    VEST(cnto_flecktarn_v_s_mediterranean, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Mediterranean)", TXR(mediterranean_heavy.paa));

    VEST(cnto_flecktarn_v_l_snow, V_PlateCarrier1_rgr, "CNTO Flecktarn Carrier Lite (Snow)", TXR(snow.paa));
    VEST(cnto_flecktarn_v_snow, V_PlateCarrier2_rgr, "CNTO Flecktarn Carrier (Snow)", TXR(snow.paa));
    VEST(cnto_flecktarn_v_h_snow, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Snow)", TXR(snow_heavy.paa));
    VEST(cnto_flecktarn_v_s_snow, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Snow)", TXR(snow_heavy.paa));
};
