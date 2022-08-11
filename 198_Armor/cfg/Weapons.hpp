class 3AS_DC15A_F;
class DC15A_198: 3AS_DC15A_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] DC-15A Rifle";
 magazines[]=
 {
  "DC15A_Mag_198"  
 };
 class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"3AS_Muzzle_LE_DC15A"
				};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"3AS_Optic_Red_DC15A",
					"3AS_Optic_LEScope_DC15A"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
 modes[]=
 {
  "Single",
  "Burst",
  "FullAuto"
 };
 class Burst: Mode_Burst
 {
			reloadTime=0.050000001;
			dispersion=0.00066000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
		};
 class Single: Mode_SemiAuto
 {
			reloadTime=0.1;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
		}; 
 class FullAuto: Mode_FullAuto
 {
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
            class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
            class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
        };
};
class 3AS_DC15A_GL;
class DC15A_UGL_198: 3AS_DC15A_GL
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] DC-15A Rifle (UGL)";
 magazines[]=
 {
  "DC15A_Mag_198"  
 };
 muzzles[]=
 {
  "this",
  "3AS_GL_F"
 };
class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
 modes[]=
 {
  "Single",
  "Burst",
  "FullAuto"
 };
 class Burst: Mode_Burst
 {
			reloadTime=0.050000001;
			dispersion=0.00066000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
		};
 class Single: Mode_SemiAuto
 {
			reloadTime=0.1;
			dispersion=0.00066000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
		}; 
 class FullAuto: Mode_FullAuto
 {
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
            class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
            class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0014545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
        };     
};
class 3AS_DC15S_Base_F;
class DC15S_198: 3AS_DC15S_Base_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] DC-15S Rifle";  
 model="3AS\3AS_Weapons\DC15S\3AS_DC15s_f";
 picture="\3AS\3AS_Weapons\DC15S\Data\Textures\DC15S_Arsenal.paa";   
 magazines[]=
 {
  "DC15S_Mag_198"  
 };   
};
class 3AS_WestarM5_F;
class WestarM5_198: 3AS_WestarM5_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] Westar M5";  
 model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
 picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";   
 magazines[]=
 {
  "3AS_60Rnd_EC50_Mag"  
 };     
 class WeaponSlotsInfo: WeaponSlotsInfo  
 {
  class CowsSlot: CowsSlot
  {
	  linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
	  compatibleItems[]=
	  {
		  "3AS_Optic_Scope_WestarM5",
          "OPTRE_M7_Sight"
	  };
  };
  class PointerSlot: PointerSlot
  {
	  linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
	  compatibleItems[]=
	  {
		  "acc_flashlight",
		  "acc_pointer_IR"
	  };
  };
  class UnderBarrelSlot: UnderBarrelSlot
  {
	  linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
	  compatibleItems[]={};
  };  
 };
 modes[]=
 {
			"Single",
			"Burst",
			"FullAuto"
		};
 class Burst: Mode_Burst
 {
			reloadTime=0.050000001;
			dispersion=0.00079000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
 class Single: Mode_SemiAuto
 {
			reloadTime=0.1;
			dispersion=0.00052;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
		};
 class FullAuto: Mode_FullAuto
 {
			reloadTime=0.079999998;
			dispersion=0.00079000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15A_Shot_SoundSet"
				};
			};
		};   
};
class SWLW_Z6;
class Z6_198: SWLW_Z6
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] Z6 Rotary Blaster Canon";
 magazines[]=
 {
  "Z6_Mag_198"  
 };
};
class JLTS_DP23;
class DP23_198: JLTS_DP23
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] DP-23";
};
class 3AS_DC15L_F;
class DC15L_198: 3AS_DC15L_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] DC-15L Rifle";  
 class WeaponSlotsInfo: WeaponSlotsInfo
 {
	 class MuzzleSlot: MuzzleSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
		 compatibleItems[]={};
		 iconPosition[]={0,0.44999999};
		 iconScale=0.2;
	 };
	 class CowsSlot: CowsSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
		 compatibleItems[]=
		 {
             "OPTRE_M7_Sight",
             "3as_optic_dc15l"
		 };
	 };
	 class PointerSlot: PointerSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
		 compatibleItems[]=
		 {
			 "acc_flashlight",
			 "acc_pointer_IR"
		 };
	 };
	 class UnderBarrelSlot: UnderBarrelSlot
	 {
		 linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDE ARREL";
		 compatibleItems[]={};
	 };
 };
};
class 3AS_Valken38X_F;
class Valken_198: 3AS_Valken38X_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] Valken-38X_F";  
};
class 3AS_RPS6_HP;
class RPS6_198: 3AS_RPS6_HP
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] RPS6 Heavy Projectile";  
};
class 3AS_PLX1_F;
class PLX1_198: 3AS_PLX1_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] PLX-1 Guided Missile Launcher";    
};
class 3AS_DC17S_F;
class DC17S_198: 3AS_DC17S_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] DC-17S Sidearm";  
 magazines[]=
 {
  "3AS_16Rnd_EC20_Mag",
  "JLTS_stun_mag_short",
  "JLTS_stun_mag_long"
 };
};
class 3AS_DC17STest_F;
class DC17_Dual_198: 3AS_DC17STest_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] Dual DC-17S Sidearm";  
 magazines[]=
 {
  "3AS_16Rnd_EC20_Mag",
  "JLTS_stun_mag_short",
  "JLTS_stun_mag_long"
 };    
};
class 3AS_DC15C_F;
class DC15C_198: 3AS_DC15C_F
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] DC-15C";  
 class WeaponSlotsInfo: WeaponSlotsInfo
 {
	 class MuzzleSlot: MuzzleSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
		 compatibleItems[]={};
		 iconPosition[]={0,0.44999999};
		 iconScale=0.2;
	 };
	 class CowsSlot: CowsSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
		 compatibleItems[]=
		 {
             "OPTRE_M7_Sight",
             "3as_optic_acog_dc15c",
             "3as_optic_reflex_dc15c"
		 };
	 };
	 class PointerSlot: PointerSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
		 compatibleItems[]=
		 {
			 "acc_flashlight",
			 "acc_pointer_IR"
		 };
	 };
	 class UnderBarrelSlot: UnderBarrelSlot
	 {
		 linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDE ARREL";
		 compatibleItems[]={};
	 };
 };
};
class 3AS_DC15C_GL;
class DC15CGL_198: 3AS_DC15C_GL
{
 scope=2;
 scopeArsenal=2;
 displayName="[198th] DC-15C (UGL)";  
 class WeaponSlotsInfo: WeaponSlotsInfo
 {
	 class MuzzleSlot: MuzzleSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
		 compatibleItems[]={};
		 iconPosition[]={0,0.44999999};
		 iconScale=0.2;
	 };
	 class CowsSlot: CowsSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
		 compatibleItems[]=
		 {
             "OPTRE_M7_Sight",
             "3as_optic_acog_dc15c",
             "3as_optic_reflex_dc15c"
		 };
	 };
	 class PointerSlot: PointerSlot
	 {
		 linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
		 compatibleItems[]=
		 {
			 "acc_flashlight",
			 "acc_pointer_IR"
		 };
	 };
	 class UnderBarrelSlot: UnderBarrelSlot
	 {
		 linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDE ARREL";
		 compatibleItems[]={};
	 };
 };
};