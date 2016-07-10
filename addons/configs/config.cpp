class CfgPatches {
    class cnto_assets_configs {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F", "A3_Weapons_F"};
    };
};

#define UNIFORM_SOLDIER(name, base, paa, p3d) \
    class name : base { \
        scope = 1; \
        uniformClass = name; \
        hiddenSelectionsTextures[] = { paa }; \
        model = p3d; \
    }
#define UNIFORM(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
        class ItemInfo : ItemInfo { \
            uniformClass = name; \
        }; \
    }

#define BACKPACK(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
    }

#define VEST(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
    }

#define HEADGEAR(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
    }

class CfgVehicles {
    class B_Soldier_base_F;

    /*
     * Flecktarn Uniforms
     */
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    #define MDL \A3\characters_F\BLUFOR\b_soldier_01.p3d
    UNIFORM_SOLDIER(cnto_flecktarn_u_desert, B_Soldier_base_F, TXR(desert.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_forest, B_Soldier_base_F, TXR(forest.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_jungle, B_Soldier_base_F, TXR(jungle.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_snow, B_Soldier_base_F, TXR(snow.paa), MDL);
    #define MDL \A3\characters_F\BLUFOR\b_soldier_02.p3d
    //UNIFORM_SOLDIER(cnto_flecktarn_u_t_desert, B_Soldier_base_F, TXR(desert.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_forest, B_Soldier_base_F, TXR(forest.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_jungle, B_Soldier_base_F, TXR(jungle.paa), MDL);
    //UNIFORM_SOLDIER(cnto_flecktarn_u_t_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa), MDL);
    //UNIFORM_SOLDIER(cnto_flecktarn_u_t_snow, B_Soldier_base_F, TXR(snow.paa), MDL);
    #define MDL \A3\characters_F\BLUFOR\b_soldier_03.p3d
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_desert, B_Soldier_base_F, TXR(desert.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_forest, B_Soldier_base_F, TXR(forest.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_jungle, B_Soldier_base_F, TXR(jungle.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa), MDL);
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_snow, B_Soldier_base_F, TXR(snow.paa), MDL);

    /* ------------------------------------------- */

    class B_AssaultPack_Base;
    class B_Kitbag_Base;

    /*
     * Flecktarn Backpacks
     */
    #define TXR(path) \cnto\assets\flecktarn_backpacks\##path
    BACKPACK(cnto_flecktarn_b_ap_desert, B_AssaultPack_Base, "CNTO AssaultPack (Desert)", TXR(desert_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_forest, B_AssaultPack_Base, "CNTO AssaultPack (Forest)", TXR(forest_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_jungle, B_AssaultPack_Base, "CNTO AssaultPack (Jungle)", TXR(jungle_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_mediterranean, B_AssaultPack_Base, "CNTO AssaultPack (Mediterranean)", TXR(mediterranean_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_snow, B_AssaultPack_Base, "CNTO AssaultPack (Snow)", TXR(snow_assault.paa));

    BACKPACK(cnto_flecktarn_b_kb_desert, B_Kitbag_Base, "CNTO KitBag (Desert)", TXR(desert_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_forest, B_Kitbag_Base, "CNTO KitBag (Forest)", TXR(forest_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_jungle, B_Kitbag_Base, "CNTO KitBag (Jungle)", TXR(jungle_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_mediterranean, B_Kitbag_Base, "CNTO KitBag (Mediterranean)", TXR(mediterranean_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_snow, B_Kitbag_Base, "CNTO KitBag (Snow)", TXR(snow_kitbag.paa));
};

class CfgWeapons {
    class Uniform_Base;
    class U_B_CombatUniform_mcam : Uniform_Base { class ItemInfo; };
    class U_B_CombatUniform_mcam_tshirt : Uniform_Base { class ItemInfo; };
    class U_B_CombatUniform_mcam_vest : Uniform_Base { class ItemInfo; };

    /*
     * Flecktarn Uniforms
     */
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    UNIFORM(cnto_flecktarn_u_desert, U_B_CombatUniform_mcam, "CNTO Flecktarn (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_forest, U_B_CombatUniform_mcam, "CNTO Flecktarn (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_jungle, U_B_CombatUniform_mcam, "CNTO Flecktarn (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_mediterranean, U_B_CombatUniform_mcam, "CNTO Flecktarn (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_snow, U_B_CombatUniform_mcam, "CNTO Flecktarn (Snow)", TXR(snow.paa));

    //UNIFORM(cnto_flecktarn_u_t_desert, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_t_forest, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_t_jungle, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Jungle)", TXR(jungle.paa));
    //UNIFORM(cnto_flecktarn_u_t_mediterranean, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Mediterranean)", TXR(mediterranean.paa));
    //UNIFORM(cnto_flecktarn_u_t_snow, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Snow)", TXR(snow.paa));

    UNIFORM(cnto_flecktarn_u_r_desert, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_r_forest, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_r_jungle, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_r_mediterranean, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_r_snow, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Snow)", TXR(snow.paa));

    /* ------------------------------------------- */

    /* V_PlateCarrier1_rgr / V_PlateCarrier2_rgr have
     * hiddenSelections = {}, no {"camo"}, so use _blk */
    class V_PlateCarrier1_blk;
    class V_PlateCarrier2_blk;
    class V_PlateCarrierGL_rgr;
    class V_PlateCarrierSpec_rgr;

    /*
     * Flecktarn Vests
     */

    #define TXR(path) \cnto\assets\flecktarn_vests\##path
    VEST(cnto_flecktarn_v_l_desert, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Desert)", TXR(desert.paa));
    VEST(cnto_flecktarn_v_desert, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Desert)", TXR(desert.paa));
    VEST(cnto_flecktarn_v_h_desert, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Desert)", TXR(desert_heavy.paa));
    VEST(cnto_flecktarn_v_s_desert, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Desert)", TXR(desert_heavy.paa));

    VEST(cnto_flecktarn_v_l_forest, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Forest)", TXR(forest.paa));
    VEST(cnto_flecktarn_v_forest, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Forest)", TXR(forest.paa));
    VEST(cnto_flecktarn_v_h_forest, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Forest)", TXR(forest_heavy.paa));
    VEST(cnto_flecktarn_v_s_forest, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Forest)", TXR(forest_heavy.paa));

    VEST(cnto_flecktarn_v_l_jungle, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Jungle)", TXR(jungle.paa));
    VEST(cnto_flecktarn_v_jungle, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Jungle)", TXR(jungle.paa));
    VEST(cnto_flecktarn_v_h_jungle, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Jungle)", TXR(jungle_heavy.paa));
    VEST(cnto_flecktarn_v_s_jungle, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Jungle)", TXR(jungle_heavy.paa));

    VEST(cnto_flecktarn_v_l_mediterranean, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Mediterranean)", TXR(mediterranean.paa));
    VEST(cnto_flecktarn_v_mediterranean, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Mediterranean)", TXR(mediterranean.paa));
    VEST(cnto_flecktarn_v_h_mediterranean, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Mediterranean)", TXR(mediterranean_heavy.paa));
    VEST(cnto_flecktarn_v_s_mediterranean, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Mediterranean)", TXR(mediterranean_heavy.paa));

    VEST(cnto_flecktarn_v_l_snow, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Snow)", TXR(snow.paa));
    VEST(cnto_flecktarn_v_snow, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Snow)", TXR(snow.paa));
    VEST(cnto_flecktarn_v_h_snow, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Snow)", TXR(snow_heavy.paa));
    VEST(cnto_flecktarn_v_s_snow, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Snow)", TXR(snow_heavy.paa));

    /* ------------------------------------------- */

    class H_HelmetB;
    class H_Booniehat_khk;
    class H_Beret_blk;

    /*
     * Flecktarn Headgear
     */

    #define TXR(path) \cnto\assets\flecktarn_headgear\##path
    HEADGEAR(cnto_flecktarn_h_c_desert, H_HelmetB, "CNTO Combat Helmet (Desert)", TXR(desert_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_forest, H_HelmetB, "CNTO Combat Helmet (Forest)", TXR(forest_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_jungle, H_HelmetB, "CNTO Combat Helmet (Jungle)", TXR(jungle_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_mediterranean, H_HelmetB, "CNTO Combat Helmet (Mediterranean)", TXR(mediterranean_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_snow, H_HelmetB, "CNTO Combat Helmet (Snow)", TXR(snow_helmet.paa));

    HEADGEAR(cnto_flecktarn_h_boo_desert, H_Booniehat_khk, "CNTO Boonie Hat (Desert)", TXR(desert_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_forest, H_Booniehat_khk, "CNTO Boonie Hat (Forest)", TXR(forest_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_jungle, H_Booniehat_khk, "CNTO Boonie Hat (Jungle)", TXR(jungle_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_mediterranean, H_Booniehat_khk, "CNTO Boonie Hat (Mediterranean)", TXR(mediterranean_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_snow, H_Booniehat_khk, "CNTO Boonie Hat (Snow)", TXR(snow_boonie.paa));

    HEADGEAR(cnto_flecktarn_h_beret, H_Beret_blk, "CNTO Beret", TXR(beret.paa));
};
