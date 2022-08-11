class CfgPatches
{
  class Aux_198
    {
     author="Mickey";
     name="198th Aux Mod";
     units[]={};
     weapons[]={};
     magazines[]={};
     ammo[]={};
     requiredVersion=0.1;
     requiredAddons[]={};
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
 class SWLB_clone_arc_armor;
 class SWLB_clone_commando_helmet_k1;
 class SWLB_clone_ARF_P1_helmet;
 class SWLB_clone_airborne_armor;
 class SWLB_clone_officer_armor;
 class SWLB_clone_kama_armor;
 class SWLB_clone_recon_armor;
 class SWLB_clone_assault_armor;
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
class CfgVehicles
{
 class SWLB_clone_base_P2;
 #include "cfg\Bags.hpp"
 #include "cfg\Uniforms_Vehicles.hpp"
};