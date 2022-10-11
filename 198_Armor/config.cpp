class CfgPatches
{
  class Aux_198
    {
     author="Mickey";
     name="198th Aux Mod";
     units[]=
     {
      "Arc_170_198",
      "LAAT_MK1_198",
      "LAAT_MK2_198",
      "LAATC_198",
      "Nu_Class_198",
      "Z95_198",
      "ATJT_198",
      "Saber_M1_198",
      "BARC_198",
      "RTT_Wheeled_198"
     };
     weapons[]={};
     magazines[]={};
     ammo[]={};
     requiredVersion=0.1;
     requiredAddons[]={};
    };
};

class CfgFactionClass 
{
	class Faction198
    {
     displayName = "198th SOB";
	};
};  
class CfgEditorCategories
{
    class Editor_198
    {
     displayName = "198th SOB";
    };
};
class CfgEditorSubcategories 
{
    class Airframes_198
    {
     displayName="Airframes"  
    };
    class Mechanized_198
    {
     displayName="Mechanized"  
    };
    class Motorized_198
    {
     displayName="Motorized"  
    };
    class Armored_198
    {
     displayName="Armored"  
    };
};  

class Mode_Burst;
class Mode_SemiAuto;
class Mode_FullAuto;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class MuzzleSlot;
class UGL_F; 


class CfgWeapons
{
 class SWLB_clone_AB_helmet;
 class SWLB_clone_P2_helmet;
 class SWLB_clone_P15_helmet;
 class SWLB_clone_P1_2_helmet;
 class SWLB_P2_SpecOps_Helmet;
 class SWLB_clone_eng_helmet;
 class SWLB_clone_arc_armor;
 class SWLB_clone_commando_helmet_k1;
 class SWLB_clone_ARF_P1_helmet;
 class SWLB_clone_airborne_armor;
 class SWLB_clone_officer_armor;
 class SWLB_clone_kama_armor;
 class SWLB_clone_recon_armor;
 class SWLB_clone_assault_armor;
 class SWLB_CEE_Engineer_Vest_Officer;
 class SWLB_CEE_Engineer_Vest_NCO;
 class SWLB_clone_medic_armor;
 class HeadgearItem;
 class VestItem;
 class UniformItem;
 class SWLB_clone_basic_armor;
 class SWLB_clone_commando_uniform_k1;
 class SWLB_clone_uniform;
 class SWLB_clone_rangefinder;
    

 #include "cfg\Weapons.hpp"   
    
 class Officer_Rangefinder_198: SWLB_clone_rangefinder
 {
  author="McDaniel";
  displayName="[198th] Officer Rangefinder";
  scope=2;
  scopeArsenal=2;
  modelOptics="-";   
  hiddenSelections[]=
  {
   "camo1"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\NVG\Clone_nvg_range_198_co.paa"
  };
  visionMode[]=
  {
   "Normal",
   "NVG",
   "TI"
  };  
  class ItemInfo
		{
			type=616;
			uniformModel="\SWLB_clones\SWLB_clone_rangefinder_on.p3d";
			modelOff="\SWLB_clones\SWLB_clone_rangefinder_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
 };

 #include "cfg\Helmets.hpp"
 #include "cfg\Vests.hpp"
 #include "cfg\Uniforms_Weapon.hpp"
};
class CfgMagazines
{
 #include "cfg\Magazines.hpp"
};
class CfgAmmo
{
    class M_Titan_AT;
	class M_Titan_AA;
	class ab198_ammoHEAT: M_Titan_AT
	{
		airLock=1;
		manualControl=1;
		maxControlRange = 1500;
		weaponLockSystem=8;
		hit=1400;
		cmImmunity=0.25;
		missileLockMaxSpeed=30;
	};
	class ab198_ammoAA: M_Titan_AA
	{
		airLock=2;
		missileLockMaxSpeed = 250;
		hit=700;
	};  
  class ls_ammo_rpg;
  class ab198_ammo_rps: ls_ammo_rpg
  {
   caliber=1;
   hit=900;
  };
};
class CfgVehicles
{
 class SWLB_clone_base_P2;
 #include "cfg\Bags.hpp"
 #include "cfg\Uniforms_Vehicles.hpp"
 #include "cfg\Vehicles\Mechanized.hpp"
 #include "cfg\Vehicles\Motorized.hpp"
 #include "cfg\Vehicles\Armored.hpp"
 #include "cfg\Vehicles\Aviation.hpp"
};