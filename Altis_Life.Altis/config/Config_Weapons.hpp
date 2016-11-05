/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, "" },
            { "hgun_ACPC2_F", "", 11500, -1, "" },
            { "hgun_PDW2000_F", "", 20000, -1, "" },
			{ "hgun_P07_khk_F", "", 21000, -1, "" }, //Apex DLC
            { "hgun_Pistol_01_F", "", 20000, -1, "" }, //Apex DLC
            { "SMG_05_F", "", 180000, -1, "" } //Apex DLC
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 75, 100, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "arifle_TRG20_F", "", 25000, 2500, "" },
            { "arifle_Katiba_F", "", 30000, 5000, "" },
            { "srifle_DMR_01_F", "", 50000, -1, "" },
            { "arifle_SDAR_F", "", 20000, 7500, "" },
			{ "arifle_MX_F", "", 20000, 7500, "" },
			{ "arifle_Mk20C_plain_F", "", 20000, 7500, "" },
			{ "arifle_Mk20_plain_F", "", 20000, 7500, "" },
			{ "arifle_Katiba_C_F", "", 20000, 7500, "" },
			{ "arifle_MX_SW_F", "", 20000, 7500, "" },
			{ "arifle_MXC_F", "", 20000, 7500, "" },
			{ "SMG_01_F", "", 20000, 7500, "" },
			{ "srifle_EBR_F", "", 20000, 7500, "" },
			{ "arifle_TRG21_F", "", 20000, 7500, "" },
	        { "srifle_DMR_04_F", "", 50000, 7500, "" },
	        { "srifle_DMR_04_Tan_F", "", 50000, 7500, "" },
	        { "srifle_DMR_02_F", "", 50000, 7500, "" },
	        { "srifle_DMR_02_camo_F", "", 50000, 7500, "" },
	        { "srifle_DMR_02_sniper_F", "", 50000, 7500, "" },
	        { "srifle_DMR_03_multicam_F", "", 50000, 7500, "" },
	        { "srifle_DMR_03_khaki_F", "", 50000, 7500, "" },
	        { "srifle_DMR_03_tan_F", "", 50000, 7500, "" },
	        { "srifle_DMR_03_woodland_F", "", 50000, 7500, "" },
	        { "srifle_DMR_06_camo_F", "", 50000, 7500, "" },
	        { "srifle_DMR_06_olive_F", "", 50000, 7500, "" },
            { "arifle_AK12_F", "", 22000, 7500, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 7500, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 7500, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 7500, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 7500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 5000, "" }, //Apex DLC
	        { "arifle_ARX_ghex_F", "", 22000, 7500, "" }, //Apex DLC
	        { "arifle_ARX_hex_F", "", 22000, 7500, "" }, //Apex DLC
	        { "arifle_CTARS_blk_F", "", 45000, 7500, "" }, //Apex DLC
	        { "arifle_SPAR_01_khk_F", "", 33000, 7500, "" }, //Apex DLC
	        { "arifle_SPAR_01_snd_F", "", 33000, 7500, "" }, //Apex DLC
	        { "arifle_SPAR_02_blk_F", "", 33000, 7500, "" }, //Apex DLC
	        { "arifle_SPAR_02_khk_F", "", 33000, 7500, "" }, //Apex DLC
	        { "arifle_SPAR_02_snd_F", "", 33000, 7500, "" }, //Apex DLC
	        { "arifle_SPAR_03_blk_F", "", 33000, 7500, "" }, //Apex DLC
	        { "arifle_SPAR_03_khk_F", "", 33000, 7500, "" }, //Apex DLC
	        { "arifle_SPAR_03_snd_F", "", 33000, 7500, "" }, //Apex DLC
	        { "srifle_DMR_07_blk_F", "", 50000, 7500, "" }, //Apex DLC
	        { "srifle_DMR_07_ghex_F", "", 50000, 7500, "" }, //Apex DLC
	        { "srifle_DMR_07_hex_F", "", 50000, 7500, "" }, //Apex DLC
	        { "hgun_Pistol_01_F", "", 15000, 2500, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 100, "" },
			{ "30Rnd_65x39_caseless_mag", "", 130, 100, "" },
			{ "30Rnd_556x45_Stanag_red", "", 130, 100, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 130, 100, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 100, "" },
            { "30Rnd_545x39_Mag_F", "", 300, 100, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 100, "" },
            { "10Rnd_762x54_Mag", "", 500, 100, "" },
			{ "100Rnd_65x39_caseless_mag", "", 500, 100, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 100, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 100, "" }, //Apex DLC
	        { "10Rnd_127x54_Mag", "", 500, 100, "" },
	        { "10Rnd_338_Mag", "", 500, 100, "" },
	        { "20Rnd_762x51_Mag", "", 500, 100, "" },
	        { "200Rnd_65x39_cased_Box", "", 500, 100, "" },
	        { "10Rnd_9x21_Mag", "", 125, 100, "" },
            { "100Rnd_580x42_Mag_F", "", 500, 100, "" }, //Apex DLC
	        { "20Rnd_650x39_Cased_Mag_F", "", 500, 100, "" }, //Apex DLC
	        { "10Rnd_50BW_Mag_F", "", 500, 100, "" }, //Apex DLC
	        { "150Rnd_556x45_Drum_Mag_F", "", 500, 100, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 100, "" },
            { "optic_Holosight", "", 3600, 100, "" },
            { "optic_Hamr", "", 7500, 100, "" },
            { "acc_flashlight", "", 1000, 100, "" },
	        { "optic_AMS", "", 8500, 100, "" },  
	        { "optic_AMS_khk", "", 8500, 100, "" },
	        { "optic_AMS_snd", "", 8500, 100, "" },
	        { "optic_KHS_blk", "", 8500, 100, "" },
       	    { "optic_KHS_hex", "", 8500, 100, "" },
	        { "optic_KHS_old", "", 8500, 100, "" },
	        { "optic_KHS_tan", "", 8500, 100, "" },
	        { "bipod_01_F_blk", "", 5000, 100, "" },
	        { "bipod_01_F_mtp", "", 5000, 100, "" },
	        { "bipod_01_F_snd", "", 5000, 100, "" },
	        { "bipod_02_F_blk", "", 5000, 100, "" },
	        { "bipod_02_F_hex", "", 5000, 100, "" },
	        { "bipod_02_F_tan", "", 5000, 100, "" },
	        { "bipod_03_F_blk", "", 5000, 100, "" },
	        { "bipod_03_F_oli", "", 5000, 100, "" },
	        { "optic_ERCO_khk_F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_ERCO_snd_F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_ERCO_blk_F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_ARCO_ghex_F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_ARCO_blk-F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_DMS_ghex_F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_Hamr_khk_F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_LRPS_ghex_F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_LRPS_tna_F", "", 7500, 100, "" }, //Apex DLC
	        { "optic_SOS_khk_F", "", 7500, 100, "" } //Apex DLC
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, 65, "" },
            { "NVGoggles", "", 10000, 980, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, 50, "" },
            { "Chemlight_green", "", 1500, 50, "" },
            { "Chemlight_blue", "", 1500, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles_OPFOR", "", 2000, 980, "" },
            { "O_NVGoggles_urb_F", "", 5000, 1250, "call life_coplevel >= 4" },
			{ "NVGogglesB_blk_F", "", 5000, 1250, "call life_coplevel >= 5" },
            { "HandGrenade_Stone", "Flashbang", 1700, -1, "" },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650, "" },
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500, "" },
            { "hgun_P07_F", "", 7500, 1500, "" },
            { "SMG_02_ACO_F", "", 30000, -1, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 7500, "call life_coplevel >= 2" },
	        { "arifle_MXC_khk_F", "", 35000, 7500, "call life_coplevel >= 2" },
	        { "arifle_MX_khk_F", "", 35000, 7500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, -1, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 5000, "call life_coplevel >= 3" },
	        { "SMG_05_F", "", 30000, 5000, "call life_coplevel >= 3" },
	        { "arifle_MX_SW_khk_F", "", 30000, 5000, "call life_coplevel >= 4" },
	        { "LMG_Mk200_F", "", 45000, 5000, "call life_coplevel >= 4" },
	        { "LMG_Zafir_F", "", 55000, 5000, "call life_coplevel >= 5" },
            // Snipers
            { "srifle_DMR_07_blk_F", "", 32000, 5000, "call life_coplevel >= 3" }, //Apex DLC
	        { "srifle_DMR_03_F", "", 32000, 5000, "call life_coplevel >= 5" },
	        { "srifle_DMR_05_blk_F", "", 32000, 5000, "call life_coplevel >= 5" },
	        { "srifle_DMR_05_hex_F", "", 32000, 5000, "call life_coplevel >= 5" },
	        { "srifle_DMR_05_tan_F", "", 32000, 5000, "call life_coplevel >= 5" },
	        { "srifle_GM6_ghex_F", "", 45000, 10000, "call life_coplevel >= 6" }, //Apex DLC
	        { "srifle_LRR_tna_F", "", 45000, 10000, "call life_coplevel >= 6" } //Apex DLC
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 130, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 100, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" }, //Apex DLC
	        { "100Rnd_65x39_caseless_mag", "", 200, 100, "call life_coplevel >= 4" }, //Apex DLC
	        { "200Rnd_65x39_cased_Box", "", 200, 100, "call life_coplevel >= 4" },
	        { "20Rnd_762x51_Mag", "", 200, 100, "call life_coplevel >= 5" },
	        { "150Rnd_762x54_Box", "", 200, 100, "call life_coplevel >= 5" },
	        { "10Rnd_93x64_DMR_05_Mag", "", 200, 100, "call life_coplevel >= 5" },
	        { "5Rnd_127x108_Mag", "", 300, 100, "call life_coplevel >= 6" }, //Apex DLC
	        { "7Rnd_408_Mag", "", 300, 100, "call life_coplevel >= 6" } //Apex DLC
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 100, "" },
            { "acc_flashlight", "", 750, 100, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 100, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_B", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_B_khk_F", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_B_snd_F", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H_MG", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H_MG_khk_F", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H_MG_blk_F", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_93mmg", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_93mmg_tan", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_B", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_B_khk_F", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_B_snd_F", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H_MG", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H_MG_khk_F", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_H_MG_blk_F", "", 2750, 100, "call life_coplevel >= 2" },
            { "muzzle_snds_L", "", 2750, 100, "call life_coplevel >= 2" },
            { "bipod_01_F_blk", "", 2750, 100, "call life_coplevel >= 2" },
	        { "bipod_01_F_mtp", "", 2750, 100, "call life_coplevel >= 2" },
	        { "bipod_01_F_snd", "", 2750, 100, "call life_coplevel >= 2" },
	        { "bipod_02_F_blk", "", 2750, 100, "call life_coplevel >= 2" },
	        { "bipod_02_F_hex", "", 2750, 100, "call life_coplevel >= 2" },
	        { "bipod_02_F_tan", "", 2750, 100, "call life_coplevel >= 2" },
	        { "bipod_03_F_blk", "", 2750, 100, "call life_coplevel >= 2" },
	        { "bipod_03_F_oli", "", 2750, 100, "call life_coplevel >= 2" },
            { "optic_MRD", "", 2750, 100, "call life_coplevel >= 2" },
	        { "optic_ERCO_khk_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_ERCO_snd_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_ERCO_blk_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_ARCO_ghex_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_ARCO_blk-F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_DMS_ghex_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_Hamr_khk_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_LRPS_ghex_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_LRPS_tna_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_SOS_khk_F", "", 2750, 100, "call life_coplevel >= 2" }, //Apex DLC
	        { "optic_AMS", "", 2750, 100, "call life_coplevel >= 2" },
	        { "optic_AMS_khk", "", 2750, 100, "call life_coplevel >= 2" },
	        { "optic_AMS_snd", "", 2750, 100, "call life_coplevel >= 2" },
	        { "optic_KHS_blk", "", 2750, 100, "call life_coplevel >= 2" },
	        { "optic_KHS_hex", "", 2750, 100, "call life_coplevel >= 2" },
	        { "optic_KHS_old", "", 2750, 100, "call life_coplevel >= 2" },
	        { "optic_KHS_tan", "", 2750, 100, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};