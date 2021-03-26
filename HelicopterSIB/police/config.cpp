class CfgPatches
{
	class HelicopterModSIB_police
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"HelicopterModScriptsSIB"};
	};
};
class CfgMods
{
	class HelicopterModSIB_police
	{
		dir="HelicopterSIB\police";
		hideName=0;
		hidePicture=0;
		name="HelicopterModSIB_police";
		credits="";
		author="SIBNIC";
		authorID="";
		version="version 1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			
			
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB/police/4_World"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB/police/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HelicopterSIB/police/5_Mission"
				};
			};
		};
	};
};


class CfgVehicles
{
	
	
	class AnimationSources;
	class CarDoor;
	
	class SIBPolice_Door_1_1: CarDoor
	{
		scope = 2;
		displayName = "doors_driver";
		descriptionShort = "doors_driverD";
		model = "\HelicopterSIB\police\SIBPolice_doors_driver.p3d";
		inventorySlot[] = {"SIBPolice_Door_1_1"};
		rotationFlags = 8;
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib.rvmat"};
	};
	class SIBPolice_Door_1_1_swat: SIBPolice_Door_1_1
	{
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_SWAT_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib_swat.rvmat"};
	};
	class SIBPolice_Door_1_2: CarDoor
	{
		scope = 2;
		displayName = "$STR_doors_cargo1";
		descriptionShort = "$STR_doors_cargo1d";
		model = "\HelicopterSIB\police\SIBPolice_doors_cargo1.p3d";
		inventorySlot[] = {"SIBPolice_Door_1_2"};
		rotationFlags = 8;
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib.rvmat"};
	};
	class SIBPolice_Door_1_2_swat: SIBPolice_Door_1_2
	{
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_SWAT_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib_swat.rvmat"};
	};
	class SIBPolice_Door_2_1: CarDoor
	{
		scope = 2;
		displayName = "$STR_SIBPolice_doors_codriver";
		descriptionShort = "$STR_SIBPolice_doors_codriverd";
		model = "\HelicopterSIB\police\SIBPolice_doors_codriver.p3d";
		inventorySlot[] = {"SIBPolice_Door_2_1"};
		rotationFlags = 8;
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib.rvmat"};
	};
	class SIBPolice_Door_2_1_swat: SIBPolice_Door_2_1
	{
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_SWAT_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib_swat.rvmat"};
	};
	class SIBPolice_Door_2_2: CarDoor
	{
		scope = 2;
		displayName = "$STR_SIBPolice_doors_cargo2";
		descriptionShort = "$STR_SIBPolice_doors_cargo2d";
		model = "\HelicopterSIB\police\SIBPolice_doors_cargo2.p3d";
		inventorySlot[] = {"SIBPolice_Door_2_2"};
		rotationFlags = 8;
		hiddenSelections[] = {"camo1_door"};
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib.rvmat"};
	};
	class SIBPolice_Door_2_2_swat: SIBPolice_Door_2_2
	{
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_SWAT_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib_swat.rvmat"};
	};
	class HeliSIB_middle;
	class HeliSIB_police_base: HeliSIB_middle
	{
		scope=1;
		attachments[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2","SIBPolice_Door_1_1","SIBPolice_Door_1_2","SIBPolice_Door_2_1","SIBPolice_Door_2_2"};
		model="\HelicopterSIB\police\police.p3d";
		class GUIInventoryAttachmentsProps
		{
			class Chassis
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "cat_vehicle_chassis";
				attachmentSlots[] = {"NivaWheel_1_1","NivaWheel_1_2","NivaWheel_2_1","NivaWheel_2_2"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon="cat_vehicle_body";
				attachmentSlots[] = {"SIBPolice_Door_1_1","SIBPolice_Door_1_2","SIBPolice_Door_2_1","SIBPolice_Door_2_2"};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 6000;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class DamageZones
			{
				class Body
				{
					fatalInjuryCoef = 0.001;
					memoryPoints[] = {"dmgzone_body"};
					componentNames[] = {"dmgzone_body"};
					class Health
					{
						hitpoints = 10000;
						transferToGlobalCoef = 0.001;
					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
				};
				class Chassis
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_chassis"};
					componentNames[] = {"dmgzone_chassis"};
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;

					};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Engine
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_engine"};
					componentNames[] = {"dmgzone_engine"};
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Fuel
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgzone_fuel"};
					memoryPoints[] = {"dmgzone_fuel"};
					class Health
					{
						hitpoints = 1700;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlotsCoefs[] = {};
					inventorySlots[] = {};
				};
				class Rotor1
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor1"};
					componentNames[] = {"dmgzone_rotor1"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class Rotor2
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgzone_rotor2"};
					componentNames[] = {"dmgzone_rotor2"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;

					};
					transferToZonesNames[] = {};
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				
			};
		};
		class AnimationSources:AnimationSources
		{
			class beam1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
			class beam2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.5;
			};
		};
	};
	class Helipolice_SIB4: HeliSIB_police_base
	{
		scope=2;
		displayName="Police";
		descriptionShort="Police";
	};
	class Helipolice_swat_SIB5: HeliSIB_police_base
	{
		
		scope=2;
		displayName="swat";
		descriptionShort="swat";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] ={"HelicopterSIB\police\data\Helicopter_Police_SWAT_D.paa"};
		hiddenSelectionsMaterials[] = {	"HelicopterSIB\police\data\heli_extsib_swat.rvmat"};
	};
};
	
class CfgSlots
{
	class Slot_SIBPolice_Door_1_1
	{
		name="SIBPolice_Door_1_1";
		displayName="Left Door";
		ghostIcon="doorfront";
	};
	class Slot_SIBPolice_Door_2_1
	{
		name="SIBPolice_Door_2_1";
		displayName="Right Door";
		ghostIcon="doorfront";
	};
	class Slot_SIBPolice_Door_1_2
	{
		name="SIBPolice_Door_1_2";
		displayName="Left Back Door";
		ghostIcon="doorrear";
	};
	class Slot_SIBPolice_Door_2_2
	{
		name="SIBPolice_Door_2_2";
		displayName="Right Back Door";
		ghostIcon="doorrear";
	};
};

class CfgNonAIVehicles
{
	class ProxyVehiclePart;
	class ProxySIBPolice_doors_driver: ProxyVehiclePart
	{
		model = "\HelicopterSIB\police\SIBPolice_doors_driver.p3d";
		inventorySlot = "SIBPolice_Door_1_1";
	};
	class ProxySIBPolice_doors_codriver: ProxyVehiclePart
	{
		model = "\HelicopterSIB\police\SIBPolice_doors_codriver.p3d";
		inventorySlot = "SIBPolice_Door_2_1";
	};
	class ProxySIBPolice_doors_cargo1: ProxyVehiclePart
	{
		model = "\HelicopterSIB\police\SIBPolice_doors_cargo1.p3d";
		inventorySlot = "SIBPolice_Door_1_2";
	};
	class ProxySIBPolice_doors_cargo2: ProxyVehiclePart
	{
		model = "\HelicopterSIB\police\SIBPolice_doors_cargo2.p3d";
		inventorySlot = "SIBPolice_Door_2_2";
	};
};