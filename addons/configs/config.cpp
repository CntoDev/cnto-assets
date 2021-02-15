class CfgPatches {
    class cnto_assets {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Weapons_F",
            "rhs_c_troops",
            "A3_Soft_F_Beta_MRAP_03",  // MRAP_03_base_F
            "A3_Armor_F_EPB_MBT_03",   // MBT_03_base_F
            "rhsusf_c_weapons"         // HK416
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

#define HEADGEAR(name, base, text, paas) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelections[] = { MDL_SEL }; \
        hiddenSelectionsTextures[] = { paas }; \
    }

#define HEADGEAR2(name, base, text, rvmat, paa ) \
    class name : base { \
        scope = 2; \
        displayName = text; \
        hiddenSelections[] = { MDL_SEL }; \
        hiddenSelectionsMaterials[] = { rvmat }; \
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
        material = "\A3\Ui_f\data\GUI\Cfg\UnitInsignia\default_insignia.rvmat"; \
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

#define WEAPON(name, base, text, paas) \
    class name : base { \
        displayName = text; \
        hiddenSelectionsTextures[] = { \
            paas \
        }; \
        baseWeapon = name; \
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
    UNIFORM_SOLDIER(cnto_flecktarn_u_urban, B_Soldier_base_F, TXR(urban.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_crew, B_Soldier_base_F, TXR(crew.paa));
    #define MDL MDL_BLU_TEE
    #define MDL_SEL "camo","camo2"  // watch out! two TXR() per line below
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_desert, B_Soldier_base_F, TXR(desert.paa) TXR(desert_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_forest, B_Soldier_base_F, TXR(forest.paa) TXR(forest_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_jungle, B_Soldier_base_F, TXR(jungle.paa) TXR(jungle_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa) TXR(mediterranean_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_snow, B_Soldier_base_F, TXR(snow.paa) TXR(snow_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_grassland, B_Soldier_base_F, TXR(grassland) TXR(grassland_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_urban, B_Soldier_base_F, TXR(urban) TXR(urban_shirt.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_t_crew, B_Soldier_base_F, TXR(crew) TXR(urban_shirt.paa));
    #define MDL MDL_BLU_RECON
    #define MDL_SEL "camo","insignia"
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_desert, B_Soldier_base_F, TXR(desert.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_forest, B_Soldier_base_F, TXR(forest.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_jungle, B_Soldier_base_F, TXR(jungle.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_mediterranean, B_Soldier_base_F, TXR(mediterranean.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_snow, B_Soldier_base_F, TXR(snow.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_grassland, B_Soldier_base_F, TXR(grassland.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_urban, B_Soldier_base_F, TXR(urban.paa));
    UNIFORM_SOLDIER(cnto_flecktarn_u_r_crew, B_Soldier_base_F, TXR(crew.paa));

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

    /*
     * Flecktarn Backpacks
     */
    #define TXR(path) \cnto\assets\flecktarn_backpacks\##path
    BACKPACK(cnto_flecktarn_b_ap_desert, B_AssaultPack_Base, "Flecktarn AssaultPack (Desert)", TXR(desert_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_forest, B_AssaultPack_Base, "Flecktarn AssaultPack (Forest)", TXR(forest_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_jungle, B_AssaultPack_Base, "Flecktarn AssaultPack (Jungle)", TXR(jungle_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_mediterranean, B_AssaultPack_Base, "Flecktarn AssaultPack (Mediterranean)", TXR(mediterranean_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_snow, B_AssaultPack_Base, "Flecktarn AssaultPack (Snow)", TXR(snow_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_grassland, B_AssaultPack_Base, "Flecktarn AssaultPack (Grassland)", TXR(grassland_assault.paa));
    BACKPACK(cnto_flecktarn_b_ap_urban, B_AssaultPack_Base, "Flecktarn AssaultPack (Urban)", TXR(urban_assault.paa));

    BACKPACK(cnto_flecktarn_b_kb_desert, B_Kitbag_Base, "Flecktarn KitBag (Desert)", TXR(desert_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_forest, B_Kitbag_Base, "Flecktarn KitBag (Forest)", TXR(forest_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_jungle, B_Kitbag_Base, "Flecktarn KitBag (Jungle)", TXR(jungle_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_mediterranean, B_Kitbag_Base, "Flecktarn KitBag (Mediterranean)", TXR(mediterranean_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_snow, B_Kitbag_Base, "Flecktarn KitBag (Snow)", TXR(snow_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_grassland, B_Kitbag_Base, "Flecktarn KitBag (Grassland)", TXR(grassland_kitbag.paa));
    BACKPACK(cnto_flecktarn_b_kb_urban, B_Kitbag_Base, "Flecktarn KitBag (Urban)", TXR(urban_kitbag.paa));

    BACKPACK(cnto_flecktarn_b_ca_desert, B_Carryall_Base, "Flecktarn Carryall (Desert)", TXR(desert_carryall.paa));
    BACKPACK(cnto_flecktarn_b_ca_forest, B_Carryall_Base, "Flecktarn Carryall (Forest)", TXR(forest_carryall.paa));
    BACKPACK(cnto_flecktarn_b_ca_jungle, B_Carryall_Base, "Flecktarn Carryall (Jungle)", TXR(jungle_carryall.paa));
    BACKPACK(cnto_flecktarn_b_ca_mediterranean, B_Carryall_Base, "Flecktarn Carryall (Mediterranean)", TXR(mediterranean_carryall.paa));
    BACKPACK(cnto_flecktarn_b_ca_snow, B_Carryall_Base, "Flecktarn Carryall (Snow)", TXR(snow_carryall.paa));
    BACKPACK(cnto_flecktarn_b_ca_grassland, B_Carryall_Base, "Flecktarn Carryall (Grassland)", TXR(grassland_carryall.paa));
    BACKPACK(cnto_flecktarn_b_ca_urban, B_Carryall_Base, "Flecktarn Carryall (Urban)", TXR(urban_carryall.paa));

    /* ------------------------------------------- */

    class Car_F;
    class Tank_F;
    class Wheeled_APC_F;

    /*
     * Euro-themed vehicle skins
     */
    #define TXR(path) \cnto\assets\urban_vehicles\##path COMMA
    /* Strider MRAP (Fennek) */
    VEHCAMO(MRAP_03_base_F, Car_F, cnto_urban, "M90 Urban",
        TXR(strider_body.paa)
        TXR(strider_turret.paa)
    );
    /* Kuma MBT (Leopard) */
    VEHCAMO(MBT_03_base_F, Tank_F, cnto_urban, "M90 Urban",
        TXR(kuma_body.paa)
        TXR(kuma_gun.paa)
        TXR(kuma_turret.paa)
    );
    /* Marid APC */
    VEHCAMO(APC_Wheeled_02_base_F, Wheeled_APC_F, cnto_urban, "M90 Urban",
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
    UNIFORM(cnto_flecktarn_u_desert, U_B_CombatUniform_mcam, "Flecktarn (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_forest, U_B_CombatUniform_mcam, "Flecktarn (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_jungle, U_B_CombatUniform_mcam, "Flecktarn (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_mediterranean, U_B_CombatUniform_mcam, "Flecktarn (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_snow, U_B_CombatUniform_mcam, "Flecktarn (Snow)", TXR(snow.paa));
    UNIFORM(cnto_flecktarn_u_grassland, U_B_CombatUniform_mcam, "Flecktarn (Grassland)", TXR(grassland.paa));
    UNIFORM(cnto_flecktarn_u_urban, U_B_CombatUniform_mcam, "Flecktarn (Urban)", TXR(urban.paa));
    UNIFORM(cnto_flecktarn_u_crew, U_B_CombatUniform_mcam, "Flecktarn (Crew)", TXR(crew.paa));

    UNIFORM(cnto_flecktarn_u_t_desert, U_B_CombatUniform_mcam_tshirt, "Flecktarn Tee (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_t_forest, U_B_CombatUniform_mcam_tshirt, "Flecktarn Tee (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_t_jungle, U_B_CombatUniform_mcam_tshirt, "Flecktarn Tee (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_t_mediterranean, U_B_CombatUniform_mcam_tshirt, "Flecktarn Tee (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_t_snow, U_B_CombatUniform_mcam_tshirt, "Flecktarn Tee (Snow)", TXR(snow.paa));
    UNIFORM(cnto_flecktarn_u_t_grassland, U_B_CombatUniform_mcam_tshirt, "Flecktarn Tee (Grassland)", TXR(grassland.paa));
    UNIFORM(cnto_flecktarn_u_t_urban, U_B_CombatUniform_mcam_tshirt, "Flecktarn Tee (Urban)", TXR(urban.paa));

    UNIFORM(cnto_flecktarn_u_r_desert, U_B_CombatUniform_mcam_vest, "Flecktarn Recon (Desert)", TXR(desert.paa));
    UNIFORM(cnto_flecktarn_u_r_forest, U_B_CombatUniform_mcam_vest, "Flecktarn Recon (Forest)", TXR(forest.paa));
    UNIFORM(cnto_flecktarn_u_r_jungle, U_B_CombatUniform_mcam_vest, "Flecktarn Recon (Jungle)", TXR(jungle.paa));
    UNIFORM(cnto_flecktarn_u_r_mediterranean, U_B_CombatUniform_mcam_vest, "Flecktarn Recon (Mediterranean)", TXR(mediterranean.paa));
    UNIFORM(cnto_flecktarn_u_r_snow, U_B_CombatUniform_mcam_vest, "Flecktarn Recon (Snow)", TXR(snow.paa));
    UNIFORM(cnto_flecktarn_u_r_grassland, U_B_CombatUniform_mcam_vest, "Flecktarn Recon (Grassland)", TXR(grassland.paa));
    UNIFORM(cnto_flecktarn_u_r_urban, U_B_CombatUniform_mcam_vest, "Flecktarn Recon (Urban)", TXR(urban.paa));

    /*
     * Urban Uniforms
     */
    #define TXR(path) \cnto\assets\urban_uniforms\##path
    UNIFORM(cnto_urban_u_m90, U_B_CombatUniform_mcam, "M90 Urban", TXR(m90.paa));
    UNIFORM(cnto_urban_u_m90_crew, U_B_CombatUniform_mcam, "M90 Urban (crew)", TXR(m90_crew.paa));

    UNIFORM(cnto_urban_u_t_m90, U_B_CombatUniform_mcam_tshirt, "M90 Urban Tee", TXR(m90.paa));

    UNIFORM(cnto_urban_u_r_m90, U_B_CombatUniform_mcam_vest, "M90 Urban Recon", TXR(m90.paa));
    UNIFORM(cnto_urban_u_r_m90_crew, U_B_CombatUniform_mcam_vest, "M90 Urban Recon (crew)", TXR(m90_crew.paa));

    UNIFORM(cnto_urban_u_s_m90, U_B_CTRG_Soldier_F, "M90 Urban Stealth", TXR(m90.paa));

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
    VEST(cnto_flecktarn_v_l_desert, V_PlateCarrier1_blk, "Flecktarn Carrier Lite (Desert)", TXR(desert.paa));
    VEST(cnto_flecktarn_v_desert, V_PlateCarrier2_blk, "Flecktarn Carrier (Desert)", TXR(desert.paa));
    VEST(cnto_flecktarn_v_h_desert, V_PlateCarrierGL_rgr, "Flecktarn Carrier Heavy (Desert)", TXR(desert_heavy.paa));
    VEST(cnto_flecktarn_v_s_desert, V_PlateCarrierSpec_rgr, "Flecktarn Carrier Special (Desert)", TXR(desert_heavy.paa));

    VEST(cnto_flecktarn_v_l_forest, V_PlateCarrier1_blk, "Flecktarn Carrier Lite (Forest)", TXR(forest.paa));
    VEST(cnto_flecktarn_v_forest, V_PlateCarrier2_blk, "Flecktarn Carrier (Forest)", TXR(forest.paa));
    VEST(cnto_flecktarn_v_h_forest, V_PlateCarrierGL_rgr, "Flecktarn Carrier Heavy (Forest)", TXR(forest_heavy.paa));
    VEST(cnto_flecktarn_v_s_forest, V_PlateCarrierSpec_rgr, "Flecktarn Carrier Special (Forest)", TXR(forest_heavy.paa));

    VEST(cnto_flecktarn_v_l_jungle, V_PlateCarrier1_blk, "Flecktarn Carrier Lite (Jungle)", TXR(jungle.paa));
    VEST(cnto_flecktarn_v_jungle, V_PlateCarrier2_blk, "Flecktarn Carrier (Jungle)", TXR(jungle.paa));
    VEST(cnto_flecktarn_v_h_jungle, V_PlateCarrierGL_rgr, "Flecktarn Carrier Heavy (Jungle)", TXR(jungle_heavy.paa));
    VEST(cnto_flecktarn_v_s_jungle, V_PlateCarrierSpec_rgr, "Flecktarn Carrier Special (Jungle)", TXR(jungle_heavy.paa));

    VEST(cnto_flecktarn_v_l_mediterranean, V_PlateCarrier1_blk, "Flecktarn Carrier Lite (Mediterranean)", TXR(mediterranean.paa));
    VEST(cnto_flecktarn_v_mediterranean, V_PlateCarrier2_blk, "Flecktarn Carrier (Mediterranean)", TXR(mediterranean.paa));
    VEST(cnto_flecktarn_v_h_mediterranean, V_PlateCarrierGL_rgr, "Flecktarn Carrier Heavy (Mediterranean)", TXR(mediterranean_heavy.paa));
    VEST(cnto_flecktarn_v_s_mediterranean, V_PlateCarrierSpec_rgr, "Flecktarn Carrier Special (Mediterranean)", TXR(mediterranean_heavy.paa));

    VEST(cnto_flecktarn_v_l_snow, V_PlateCarrier1_blk, "Flecktarn Carrier Lite (Snow)", TXR(snow.paa));
    VEST(cnto_flecktarn_v_snow, V_PlateCarrier2_blk, "Flecktarn Carrier (Snow)", TXR(snow.paa));
    VEST(cnto_flecktarn_v_h_snow, V_PlateCarrierGL_rgr, "Flecktarn Carrier Heavy (Snow)", TXR(snow_heavy.paa));
    VEST(cnto_flecktarn_v_s_snow, V_PlateCarrierSpec_rgr, "Flecktarn Carrier Special (Snow)", TXR(snow_heavy.paa));

    VEST(cnto_flecktarn_v_l_grassland, V_PlateCarrier1_blk, "Flecktarn Carrier Lite (Grassland)", TXR(grassland.paa));
    VEST(cnto_flecktarn_v_grassland, V_PlateCarrier2_blk, "Flecktarn Carrier (Grassland)", TXR(grassland.paa));
    VEST(cnto_flecktarn_v_h_grassland, V_PlateCarrierGL_rgr, "Flecktarn Carrier Heavy (Grassland)", TXR(grassland_heavy.paa));
    VEST(cnto_flecktarn_v_s_grassland, V_PlateCarrierSpec_rgr, "Flecktarn Carrier Special (Grassland)", TXR(grassland_heavy.paa));

    VEST(cnto_flecktarn_v_l_urban, V_PlateCarrier1_blk, "Flecktarn Carrier Lite (Urban)", TXR(urban.paa));
    VEST(cnto_flecktarn_v_urban, V_PlateCarrier2_blk, "Flecktarn Carrier (Urban)", TXR(urban.paa));
    VEST(cnto_flecktarn_v_h_urban, V_PlateCarrierGL_rgr, "Flecktarn Carrier Heavy (Urban)", TXR(urban_heavy.paa));
    VEST(cnto_flecktarn_v_s_urban, V_PlateCarrierSpec_rgr, "Flecktarn Carrier Special (Urban)", TXR(urban_heavy.paa));


    /*
     * Urban Vests
     */

    #define TXR(path) \cnto\assets\urban_vests\##path
    VEST(cnto_urban_v_l_m90, V_PlateCarrier1_blk, "M90 Urban Carrier Lite", TXR(m90.paa));
    VEST(cnto_urban_v_m90, V_PlateCarrier2_blk, "M90 Urban Carrier", TXR(m90.paa));
    VEST(cnto_urban_v_h_m90, V_PlateCarrierGL_rgr, "M90 Urban Carrier Heavy", TXR(m90_heavy.paa));
    VEST(cnto_urban_v_s_m90, V_PlateCarrierSpec_rgr, "M90 Urban Carrier Special", TXR(m90_heavy.paa));

    /* ------------------------------------------- */

    class H_HelmetB;
    class H_HelmetSpecB;
    class H_Booniehat_khk;
    class H_Beret_blk;
    class H_HelmetB_light;
    class H_HelmetB_camo;
    class H_HelmetB_TI_tna_F;

    /*
     * Flecktarn Headgear
     */

    #define TXR(path) \cnto\assets\flecktarn_headgear\##path
    HEADGEAR(cnto_flecktarn_h_c_desert, H_HelmetB, "Flecktarn Combat Helmet (Desert)", TXR(desert_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_forest, H_HelmetB, "Flecktarn Combat Helmet (Forest)", TXR(forest_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_jungle, H_HelmetB, "Flecktarn Combat Helmet (Jungle)", TXR(jungle_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_mediterranean, H_HelmetB, "Flecktarn Combat Helmet (Mediterranean)", TXR(mediterranean_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_snow, H_HelmetB, "Flecktarn Combat Helmet (Snow)", TXR(snow_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_grassland, H_HelmetB, "Flecktarn Combat Helmet (Grassland)", TXR(grassland_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_c_urban, H_HelmetB, "Flecktarn Combat Helmet (Urban)", TXR(urban_helmet.paa));

    HEADGEAR(cnto_flecktarn_h_s_desert, H_HelmetSpecB, "Flecktarn Enhanced Combat Helmet (Desert)", TXR(desert_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_s_forest, H_HelmetSpecB, "Flecktarn Enhanced Combat Helmet (Forest)", TXR(forest_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_s_jungle, H_HelmetSpecB, "Flecktarn Enhanced Combat Helmet (Jungle)", TXR(jungle_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_s_mediterranean, H_HelmetSpecB, "Flecktarn Enhanced Combat Helmet (Mediterranean)", TXR(mediterranean_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_s_snow, H_HelmetSpecB, "Flecktarn Enhanced Combat Helmet (Snow)", TXR(snow_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_s_grassland, H_HelmetSpecB, "Flecktarn Enhanced Combat Helmet (Grassland)", TXR(grassland_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_s_urban, H_HelmetSpecB, "Flecktarn Enhanced Combat Helmet (Urban)", TXR(urban_helmet.paa));

    HEADGEAR(cnto_flecktarn_h_boo_desert, H_Booniehat_khk, "Flecktarn Boonie Hat (Desert)", TXR(desert_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_forest, H_Booniehat_khk, "Flecktarn Boonie Hat (Forest)", TXR(forest_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_jungle, H_Booniehat_khk, "Flecktarn Boonie Hat (Jungle)", TXR(jungle_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_mediterranean, H_Booniehat_khk, "Flecktarn Boonie Hat (Mediterranean)", TXR(mediterranean_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_snow, H_Booniehat_khk, "Flecktarn Boonie Hat (Snow)", TXR(snow_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_grassland, H_Booniehat_khk, "Flecktarn Boonie Hat (Grassland)", TXR(grassland_boonie.paa));
    HEADGEAR(cnto_flecktarn_h_boo_urban, H_Booniehat_khk, "Flecktarn Boonie Hat (Urban)", TXR(urban_boonie.paa));

    HEADGEAR(cnto_flecktarn_h_beret, H_Beret_blk, "CNTO Beret", TXR(beret.paa));

    HEADGEAR(cnto_flecktarn_h_l_desert, H_HelmetB_light, "Flecktarn Light Helmet (Desert)", TXR(desert_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_l_forest, H_HelmetB_light, "Flecktarn Light Helmet (Forest)", TXR(forest_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_l_jungle, H_HelmetB_light, "Flecktarn Light Helmet (Jungle)", TXR(jungle_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_l_mediterranean, H_HelmetB_light, "Flecktarn Light Helmet (Mediterranean)", TXR(mediterranean_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_l_snow, H_HelmetB_light, "Flecktarn Light Helmet (Snow)", TXR(snow_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_l_grassland, H_HelmetB_light, "Flecktarn Light Helmet (Grassland)", TXR(grassland_helmet.paa));
    HEADGEAR(cnto_flecktarn_h_l_urban, H_HelmetB_light, "Flecktarn Light Helmet (Urban)", TXR(urban_helmet.paa));

    #define TXR(path) \cnto\assets\flecktarn_headgear\##path COMMA
    #define MDL_SEL "camo","camo2"  // watch out! two TXR() per line below
    HEADGEAR(cnto_flecktarn_h_b_desert, H_HelmetB_camo, "Flecktarn Scrim Helmet (Desert)", TXR(desert_helmet.paa) TXR(desert_ghillie.paa));
    HEADGEAR(cnto_flecktarn_h_b_forest, H_HelmetB_camo, "Flecktarn Scrim Helmet (Forest)", TXR(forest_helmet.paa) TXR(forest_ghillie.paa));
    HEADGEAR(cnto_flecktarn_h_b_jungle, H_HelmetB_camo, "Flecktarn Scrim Helmet (Jungle)", TXR(jungle_helmet.paa) TXR(jungle_ghillie.paa));
    HEADGEAR(cnto_flecktarn_h_b_mediterranean, H_HelmetB_camo, "Flecktarn Scrim Helmet (Mediterranean)", TXR(mediterranean_helmet.paa) TXR(mediterranean_ghillie.paa));
    HEADGEAR(cnto_flecktarn_h_b_snow, H_HelmetB_camo, "Flecktarn Scrim Helmet (Snow)", TXR(snow_helmet.paa) TXR(snow_ghillie.paa));
    HEADGEAR(cnto_flecktarn_h_b_grassland, H_HelmetB_camo, "Flecktarn Scrim Helmet (Grassland)", TXR(grassland_helmet.paa) TXR(grassland_ghillie.paa));


    /*
     * Urban Headgear
     */
    #define TXR(path) \cnto\assets\urban_headgear\##path
    HEADGEAR(cnto_urban_h_c_urban, H_HelmetB, "M90 Urban Combat Helmet", TXR(combat_helmet.paa));
    HEADGEAR(cnto_urban_h_s_urban, H_HelmetSpecB, "M90 Urban Enhanced Combat Helmet", TXR(combat_helmet.paa));
    HEADGEAR(cnto_urban_h_h_urban, H_HelmetB_TI_tna_F, "M90 Urban Heavy Helmet", TXR(heavy_helmet.paa));

    /* ------------------------------------------- */

    class rhs_weap_hk416d10;
    class rhs_weap_hk416d10_m320;
    class rhs_weap_hk416d145;
    class rhs_weap_hk416d145_m320;

    #define TXR(path) \cnto\assets\rhs_weapons\##path COMMA
    WEAPON(cnto_hk416_d10, rhs_weap_hk416d10, "HK416 D10 (Tan)",
        TXR(wep_hk416d_2_tan.paa)
        TXR(magazine_grey.paa)
        \rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa COMMA
    );
    WEAPON(cnto_hk416_d10_m320, rhs_weap_hk416d10_m320, "HK416 D10 M320 (Tan)",
        TXR(wep_hk416d_2_tan.paa)
        TXR(magazine_grey.paa)
        TXR(m320_grey.paa)
    );
    WEAPON(cnto_hk416_d145, rhs_weap_hk416d145, "HK416 D14.5 (Tan)",
        TXR(wep_hk416d_1_tan.paa)
        TXR(magazine_grey.paa)
        \rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa COMMA
    );
    WEAPON(cnto_hk416_d145_m320, rhs_weap_hk416d145_m320, "HK416 D14.5 M320 (Tan)",
        TXR(wep_hk416d_1_tan.paa)
        TXR(magazine_grey.paa)
        TXR(m320_grey.paa)
    );

    WEAPON(cnto_hk416_d10s, rhs_weap_hk416d10, "HK416 D10 (Snow)",
        TXR(wep_hk416d_2_white.paa)
        TXR(magazine_grey.paa)
        \rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa COMMA
    );
    WEAPON(cnto_hk416_d10_m320s, rhs_weap_hk416d10_m320, "HK416 D10 M320 (Snow)",
        TXR(wep_hk416d_2_white.paa)
        TXR(magazine_grey.paa)
        TXR(m320_grey.paa)
    );
    WEAPON(cnto_hk416_d145s, rhs_weap_hk416d145, "HK416 D14.5 (Snow)",
        TXR(wep_hk416d_1_white.paa)
        TXR(magazine_grey.paa)
        \rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa COMMA
    );
    WEAPON(cnto_hk416_d145_m320s, rhs_weap_hk416d145_m320, "HK416 D14.5 M320 (Snow)",
        TXR(wep_hk416d_1_white.paa)
        TXR(magazine_grey.paa)
        TXR(m320_grey.paa)
    );
};

class CfgGlasses {
    class rhs_balaclava;
    class G_Bandanna_blk;

    /*
     * Flecktarn Facewear
     */
    #define TXR(path) \cnto\assets\flecktarn_facewear\##path
    FACEWEAR(cnto_flecktarn_f_bala_desert, rhs_balaclava, "Flecktarn Balaclava (Desert)", TXR(balaclava_desert));
    FACEWEAR(cnto_flecktarn_f_bala_forest, rhs_balaclava, "Flecktarn Balaclava (Forest)", TXR(balaclava_forest));
    FACEWEAR(cnto_flecktarn_f_bala_jungle, rhs_balaclava, "Flecktarn Balaclava (Jungle)", TXR(balaclava_jungle));
    FACEWEAR(cnto_flecktarn_f_bala_mediterranean, rhs_balaclava, "Flecktarn Balaclava (Mediterranean)", TXR(balaclava_mediterranean));
    FACEWEAR(cnto_flecktarn_f_bala_snow, rhs_balaclava, "Flecktarn Balaclava (Snow)", TXR(balaclava_snow));
    FACEWEAR(cnto_flecktarn_f_bala_grassland, rhs_balaclava, "Flecktarn Balaclava (Grassland)", TXR(balaclava_grassland));
    FACEWEAR(cnto_flecktarn_f_bala_urban, rhs_balaclava, "Flecktarn Balaclava (Urban)", TXR(balaclava_urban));

    FACEWEAR(cnto_flecktarn_f_band_snow, G_Bandanna_blk, "CNTO Bandana (Snow)", TXR(bandana_snow));
    FACEWEAR(cnto_flecktarn_f_band_owl1, G_Bandanna_blk, "CNTO Bandana (Owl 1)", TXR(bandana_owl1));
    FACEWEAR(cnto_flecktarn_f_band_owl2, G_Bandanna_blk, "CNTO Bandana (Owl 2)", TXR(bandana_owl2));
};

class CfgUnitInsignia {
    /*
     * custom CNTO insignia
     */
    #define TXR(path) \cnto\assets\custom_insignia\##path
    INSIGNIA(CNTOpatch, "CNTO Owl Patch", TXR(CNTOpatch.paa));
    INSIGNIA(CNTOpatchAlt, "CNTO Owl Patch (Alt)", TXR(CNTOpatchAlt.paa));
    /* platoon elements */
    #define TXR(path) \cnto\assets\custom_insignia\elements\##path
    INSIGNIA(cnto_elem_plt, "CNTO Platoon Lead", TXR(plt.paa));
    INSIGNIA(cnto_elem_asl, "CNTO Alpha SL", TXR(letters\a.paa));
    INSIGNIA(cnto_elem_a1, "CNTO Alpha 1", TXR(a1.paa));
    INSIGNIA(cnto_elem_a2, "CNTO Alpha 2", TXR(a2.paa));
    INSIGNIA(cnto_elem_bsl, "CNTO Bravo SL", TXR(letters\b.paa));
    INSIGNIA(cnto_elem_b1, "CNTO Bravo 1", TXR(b1.paa));
    INSIGNIA(cnto_elem_b2, "CNTO Bravo 2", TXR(b2.paa));
    INSIGNIA(cnto_elem_csl, "CNTO Charlie SL", TXR(letters\c.paa));
    INSIGNIA(cnto_elem_c1, "CNTO Charlie 1", TXR(c1.paa));
    INSIGNIA(cnto_elem_c2, "CNTO Charlie 2", TXR(c2.paa));
    INSIGNIA(cnto_elem_mmg, "CNTO MMG", TXR(mmg.paa));
    INSIGNIA(cnto_elem_mat, "CNTO MAT", TXR(mat.paa));
    INSIGNIA(cnto_elem_mtr, "CNTO Mortar", TXR(mtr.paa));
    INSIGNIA(cnto_elem_dmt, "CNTO DMT", TXR(dmt.paa));
    INSIGNIA(cnto_elem_dgr, "CNTO Dagger", TXR(dgr.paa));
    INSIGNIA(cnto_elem_nb, "CNTO Nightbird", TXR(nb.paa));
    INSIGNIA(cnto_elem_fal, "CNTO Falcon", TXR(fal.paa));
    /* A-Z letters for custom elements */
    #define TXR(path) \cnto\assets\custom_insignia\elements\letters\##path
    INSIGNIA(cnto_elem_letter_a, "CNTO Letter: A", TXR(a.paa));
    INSIGNIA(cnto_elem_letter_b, "CNTO Letter: B", TXR(b.paa));
    INSIGNIA(cnto_elem_letter_c, "CNTO Letter: C", TXR(c.paa));
    INSIGNIA(cnto_elem_letter_d, "CNTO Letter: D", TXR(d.paa));
    INSIGNIA(cnto_elem_letter_e, "CNTO Letter: E", TXR(e.paa));
    INSIGNIA(cnto_elem_letter_f, "CNTO Letter: F", TXR(f.paa));
    INSIGNIA(cnto_elem_letter_g, "CNTO Letter: G", TXR(g.paa));
    INSIGNIA(cnto_elem_letter_h, "CNTO Letter: H", TXR(h.paa));
    INSIGNIA(cnto_elem_letter_i, "CNTO Letter: I", TXR(i.paa));
    INSIGNIA(cnto_elem_letter_j, "CNTO Letter: J", TXR(j.paa));
    INSIGNIA(cnto_elem_letter_k, "CNTO Letter: K", TXR(k.paa));
    INSIGNIA(cnto_elem_letter_l, "CNTO Letter: L", TXR(l.paa));
    INSIGNIA(cnto_elem_letter_m, "CNTO Letter: M", TXR(m.paa));
    INSIGNIA(cnto_elem_letter_n, "CNTO Letter: N", TXR(n.paa));
    INSIGNIA(cnto_elem_letter_o, "CNTO Letter: O", TXR(o.paa));
    INSIGNIA(cnto_elem_letter_p, "CNTO Letter: P", TXR(p.paa));
    INSIGNIA(cnto_elem_letter_q, "CNTO Letter: Q", TXR(q.paa));
    INSIGNIA(cnto_elem_letter_r, "CNTO Letter: R", TXR(r.paa));
    INSIGNIA(cnto_elem_letter_s, "CNTO Letter: S", TXR(s.paa));
    INSIGNIA(cnto_elem_letter_t, "CNTO Letter: T", TXR(t.paa));
    INSIGNIA(cnto_elem_letter_u, "CNTO Letter: U", TXR(u.paa));
    INSIGNIA(cnto_elem_letter_v, "CNTO Letter: V", TXR(v.paa));
    INSIGNIA(cnto_elem_letter_w, "CNTO Letter: W", TXR(w.paa));
    INSIGNIA(cnto_elem_letter_x, "CNTO Letter: X", TXR(x.paa));
    INSIGNIA(cnto_elem_letter_y, "CNTO Letter: Y", TXR(y.paa));
    INSIGNIA(cnto_elem_letter_z, "CNTO Letter: Z", TXR(z.paa));

    /*
     * BiBo's flags (worn only)
     * http://arma.rocketspeak.de
     * https://steamcommunity.com/sharedfiles/filedetails/?id=654816931
     */
    #define TXR(path) \cnto\assets\country_flags\##path
    INSIGNIA(AUTFlagW, "BiBo Austrian Flag (worn)", TXR(AUTFlagW.paa));
    INSIGNIA(BELFlagW, "BiBo Belgian Flag (worn)", TXR(BELFlagW.paa));
    INSIGNIA(BGFlagW, "BiBo Bulgarian Flag (worn)", TXR(BGFlagW.paa));
    INSIGNIA(BYFlagW, "BiBo Belarusian Flag (worn)", TXR(BYFlagW.paa));
    INSIGNIA(CYFlagW, "BiBo Cyprus Flag (worn)", TXR(CYFlagW.paa));
    INSIGNIA(CZFlagW, "BiBo Czech Flag (worn)", TXR(CZFlagW.paa));
    INSIGNIA(DANFlagW, "BiBo Danish Flag (worn)", TXR(DANFlagW.paa));
    INSIGNIA(DUFlagW, "BiBo Dutch Flag (worn)", TXR(DUFlagW.paa));
    INSIGNIA(ESFlagW, "BiBo Spanish Flag (worn)", TXR(ESFlagW.paa));
    INSIGNIA(ESTFlagW, "BiBo Estonian Flag (worn)", TXR(ESTFlagW.paa));
    INSIGNIA(EUFlagW, "BiBo European Flag (worn)", TXR(EUFlagW.paa));
    INSIGNIA(FIFlagW, "BiBo Finnish Flag (worn)", TXR(FIFlagW.paa));
    INSIGNIA(FRFlagW, "BiBo French Flag (worn)", TXR(FRFlagW.paa));
    INSIGNIA(GBFlagW, "BiBo UK Flag (worn)", TXR(GBFlagW.paa));
    INSIGNIA(GERFlagW, "BiBo German Flag (worn)", TXR(GERFlagW.paa));
    INSIGNIA(GRFlagW, "BiBo Greek Flag (worn)", TXR(GRFlagW.paa));
    INSIGNIA(HUFlagW, "BiBo Hungarian Flag (worn)", TXR(HUFlagW.paa));
    INSIGNIA(IRLFlagW, "BiBo Irish Flag (worn)", TXR(IRLFlagW.paa));
    INSIGNIA(ITFlagW, "BiBo Italian Flag (worn)", TXR(ITFlagW.paa));
    INSIGNIA(LUFlagW, "BiBo Luxembourgish Flag (worn)", TXR(LUFlagW.paa));
    INSIGNIA(LVFlagW, "BiBo Latvian Flag (worn)", TXR(LVFlagW.paa));
    INSIGNIA(MAFlagW, "BiBo Maltese Flag (worn)", TXR(MAFlagW.paa));
    INSIGNIA(NEFlagW, "BiBo Nederland Flag (worn)", TXR(NEFlagW.paa));
    INSIGNIA(PLFlagW, "BiBo Polish Flag (worn)", TXR(PLFlagW.paa));
    INSIGNIA(PTFlagW, "BiBo Portuguese Flag (worn)", TXR(PTFlagW.paa));
    INSIGNIA(ROFlagW, "BiBo Romanian Flag (worn)", TXR(ROFlagW.paa));
    INSIGNIA(RUFlagW, "BiBo Russian Flag (worn)", TXR(RUFlagW.paa));
    INSIGNIA(SLFlagW, "BiBo Slovakia Flag (worn)", TXR(SLFlagW.paa));
    INSIGNIA(SLWFlagW, "BiBo Slovene Flag (worn)", TXR(SLWFlagW.paa));
    INSIGNIA(SWEFlagW, "BiBo Swedish Flag (worn)", TXR(SWEFlagW.paa));
    INSIGNIA(SWFlagW, "BiBo Swiss Flag (worn)", TXR(SWFlagW.paa));
    INSIGNIA(TRFlagW, "BiBo Turkish Flag (worn)", TXR(TRFlagW.paa));
    INSIGNIA(UAFlagW, "BiBo Ukrainian Flag (worn)", TXR(UAFlagW.paa));
    INSIGNIA(ADFlagW, "BiBo Andorran Flag (worn)", TXR(ADFlagW.paa));
    INSIGNIA(ALFlagW, "BiBo Albanian Flag (worn)", TXR(ALFlagW.paa));
    INSIGNIA(AZFlagW, "BiBo Azerbaijani Flag (worn)", TXR(AZFlagW.paa));
    INSIGNIA(BAFlagW, "BiBo Bosnian Flag (worn)", TXR(BAFlagW.paa));
    INSIGNIA(GEFlagW, "BiBo Georgian Flag (worn)", TXR(GEFlagW.paa));
    INSIGNIA(ISFlagW, "BiBo Icelandic Flag (worn)", TXR(ISFlagW.paa));
    INSIGNIA(KZFlagW, "BiBo Kazakh Flag (worn)", TXR(KZFlagW.paa));
    INSIGNIA(LIFlagW, "BiBo Liechtenstein Flag (worn)", TXR(LIFlagW.paa));
    INSIGNIA(MDFlagW, "BiBo Moldovian Flag (worn)", TXR(MDFlagW.paa));
    INSIGNIA(MEFlagW, "BiBo Montenegrin Flag (worn)", TXR(MEFlagW.paa));
    INSIGNIA(MKFlagW, "BiBo Macedonian Flag (worn)", TXR(MKFlagW.paa));
    INSIGNIA(MOFlagW, "BiBo Monaco Flag (worn)", TXR(MOFlagW.paa));
    INSIGNIA(RSDFlagW, "BiBo Serbian Flag (worn)", TXR(RSDFlagW.paa));
    INSIGNIA(SMFlagW, "BiBo San Marino Flag (worn)", TXR(SMFlagW.paa));
    INSIGNIA(VTFlagW, "BiBo Vatican City Flag (worn)", TXR(VTFlagW.paa));
    INSIGNIA(LTFlagW, "BiBo Lithuanian Flag (worn)", TXR(LTFlagW.paa));
    INSIGNIA(NWFlagW, "BiBo Norwegian Flag (worn)", TXR(NWFlagW.paa));
    INSIGNIA(SCTFlagW, "BiBo Scotish Flag (worn)", TXR(SCTFlagW.paa));
    INSIGNIA(WAFlagW, "BiBo Welsh Flag (worn)", TXR(WAFlagW.paa));
    INSIGNIA(ENFlagW, "BiBo English Flag (worn)", TXR(ENFlagW.paa));
    INSIGNIA(HRFlagW, "BiBo Croatian Flag (worn)", TXR(HRFlagW.paa));
};
