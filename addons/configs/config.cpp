class CfgPatches {
    class cnto_assets {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Weapons_F",
            "rhs_c_troops",
            "A3_Soft_F_Beta_MRAP_03",  // MRAP_03_base_F
            "A3_Armor_F_EPB_MBT_03"    // MBT_03_base_F
        };
    };
};

#define COMMA ,

#define UNIFORM_SOLDIER(name, base, paas) \
    class name : base { \
        scope = 1; \
        uniformClass = name; \
        model = MDL; \
        hiddenSelections[] = { MDL_SEL }; \
        hiddenSelectionsTextures[] = { paas }; \
        modelSides[] = {3,2,1,0}; \
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

#define FACEWEAR(name, base, text, paa) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelectionsTextures[] = { paa }; \
    }

#define INSIGNIA(name, text, paa) \
    class name { \
        displayName = text; \
        texture = paa; \
        textureVehicle = ""; \
    }

#define VEHCAMO(veh, base, name, text, paas) \
    class veh : base { \
        class TextureSources { \
            class name { \
                displayName = text; \
                textures[] = { \
                    paas \
                }; \
            }; \
        }; \
    }


class CfgVehicles {
    class B_Soldier_base_F;

    #define MDL_BLU         \A3\characters_F\BLUFOR\b_soldier_01.p3d
    #define MDL_BLU_TEE     \A3\characters_F\BLUFOR\b_soldier_02.p3d
    #define MDL_BLU_RECON   \A3\characters_F\BLUFOR\b_soldier_03.p3d
    #define MDL_BLU_STEALTH \A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d

    /*
     * Flecktarn Uniforms
     */
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path COMMA
    #define MDL MDL_BLU
    #define MDL_SEL "camo","insignia"
    UNIFORM_SOLDIER(cnto_flecktarn_u_desert, B_Soldier_base_F, TXR(desert.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_forest, B_Soldier_base_F, TXR(forest.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_jungle, B_Soldier_base_F, TXR(jungle.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_snow, B_Soldier_base_F, TXR(snow.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_grassland, B_Soldier_base_F, TXR(grassland.paa));
    #define MDL MDL_BLU_TEE
    #define MDL_SEL "camo","camo2"
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_desert, B_Soldier_base_F, TXR(desert.paa) TXR(desert_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_forest, B_Soldier_base_F, TXR(forest.paa) TXR(forest_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_jungle, B_Soldier_base_F, TXR(jungle.paa) TXR(jungle_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa) TXR(mediterranean_shirt.paa));
    //UNIFORM_SOLDIER(cnto_flecktarn_u_t_snow, B_Soldier_base_F, TXR(snow.paa) TXR(snow_shirt.paa));
    #define MDL MDL_BLU_RECON
    #define MDL_SEL "camo","insignia"
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_desert, B_Soldier_base_F, TXR(desert.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_forest, B_Soldier_base_F, TXR(forest.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_jungle, B_Soldier_base_F, TXR(jungle.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_snow, B_Soldier_base_F, TXR(snow.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_grassland, B_Soldier_base_F, TXR(grassland.paa));

    /*
     * Urban Uniforms
     */
    #define TXR(path) \cnto\assets\urban_uniforms\##path COMMA
    #define MDL MDL_BLU
    #define MDL_SEL "camo","insignia"
    UNIFORM_SOLDIER(cnto_urban_u_m90, B_Soldier_base_F, TXR(m90.paa));
    UNIFORM_SOLDIER(cnto_urban_u_m90_crew, B_Soldier_base_F, TXR(m90_crew.paa));
    #define MDL MDL_BLU_TEE
    #define MDL_SEL "camo","camo2"
    UNIFORM_SOLDIER(cnto_urban_u_t_m90, B_Soldier_base_F, TXR(m90.paa) TXR(m90_shirt.paa));
    #define MDL MDL_BLU_RECON
    #define MDL_SEL "camo","insignia"
    UNIFORM_SOLDIER(cnto_urban_u_r_m90, B_Soldier_base_F, TXR(m90.paa));
    UNIFORM_SOLDIER(cnto_urban_u_r_m90_crew, B_Soldier_base_F, TXR(m90_crew.paa));
    #define MDL MDL_BLU_STEALTH
    #define MDL_SEL "camo","insignia"
    UNIFORM_SOLDIER(cnto_urban_u_s_m90, B_Soldier_base_F, TXR(m90.paa));

    /* ------------------------------------------- */

    class B_AssaultPack_Base;
    class B_Kitbag_Base;
    class B_Carryall_Base;

    /*
     * Vanilla Backpacks (hidden/unused textures)
     */
    BACKPACK(cnto_vanilla_kitbag_blk, B_Kitbag_Base, "Kitbag (Black)", \A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa);
    BACKPACK(cnto_vanilla_carryall_blk, B_Carryall_Base, "Carryall Backpack (Black)", \A3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa);

    BACKPACK(cnto_carryall_white, B_Carryall_Base, "Carryall Backpack (White)", \cnto\assets\misc\snow_carryall.paa);

    /*
     * Flecktarn Backpacks
     */
    #define TXR(path) \cnto\assets\flecktarn_backpacks\##path
    BACKPACK(cnto_flecktarn_b_ap_desert, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Desert)", TXR(desert_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_forest, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Forest)", TXR(forest_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_jungle, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Jungle)", TXR(jungle_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_mediterranean, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Mediterranean)", TXR(mediterranean_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_snow, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Snow)", TXR(snow_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_grassland, B_AssaultPack_Base, "CNTO Flecktarn AssaultPack (Grassland)", TXR(grassland_assault.paa));

    BACKPACK(cnto_flecktarn_b_kb_desert, B_Kitbag_Base, "CNTO Flecktarn KitBag (Desert)", TXR(desert_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_forest, B_Kitbag_Base, "CNTO Flecktarn KitBag (Forest)", TXR(forest_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_jungle, B_Kitbag_Base, "CNTO Flecktarn KitBag (Jungle)", TXR(jungle_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_mediterranean, B_Kitbag_Base, "CNTO Flecktarn KitBag (Mediterranean)", TXR(mediterranean_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_snow, B_Kitbag_Base, "CNTO Flecktarn KitBag (Snow)", TXR(snow_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_grassland, B_Kitbag_Base, "CNTO Flecktarn KitBag (Grassland)", TXR(grassland_kitbag.paa));

    /* ------------------------------------------- */

    class Car_F;
    class Tank_F;
    class Wheeled_APC_F;

    /*
     * Euro-themed vehicle skins
     */
    #define TXR(path) \cnto\assets\urban_vehicles\##path COMMA
    /* Strider MRAP (Fennek) */
    VEHCAMO(MRAP_03_base_F, Car_F, cnto_urban, "CNTO Urban",
        TXR(strider_body.paa)
        TXR(strider_turret.paa)
    );
    /* Kuma MBT (Leopard) */
    VEHCAMO(MBT_03_base_F, Tank_F, cnto_urban, "CNTO Urban",
        TXR(kuma_body.paa)
        TXR(kuma_gun.paa)
        TXR(kuma_turret.paa)
    );
    /* Marid APC */
    VEHCAMO(APC_Wheeled_02_base_F, Wheeled_APC_F, cnto_urban, "CNTO Urban",
        TXR(marid_body.paa)
        TXR(marid_wheels.paa)
        TXR(marid_turret.paa)
    );
};

class CfgWeapons {
    class Uniform_Base;
    class U_B_CombatUniform_mcam : Uniform_Base { class ItemInfo; };
    class U_B_CombatUniform_mcam_tshirt : Uniform_Base { class ItemInfo; };
    class U_B_CombatUniform_mcam_vest : Uniform_Base { class ItemInfo; };
    class U_B_CTRG_Soldier_F : Uniform_Base { class ItemInfo; };

    /*
     * Flecktarn Uniforms
     */
    #define TXR(path) \cnto\assets\flecktarn_uniforms\##path
    UNIFORM(cnto_flecktarn_u_desert, U_B_CombatUniform_mcam, "CNTO Flecktarn (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_forest, U_B_CombatUniform_mcam, "CNTO Flecktarn (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_jungle, U_B_CombatUniform_mcam, "CNTO Flecktarn (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_mediterranean, U_B_CombatUniform_mcam, "CNTO Flecktarn (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_snow, U_B_CombatUniform_mcam, "CNTO Flecktarn (Snow)", TXR(snow.paa));
    UNIFORM(cnto_flecktarn_u_grassland, U_B_CombatUniform_mcam, "CNTO Flecktarn (Grassland)", TXR(grassland.paa));

    UNIFORM(cnto_flecktarn_u_t_desert, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_t_forest, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_t_jungle, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_t_mediterranean, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Mediterranean)", TXR(mediterranean.paa));
    //UNIFORM(cnto_flecktarn_u_t_snow, U_B_CombatUniform_mcam_tshirt, "CNTO Flecktarn Tee (Snow)", TXR(snow.paa));

    UNIFORM(cnto_flecktarn_u_r_desert, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_r_forest, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_r_jungle, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_r_mediterranean, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_r_snow, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Snow)", TXR(snow.paa));
    UNIFORM(cnto_flecktarn_u_r_grassland, U_B_CombatUniform_mcam_vest, "CNTO Flecktarn Recon (Grassland)", TXR(grassland.paa));

    /*
     * Urban Uniforms
     */
    #define TXR(path) \cnto\assets\urban_uniforms\##path
    UNIFORM(cnto_urban_u_m90, U_B_CombatUniform_mcam, "CNTO Urban", TXR(m90.paa));
    UNIFORM(cnto_urban_u_m90_crew, U_B_CombatUniform_mcam, "CNTO Urban (crew)", TXR(m90_crew.paa));

    UNIFORM(cnto_urban_u_t_m90, U_B_CombatUniform_mcam_tshirt, "CNTO Urban Tee", TXR(m90.paa));

    UNIFORM(cnto_urban_u_r_m90, U_B_CombatUniform_mcam_vest, "CNTO Urban Recon", TXR(m90.paa));
    UNIFORM(cnto_urban_u_r_m90_crew, U_B_CombatUniform_mcam_vest, "CNTO Urban Recon (crew)", TXR(m90_crew.paa));

    UNIFORM(cnto_urban_u_s_m90, U_B_CTRG_Soldier_F, "CNTO Urban Stealth", TXR(m90.paa));

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

    VEST(cnto_flecktarn_v_l_grassland, V_PlateCarrier1_blk, "CNTO Flecktarn Carrier Lite (Grassland)", TXR(grassland.paa));
    VEST(cnto_flecktarn_v_grassland, V_PlateCarrier2_blk, "CNTO Flecktarn Carrier (Grassland)", TXR(grassland.paa));
    VEST(cnto_flecktarn_v_h_grassland, V_PlateCarrierGL_rgr, "CNTO Flecktarn Carrier Heavy (Grassland)", TXR(grassland_heavy.paa));
    VEST(cnto_flecktarn_v_s_grassland, V_PlateCarrierSpec_rgr, "CNTO Flecktarn Carrier Special (Grassland)", TXR(grassland_heavy.paa));

    /*
     * Urban Vests
     */

    #define TXR(path) \cnto\assets\urban_vests\##path
    VEST(cnto_urban_v_l_m90, V_PlateCarrier1_blk, "CNTO Urban Carrier Lite (M90)", TXR(m90.paa));
    VEST(cnto_urban_v_m90, V_PlateCarrier2_blk, "CNTO Urban Carrier (M90)", TXR(m90.paa));
    VEST(cnto_urban_v_h_m90, V_PlateCarrierGL_rgr, "CNTO Urban Carrier Heavy (M90)", TXR(m90_heavy.paa));
    VEST(cnto_urban_v_s_m90, V_PlateCarrierSpec_rgr, "CNTO Urban Carrier Special (M90)", TXR(m90_heavy.paa));

    /* ------------------------------------------- */

    class H_HelmetB;
    class H_Booniehat_khk;
    class H_Beret_blk;
    class rhs_6b27m;
    class rhs_6b27m_ess;
    //class rhs_6b47;
    //class rhs_6b47_ess;

    /*
     * Flecktarn Headgear
     */

    #define TXR(path) \cnto\assets\flecktarn_headgear\##path
    HEADGEAR(cnto_flecktarn_h_c_desert, H_HelmetB, "CNTO Flecktarn Combat Helmet (Desert)", TXR(desert_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_forest, H_HelmetB, "CNTO Flecktarn Combat Helmet (Forest)", TXR(forest_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_jungle, H_HelmetB, "CNTO Flecktarn Combat Helmet (Jungle)", TXR(jungle_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_mediterranean, H_HelmetB, "CNTO Flecktarn Combat Helmet (Mediterranean)", TXR(mediterranean_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_snow, H_HelmetB, "CNTO Flecktarn Combat Helmet (Snow)", TXR(snow_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_grassland, H_HelmetB, "CNTO Flecktarn Combat Helmet (Grassland)", TXR(grassland_helmet.paa));

    HEADGEAR(cnto_flecktarn_h_boo_desert, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Desert)", TXR(desert_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_forest, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Forest)", TXR(forest_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_jungle, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Jungle)", TXR(jungle_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_mediterranean, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Mediterranean)", TXR(mediterranean_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_snow, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Snow)", TXR(snow_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_grassland, H_Booniehat_khk, "CNTO Flecktarn Boonie Hat (Grassland)", TXR(grassland_boonie.paa));

    HEADGEAR(cnto_flecktarn_h_beret, H_Beret_blk, "CNTO Beret", TXR(beret.paa));

    HEADGEAR(cnto_flecktarn_h_6b27m_desert, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Desert)", TXR(desert_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_forest, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Forest)", TXR(forest_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_jungle, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Jungle)", TXR(jungle_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_mediterranean, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Mediterranean)", TXR(mediterranean_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_snow, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Snow)", TXR(snow_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27m_grassland, rhs_6b27m, "CNTO Flecktarn 6b27m Helmet (Grassland)", TXR(grassland_6b27m.paa));

    HEADGEAR(cnto_flecktarn_h_6b27me_desert, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Desert)", TXR(desert_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_forest, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Forest)", TXR(forest_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_jungle, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Jungle)", TXR(jungle_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_mediterranean, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Mediterranean)", TXR(mediterranean_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_snow, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Snow)", TXR(snow_6b27m.paa));
    HEADGEAR(cnto_flecktarn_h_6b27me_grassland, rhs_6b27m_ess, "CNTO Flecktarn 6b27m Helmet ESS (Grassland)", TXR(grassland_6b27m.paa));

    //HEADGEAR(cnto_flecktarn_h_6b47_grassland, rhs_6b27m, "CNTO Flecktarn 6b47 Helmet (Grassland)", TXR(grassland_6b47.paa));
    //HEADGEAR(cnto_flecktarn_h_6b47e_grassland, rhs_6b47_ess, "CNTO Flecktarn 6b47 Helmet ESS (Grassland)", TXR(grassland_6b47.paa));
};

class CfgGlasses {
    class rhs_balaclava;
    class G_Bandanna_blk;

    /*
     * Flecktarn Facewear
     */
    #define TXR(path) \cnto\assets\flecktarn_facewear\##path
    FACEWEAR(cnto_flecktarn_f_bala_desert, rhs_balaclava, "CNTO Flecktarn Balaclava (Desert)", TXR(balaclava_desert));
    FACEWEAR(cnto_flecktarn_f_bala_forest, rhs_balaclava, "CNTO Flecktarn Balaclava (Forest)", TXR(balaclava_forest));
    FACEWEAR(cnto_flecktarn_f_bala_jungle, rhs_balaclava, "CNTO Flecktarn Balaclava (Jungle)", TXR(balaclava_jungle));
    FACEWEAR(cnto_flecktarn_f_bala_mediterranean, rhs_balaclava, "CNTO Flecktarn Balaclava (Mediterranean)", TXR(balaclava_mediterranean));
    FACEWEAR(cnto_flecktarn_f_bala_snow, rhs_balaclava, "CNTO Flecktarn Balaclava (Snow)", TXR(balaclava_snow));

    FACEWEAR(cnto_flecktarn_f_band_snow, G_Bandanna_blk, "CNTO Bandana (Snow)", TXR(bandana_snow));
    FACEWEAR(cnto_flecktarn_f_band_owl1, G_Bandanna_blk, "CNTO Bandana (Owl 1)", TXR(bandana_owl1));
    FACEWEAR(cnto_flecktarn_f_band_owl2, G_Bandanna_blk, "CNTO Bandana (Owl 2)", TXR(bandana_owl2));
};

class CfgUnitInsignia {
    /*
     * BiBo's flags (worn only)
     * http://arma.rocketspeak.de
     * https://steamcommunity.com/sharedfiles/filedetails/?id=654816931
     */
    #define TXR(path) \cnto\assets\country_flags\##path
    INSIGNIA(AUTFlagW, "Austrian Flag", TXR(AUTFlagW.paa));
    INSIGNIA(BELFlagW, "Belgian Flag", TXR(BELFlagW.paa));
    INSIGNIA(BGFlagW, "Bulgarian Flag", TXR(BGFlagW.paa));
    INSIGNIA(BYFlagW, "Belarusian Flag", TXR(BYFlagW.paa));
    INSIGNIA(CYFlagW, "Cyprus Flag", TXR(CYFlagW.paa));
    INSIGNIA(CZFlagW, "Czech Flag", TXR(CZFlagW.paa));
    INSIGNIA(DANFlagW, "Danish Flag", TXR(DANFlagW.paa));
    INSIGNIA(DUFlagW, "Dutch Flag", TXR(DUFlagW.paa));
    INSIGNIA(ESFlagW, "Spanish Flag", TXR(ESFlagW.paa));
    INSIGNIA(ESTFlagW, "Estonian Flag", TXR(ESTFlagW.paa));
    INSIGNIA(EUFlagW, "European Flag", TXR(EUFlagW.paa));
    INSIGNIA(FIFlagW, "Finnish Flag", TXR(FIFlagW.paa));
    INSIGNIA(FRFlagW, "French Flag", TXR(FRFlagW.paa));
    INSIGNIA(GBFlagW, "UK Flag", TXR(GBFlagW.paa));
    INSIGNIA(GERFlagW, "German Flag", TXR(GERFlagW.paa));
    INSIGNIA(GRFlagW, "Greek Flag", TXR(GRFlagW.paa));
    INSIGNIA(HUFlagW, "Hungarian Flag", TXR(HUFlagW.paa));
    INSIGNIA(IRLFlagW, "Irish Flag", TXR(IRLFlagW.paa));
    INSIGNIA(ITFlagW, "Italian Flag", TXR(ITFlagW.paa));
    INSIGNIA(LUFlagW, "Luxembourgish Flag", TXR(LUFlagW.paa));
    INSIGNIA(LVFlagW, "Latvian Flag", TXR(LVFlagW.paa));
    INSIGNIA(MAFlagW, "Maltese Flag", TXR(MAFlagW.paa));
    INSIGNIA(NEFlagW, "Nederland Flag", TXR(NEFlagW.paa));
    INSIGNIA(PLFlagW, "Polish Flag", TXR(PLFlagW.paa));
    INSIGNIA(PTFlagW, "Portuguese Flag", TXR(PTFlagW.paa));
    INSIGNIA(ROFlagW, "Romanian Flag", TXR(ROFlagW.paa));
    INSIGNIA(RUFlagW, "Russian Flag", TXR(RUFlagW.paa));
    INSIGNIA(SLFlagW, "Slovakia Flag", TXR(SLFlagW.paa));
    INSIGNIA(SLWFlagW, "Slovene Flag", TXR(SLWFlagW.paa));
    INSIGNIA(SWEFlagW, "Swedish Flag", TXR(SWEFlagW.paa));
    INSIGNIA(SWFlagW, "Swiss Flag", TXR(SWFlagW.paa));
    INSIGNIA(TRFlagW, "Turkish Flag", TXR(TRFlagW.paa));
    INSIGNIA(UAFlagW, "Ukrainian Flag", TXR(UAFlagW.paa));
    INSIGNIA(ADFlagW, "Andorran Flag", TXR(ADFlagW.paa));
    INSIGNIA(ALFlagW, "Albanian Flag", TXR(ALFlagW.paa));
    INSIGNIA(AZFlagW, "Azerbaijani Flag", TXR(AZFlagW.paa));
    INSIGNIA(BAFlagW, "Bosnian Flag", TXR(BAFlagW.paa));
    INSIGNIA(GEFlagW, "Georgian Flag", TXR(GEFlagW.paa));
    INSIGNIA(ISFlagW, "Icelandic Flag", TXR(ISFlagW.paa));
    INSIGNIA(KZFlagW, "Kazakh Flag", TXR(KZFlagW.paa));
    INSIGNIA(LIFlagW, "Liechtenstein Flag", TXR(LIFlagW.paa));
    INSIGNIA(MDFlagW, "Moldovian Flag", TXR(MDFlagW.paa));
    INSIGNIA(MEFlagW, "Montenegrin Flag", TXR(MEFlagW.paa));
    INSIGNIA(MKFlagW, "Macedonian Flag", TXR(MKFlagW.paa));
    INSIGNIA(MOFlagW, "Monaco Flag", TXR(MOFlagW.paa));
    INSIGNIA(RSDFlagW, "Serbian Flag", TXR(RSDFlagW.paa));
    INSIGNIA(SMFlagW, "San Marino Flag", TXR(SMFlagW.paa));
    INSIGNIA(VTFlagW, "Vatican City Flag", TXR(VTFlagW.paa));
    INSIGNIA(LTFlagW, "Lithuanian Flag", TXR(LTFlagW.paa));
    INSIGNIA(NWFlagW, "Norwegian Flag", TXR(NWFlagW.paa));
    INSIGNIA(SCTFlagW, "Scotish Flag", TXR(SCTFlagW.paa));
    INSIGNIA(WAFlagW, "Welsh Flag", TXR(WAFlagW.paa));
    INSIGNIA(ENFlagW, "English Flag", TXR(ENFlagW.paa));
    INSIGNIA(HRFlagW, "Croatian Flag", TXR(HRFlagW.paa));
};
