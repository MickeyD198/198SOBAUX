class CloneVest_Kama_198: SWLB_clone_kama_armor
{
 displayName="[198th] Clone Vest (Kama)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_kama_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_kama_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "rank"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_officer_co.paa",
   ""
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_kama_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "rank"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_officer_co.paa",
   ""
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_Officer_198: SWLB_clone_officer_armor
{
 displayName="[198th] Clone Vest (Officer)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_officer_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_officer_co.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_officer_co.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_Recon_198: SWLB_clone_recon_armor
{
 displayName="[198th] Clone Vest (Recon)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_recon_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_recon_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo2",
      "holster",
      "pauldron"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\heavy_accessories_co.paa",
   "",
   "\SWLB_clones\data\heavy_accessories_co.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_recon_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "camo2",
      "holster",
      "pauldron"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\heavy_accessories_co.paa",
   "",
   "\SWLB_clones\data\heavy_accessories_co.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_AB_198: SWLB_clone_airborne_armor
{
 displayName="[198th] Clone Vest (Airborne)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo2",
      "ammo",
      "pauldron"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\heavy_accessories_co.paa",
   "198_Armor\data\Vests\198_vest_officer_co.paa",
   "\SWLB_clones\data\heavy_accessories_co.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "camo2",
      "ammo",
      "pauldron"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\heavy_accessories_co.paa",
   "198_Armor\data\Vests\198_vest_officer_co.paa",
   "\SWLB_clones\data\heavy_accessories_co.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_ARC_198: SWLB_clone_arc_armor
{
 displayName="[198th] Clone Vest (ARC)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_arc_co.paa",
   "198_Armor\data\Vests\198_vest_officer_co.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_arc_co.paa",
   "198_Armor\data\Vests\198_vest_officer_co.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_Suspenders_198: SWLB_clone_assault_armor
{
 displayName="[198th] Clone Vest (Suspenders)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_assault_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\light_accessories_co.paa",
   "\SWLB_clones\data\heavy_accessories_co.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_assault_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\light_accessories_co.paa",
   "\SWLB_clones\data\heavy_accessories_co.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_ARC_Frost_198: CloneVest_ARC_198
{
 displayName="[198th] Clone Vest (Frost)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
 scope=2;
 scopeArsenal=2;
 model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_arc_co.paa",
   "198_Armor\data\Vests\198_vest_frost.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_arc_co.paa",
   "198_Armor\data\Vests\198_vest_frost_co.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_Engineer_198: SWLB_CEE_Engineer_Vest_Officer
{
 displayName="[198th] Clone Vest (Engineer)";
 model="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
 uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "SWLB_clones\data\light_accessories_co.paa",
   "SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "SWLB_clones\data\light_accessories_co.paa",
   "SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_Engineer_NCO_198: SWLB_CEE_Engineer_Vest_NCO
{
 displayName="[198th] Clone Vest (Engineer) (NCO)";
 model="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
 uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
 hiddenSelections[]=
  {
     "camo1",
     "camo2",
     "camo3",
     "camo4",
     "camo5",
     "camo6"
  };
  hiddenSelectionsTextures[]=
  {
   "SWLB_clones\data\light_accessories_co.paa",
   "SWLB_clones\data\heavy_accessories_co.paa",
   "198_Armor\data\Vests\198_vest_officer_co.paa",
   "SWLB_clones\data\heavy_accessories_co.paa",
   "SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa",
   "SWLB_clones\data\arc_accessories_co.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
     "camo1",
     "camo2",
     "camo3",
     "camo4",
     "camo5",
     "camo6"
  };
  hiddenSelectionsTextures[]=
  {
   "SWLB_clones\data\light_accessories_co.paa",
   "SWLB_clones\data\heavy_accessories_co.paa",
   "198_Armor\data\Vests\198_vest_officer_co.paa",
   "SWLB_clones\data\heavy_accessories_co.paa",
   "SWLB_CEE\data\SWLB_CEE_Eng  ineer_Base.paa",
   "SWLB_clones\data\arc_accessories_co.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_Medic_198: SWLB_clone_kama_armor
{
 displayName="[198th] Clone Vest (Medic)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_medic_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_medic_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\heavy_accessories_medic_co.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_medic_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\heavy_accessories_medic_co.paa"
  };
 };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
class CloneVest_Medic_NCO_198: SWLB_clone_kama_armor
{
 displayName="[198th] Clone Vest (Medic) (NCO)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_medic_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo2",
      "ammo",
      "pauldron"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\heavy_accessories_medic_co.paa",
   "198_Armor\data\Vests\198_vest_officer_co.paa",
   ""
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "camo2",
      "ammo",
      "pauldron"
  };
  hiddenSelectionsTextures[]=
  {
   "\SWLB_clones\data\heavy_accessories_medic_co.paa",
   "198_Armor\data\Vests\198_vest_officer_co.paa",
   ""
  };
 };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
class CloneVest_Murk_198: SWLB_clone_officer_armor
{
 displayName="[198th] Clone Vest (Murk)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_officer_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_murk.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_officer_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_officer_co.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_ARC_Overture_198: SWLB_clone_arc_armor
{
 displayName="[198th] Clone Vest (Overture)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_arc_overture.paa",
   "198_Armor\data\Vests\198_vest_Overture.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_arc_overture.paa",
   "198_Armor\data\Vests\198_vest_Overture.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};
class CloneVest_ARC_Mickey_198: SWLB_clone_arc_armor
{
 displayName="[198th] Clone Vest (Mickey)";
 picture="\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";
 model="\SWLB_clones\SWLB_clone_arc_armor.p3d";
 hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_arc_mickey.paa",
   "198_Armor\data\Vests\198_vest_mickey.paa"
  };
 class ItemInfo: VestItem
 {
  uniformModel="\SWLB_clones\SWLB_clone_arc_armor.p3d";
  containerClass="Supply200";
  hiddenSelections[]=
  {
	  "camo1",
      "camo2"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Vests\198_vest_arc_mickey.paa",
   "198_Armor\data\Vests\198_vest_mickey.paa"
  };
  mass=80;
  class HitpointsProtectionInfo
  {
   class Abdomen
   {
	   armor=35;
	   hitpointName="HitAbdomen";
	   passThrough=0.1;
   };
   class Arms: Abdomen
   {
	   hitpointName="HitArms";
   };
   class Body: Abdomen
   {
	   hitpointName="HitBody";
   };
   class Chest: Abdomen
   {
	   hitpointName="HitChest";
   };
   class Diaphragm: Abdomen
   {
	   hitpointName="HitDiaphragm";
   };
   class Hands: Abdomen
   {
	   hitpointName="HitHands";
   };
   class Legs: Abdomen
   {
	   hitpointName="HitLegs";
   };
   class Neck: Abdomen
   {
	   hitpointName="HitNeck";
   };
  };
 };
};