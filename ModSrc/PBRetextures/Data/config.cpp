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
	class PB_Retextures_Data
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			//"PB_Core"
		};
	};
};

class CfgMods
{
	class PBRetextures
	{
		dir = "PBRetextures";		
		//credits = "";
		//inputs = "PBmodname/Scripts/Data/Inputs.xml";
		extra = 0;
		type = "mod";

		//name = "";
		
		//picture = "PBmodname/GUI/textures/name_icon.edds";
		//logo = "PBmodname/GUI/textures/name_icon.edds";
		//logoSmall = "PBmodname/GUI/textures/name_icon.edds";
		//logoOver = "PBmodname/GUI/textures/name_icon.edds";
		
		tooltip = "PB-Retextures";
		//overview = "";
		action = "";
		//author = "";
		authorID = "";

		class defs
		{
			class imageSets
			{
				files[]=
				{
					"PBRetextures/GUI/Imagesets/name.imageset",
					"PBRetextures/GUI/Imagesets/name.imageset"
				};
			};
		};
	};
};