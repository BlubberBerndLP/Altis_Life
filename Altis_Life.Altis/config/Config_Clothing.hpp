/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*   DLC Clothing Items added by [TIG] Alex
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, "" },
            { "U_C_Man_casual_1_F", "Casual Wears", 5000, "" },
            { "U_C_Man_casual_2_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "Casual Wears", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "Casual Wears", 5000, "" } //Apex DLC


        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_surfer", "", 135, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 6500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 6500, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster", "Cop Uniform", 25, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, "call life_coplevel >= 1" },
			{ "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 550, "call life_coplevel >= 2" },
			{ "U_B_GEN_Soldier_F", "", 750, "call life_coplevel >= 3" },
			{ "U_B_GEN_Commander_F", "", 750, "call life_coplevel >= 5" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 2" },
			{ "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_MilCap_gen_F", "", 50, "call life_coplevel >= 3" },
			{ "H_Beret_gen_F", "", 50, "call life_coplevel >= 5" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
			{ "V_TacVest_gen_F", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_blk", "", 1500, "call life_coplevel >= 2" },
			{ "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 2" },
            { "V_TacChestrig_grn_F", "", 1500, "call life_coplevel >= 2" },
			{ "V_PlateCarrierGL_blk", "", 1500, "call life_coplevel >= 4" },
			{ "V_PlateCarrierSpec_blk", "", 1500, "call life_coplevel >= 5" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Carryall_cbr", "", 3500, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster", "EMS Uniform", 50, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_FieldPack_oli", "EMS Backpack", 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "Guerilla Leader", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" }, //Apex DLC
			{ "U_B_T_Soldier_AR_F", "", 50000, "" }, //Apex DLC
	        { "U_B_T_Soldier_SL_F", "", 50000, "" }, //Apex DLC
	        { "U_B_T_Sniper_F", "", 50000, "" }, //Apex DLC
	        { "U_B_T_FullGhillie_tna_F", "", 50000, "" }, //Apex DLC
	        { "U_B_CTRG_Soldier_F", "", 50000, "" }, //Apex DLC
	        { "U_B_CTRG_Soldier_2_F", "", 50000, "" }, //Apex DLC
	        { "U_B_CTRG_Soldier_3_F", "", 50000, "" }, //Apex DLC
	        { "U_O_T_Soldier_F", "", 50000, "" }, //Apex DLC
	        { "U_O_T_Officer_F", "", 50000, "" }, //Apex DLC
	        { "U_O_T_Sniper_F", "", 50000, "" }, //Apex DLC
	        { "U_O_T_FullGhillie_tna_F", "", 50000, "" }, //Apex DLC
	        { "U_I_C_Soldier_Para_1_F", "", 50000, "" }, //Apex DLC
	        { "U_I_C_Soldier_Para_2_F", "", 50000, "" }, //Apex DLC
	        { "U_I_C_Soldier_Para_3_F", "", 50000, "" }, //Apex DLC
	        { "U_I_C_Soldier_Para_4_F", "", 50000, "" }, //Apex DLC
	        { "U_I_C_Soldier_Para_5_F", "", 50000, "" }, //Apex DLC
	        { "U_B_CTRG_Soldier_urb_1_F", "", 50000, "" }, //Apex DLC
	        { "U_B_CTRG_Soldier_urb_2_F", "", 50000, "" }, //Apex DLC
	        { "U_B_CTRG_Soldier_urb_3_F", "", 50000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_MilCap_oucamo", "", 1200, "" },
            { "H_MilCap_gen_F", "", 1200, "" }, //Apex DLC
            { "H_MilCap_tna_F", "", 1200, "" }, //Apex DLC
            { "H_HelmetO_ocamo", "", 2500, "" },
            { "H_HelmetB_Enh_tna_F", "", 8000, "" }, //Apex DLC
			{ "H_HelmetB_TI_tna_F", "", 8000, "" }, //Apex DLC
	        { "H_HelmetB_tna_F", "", 8000, "" }, //Apex DLC
	        { "H_HelmetB_Light_tna_F", "", 8000, "" }, //Apex DLC
	        { "H_HelmetSpecO_ghex_F", "", 8000, "" }, //Apex DLC
	        { "H_HelmetLeaderO_ghex_F", "", 8000, "" }, //Apex DLC
	        { "H_HelmetO_ghex_F", "", 8000, "" }, //Apex DLC
	        { "H_HelmetCrew_O_ghex_F", "", 8000, "" }, //Apex DLC
	        { "H_Booniehat_tna_F", "", 8000, "" } //Apex DLC
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_PlateCarrier1_tna_F", "", 15000, "" }, //Apex DLC
	        { "V_PlateCarrier2_tna_F", "", 15000, "" }, //Apex DLC
	        { "V_PlateCarrierSpec_tna_F", "", 15000, "" }, //Apex DLC
	        { "V_PlateCarrierGL_tna_F", "", 15000, "" }, //Apex DLC
	        { "V_HarnessO_ghex_F", "", 15000, "" }, //Apex DLC
	        { "V_HarnessOGL_ghex_F", "", 15000, "" }, //Apex DLC
	        { "V_BandollierB_ghex_F", "", 15000, "" }, //Apex DLC
	        { "V_PlateCarrier1_rgr_noflag_F", "", 15000, "" }, //Apex DLC
	        { "V_PlateCarrier2_rgr_noflag_F", "", 15000, "" } //Apex DLC

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
			{ "B_ViperLightHarness_khk_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperLightHarness_blk_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperLightHarness_hex_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperLightHarness_oli_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperLightHarness_ghex_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperHarness_oli_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperHarness_khk_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperHarness_ghex_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperHarness_blk_F", "", 7500, "" }, //Apex DLC
	        { "B_FieldPack_ghex_F", "", 7500, "" }, //Apex DLC
	        { "B_AssaultPack_tna_F", "", 7500, "" }, //Apex DLC
	        { "B_Carryall_ghex_F", "", 7500, "" }, //Apex DLC
	        { "B_Bergen_tna_F", "", 7500, "" }, //Apex DLC
	        { "B_Bergen_hex_F", "", 7500, "" }, //Apex DLC
	        { "B_Bergen_dgtl_F", "", 7500, "" }, //Apex DLC
	        { "B_Bergen_mcamo_F", "", 7500, "" }, //Apex DLC
	        { "B_ViperHarness_hex_F", "", 7500, "" } //Apex DLC
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
};