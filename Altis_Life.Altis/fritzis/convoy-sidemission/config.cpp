/*
	Author: Maverick Applications
	Convoy sidemission for Altis Life servers
*/

class Maverick_ConvoySidemission
{
	class Config
	{
		ConfigPool[] 							= {"GoldBarTransport"};
		ForceConfigAtIndex 						= -1;
		SleepTime								= 300;
		MakePlayersHostileFor					= 180;
		SidesNotAttackable[]					= {"WEST"};
		AIDifficulty[] = {
												{"aimingAccuracy", 1},
												{"aimingShake", 1},
												{"aimingSpeed", 1},
												{"endurance", 1},
												{"spotDistance", 1},
												{"spotTime", 1},
												{"courage", 1},
												{"reloadSpeed", 1},
												{"commanding", 1},
												{"general", 1}
		};
	};
	class ConvoyConfigurationsPool
	{
		/*********************** EXAMPLE TRANSPORT FOR VIRTUAL ITEMS ***********************/
		class GoldBarTransport
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Gold Transport";
			};

			class AIUnits
			{
				gear[] = {
												"H_HelmetB_light_grass", // Headgear
												"", // Glasses
												"U_B_CombatUniform_mcam_tshirt", // Uniform
												"V_PlateCarrierL_CTRG", // Vest
												"", // Backpack
												{"srifle_EBR_MRCO_pointer_F", "20Rnd_762x51_Mag", 5}, // Primary weapon, ammo and how many magazines
												{"", "", 5}, // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Gold Transport";
				startAnnouncementDescription	= "The Federal Reserve's guarded transporter is currently moving larger amounts of gold.";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Gold Transporter disabled";
				stoppedAnnouncementDescription	= "The gold transporter has been disabled.";

				// Mission completed announcement
				endAnnouncementHeader			= "Gold Transport ended";
				endAnnouncementDescription  	= "The mission has ended.";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"C_Van_01_fuel_F","C_Van_01_fuel_F","C_Van_01_fuel_F"};
				vehiclesSpawnMarkersInOrder[]	= {"fritzi_convoy_spawn1","fritzi_convoy_spawn2","fritzi_convoy_spawn3"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 1;
				maxSpeed						= 30;
				removeVehiclesAfterSeconds		= 600;
				additionalUnitsAmount			= 10;
			};

			class Route
			{
				// Route configuration
				markers[] 						= {"fritzi_convoy_waypoint1","fritzi_convoy_waypoint2","fritzi_convoy_waypoint3","fritzi_convoy_waypoint4","fritzi_convoy_waypoint5","fritzi_convoy_waypoint6","fritzi_convoy_waypoint7","fritzi_convoy_waypoint8","fritzi_convoy_waypoint10","fritzi_convoy_waypoint11","fritzi_convoy_waypoint12","fritzi_convoy_waypoint13"};
			};

			class Loot
			{
				type 							= "virtual";
				container						= "Land_CargoBox_V1_F";
				data[] = {
												{"goldbar", 10}
				};
			};
		};


		/*********************** EXAMPLE TRANSPORT FOR REAL ITEMS ***********************/
		class WeaponTransport
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Weapon Transport";
			};

			class AIUnits
			{
				gear[] = {
												"H_MilCap_gen_F", // Headgear
												"", // Glasses
												"U_B_GEN_Soldier_F", // Uniform
												"V_TacVest_gen_F", // Vest
												"", // Backpack
												{"arifle_SPAR_01_blk_F", "30Rnd_556x45_Stanag", 5}, // Primary weapon, ammo and how many magazines
												{"", "", 5}, // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Weapon Transport";
				startAnnouncementDescription	= "The local army is currently transporting larger amounts of weapons through Tanoa with ground vehicles.";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Weapon Transporter disabled";
				stoppedAnnouncementDescription	= "The Weapon transporter has been disabled.";

				// Mission completed announcement
				endAnnouncementHeader			= "Weapon Transport ended";
				endAnnouncementDescription  	= "The mission has ended.";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"O_T_LSV_02_armed_F","O_T_LSV_02_unarmed_F","O_T_Truck_03_ammo_ghex_F","O_T_LSV_02_unarmed_F"};
				vehiclesSpawnMarkersInOrder[]	= {"fritzi_convoy_spawn1","fritzi_convoy_spawn2","fritzi_convoy_spawn3","fritzi_convoy_spawn4"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 2;
				maxSpeed						= 30;
				removeVehiclesAfterSeconds		= 600;
				additionalUnitsAmount			= 10;
			};

			class Route
			{
				// Route configuration
				markers[] 						= {"fritzi_convoy_waypoint1","fritzi_convoy_waypoint2","fritzi_convoy_waypoint3","fritzi_convoy_waypoint4","fritzi_convoy_waypoint5","fritzi_convoy_waypoint6","fritzi_convoy_waypoint7","fritzi_convoy_waypoint8","fritzi_convoy_waypoint10","fritzi_convoy_waypoint11","fritzi_convoy_waypoint12","fritzi_convoy_waypoint13"};
			};

			class Loot
			{
				type 							= "real";
				container						= "B_supplyCrate_F";
				data[] = {
												{"srifle_DMR_01_F", 1, "WEAPON"},
												{"optic_SOS", 1, "ITEM"},
												{"10Rnd_762x54_Mag", 1, "MAGAZINE"},
												{"B_Kitbag_mcamo", 1, "BACKPACK"}
				};
			};
		};
	};
};