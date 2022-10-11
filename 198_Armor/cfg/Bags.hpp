class SWLB_clone_backpack;
class Clone_Backpack_198: SWLB_clone_backpack
{
 author="Mickey";
 displayName="[198] Clone Trooper Backpack";
 scopeArsenal=2;
 maximumLoad="320";
};
class SWLB_clone_bag;
class Clone_Bags_198: SWLB_clone_bag
{
 author="Mickey";
 displayName="[198] Clone Trooper Bags";
 scopeArsenal=2;
 maximumLoad="320";
};
class SWLB_clone_backpack_eod;
class Clone_backpack_eod_198:SWLB_clone_backpack_eod
{
 author="Mickey";
 displayName="[198] Clone Trooper EOD Backpack";
 scopeArsenal=2;
 maximumLoad="360";
};
class SWLB_clone_backpack_heavy;
class Clone_backpack_heavy_198: SWLB_clone_backpack_heavy
{
 author="Mickey";
 displayName="[198] Clone Trooper Heavy Backpack";
 scopeArsenal=2;
 maximumLoad="360";
};
class SWLB_clone_backpack_medic;
class Clone_backpack_medic_198: SWLB_clone_backpack_medic
{
 author="Mickey";
 displayName="[198] Clone Trooper Medic Backpack";
 scopeArsenal=2;
 maximumLoad="360";
};
class SWLB_clone_backpack_RTO;
class Clone_backpack_RTO_198: SWLB_clone_backpack_RTO
{
 author="Mickey";
 displayName="[198] Clone Trooper RTO Backpack";
 scopeArsenal=2;
 maximumLoad="320";
};
class Clone_backpack_RTO_Bishop_198: SWLB_clone_backpack_RTO
{
 author="Mickey";
 displayName="[198] Clone Trooper RTO Backpack (Bishop)";
 scopeArsenal=2;
 maximumLoad="320";
 hiddenSelections[]=
  {
   "camo1",
   "cover",
   "heavy",
   "medic",
   "RTO"
  };
  hiddenSelectionsTextures[]=
  {
   "198_Armor\data\Backpacks\Bishop_Radio_bag_198.paa",
   "",
   "",
   "",
   "198_Armor\data\Backpacks\Bishop_Radio_bag_198.paa",
  };
};
class SWLB_clone_arc_backpack;
class ARC_backpack_198: SWLB_clone_arc_backpack
{
 author="Mickey";
 displayName="[198] Clone Trooper ARC Backpack";
 scopeArsenal=2;
 maximumLoad="360";
};
class SWLB_clone_RTO_mini_backpack;
class Clone_backpack_RTO_mini_198: SWLB_clone_RTO_mini_backpack
{
 author="Mickey";
 displayName="[198] Clone Trooper Mini RTO Pack";
 scopeArsenal=2;
 maximumLoad="320";
};
class SWLB_clone_RTO_mini_backpack_night;
class Clone_RTO_mini_backpack_night_198: SWLB_clone_RTO_mini_backpack_night 
{
 author="Mickey";
 displayName="[198] Clone Trooper Mini RTO Pack (night)";
 scopeArsenal=2;
 maximumLoad="320";
};
class JLTS_Clone_jumppack_JT12;
class 198th_JumpPack: JLTS_Clone_jumppack_JT12
{
   displayName= "[198th] Airborne Jumpack";
   author="Mickey";
   scopeArsenal=2;
   maximumLoad="360";
   NSM_jumppack_is_jumppack = 1;
   NSM_jumppack_spam_delay = 1;
   NSM_jumppack_energy_capacity = 150;
   NSM_jumppack_recharge = 3.5;
   NSM_jumppack_jump_types[] = {
   {"Forward Jump",{25,7,40,0,1,0}},
   {"Short Jump",{12,7,20,0,1,0}}};
   JLTS_isJumppack=0;
   hiddenSelectionsTextures[]=
   {
    "198_Armor\data\Backpacks\198th_Jump.paa"  
   };
};
class 198th_JumpPack_RTO: JLTS_Clone_jumppack_JT12
{
   displayName= "[198th] Airborne Jumpack (RTO)";
   author="Mickey";
   scopeArsenal=2;
   maximumLoad="360";
   NSM_jumppack_is_jumppack = 1;
   NSM_jumppack_spam_delay = 1;
   NSM_jumppack_energy_capacity = 150;
   NSM_jumppack_recharge = 3.5;
   NSM_jumppack_jump_types[] = {
   {"Forward Jump",{25,7,40,0,1,0}},
   {"Short Jump",{12,7,20,0,1,0}}};
   JLTS_isJumppack=0;
   hiddenSelectionsTextures[]=
   {
    "198_Armor\data\Backpacks\198th_Jump.paa"  
   };
   tf_hasLRradio=1;
   tf_encryptionCode="tf_west_radio_code";
   tf_dialog="rt1523g_radio_dialog";
   tf_subtype="digital_lr";
   tf_range=25000;
};