/**
 * config.cpp
 *
 * PB-Retextures
 * www.phantombyte.dev
 * © 2024 PhantomByte Development
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/
class CfgPatches
{
	class PB_Retextures_Backpacks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			//"PB_Core",
			"DZ_Characters",
			"DZ_Characters_Backpacks"
		};
	};
};

class CfgVehicles
{
	class CoyoteBag_ColorBase;
	class MountainBag_ColorBase;
	class TaloonBag_ColorBase;
	class AssaultBag_ColorBase; // known as boulderbag
	class AliceBag_ColorBase;
	class ArmyPouch_ColorBase;
	class TortillaBag;
	class HuntingBag;

	class PB_UK_CoyoteBag: CoyoteBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"PBRetextures\Characters\Backpacks\data\PBUKCoyote_co.paa",
			"PBRetextures\Characters\Backpacks\data\PBUKCoyote_co.paa",
			"PBRetextures\Characters\Backpacks\data\PBUKCoyote_co.paa"
		};
	};

	/*class PB_UK_MountainBag: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Red_co.paa",
			"DZ\characters\backpacks\data\Mountain_Red_co.paa",
			"DZ\characters\backpacks\data\Mountain_Red_co.paa"
		};
	};

	class PB_UK_TaloonBag: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa",
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa",
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa"
		};
	};

	class PB_UK_AssaultBag: AssaultBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa"
		};
	};

	class PB_UK_AliceBag: AliceBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\alicebackpack_co.paa",
			"\dz\characters\backpacks\data\alicebackpack_co.paa",
			"\dz\characters\backpacks\data\alicebackpack_co.paa"
		};
	};

	class PB_UK_ArmyPouch: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa"
		};
	};

	class PB_UK_TortillaBag: TortillaBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa"
		};
	};

	class PB_UK_HuntingBag: HuntingBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa"
		};
	};*/
};