/*
 * UNPUBLISHED -- Rights  reserved  under  the  copyright  laws  of the
 * United States.  Use  of a copyright notice is precautionary only and
 * does not imply publication or disclosure.
 *
 * THIS DOCUMENTATION CONTAINS CONFIDENTIAL AND PROPRIETARY INFORMATION
 * OF    BLIZZARD   ENTERTAINMENT.    ANY   DUPLICATION,  MODIFICATION,
 * DISTRIBUTION, OR DISCLOSURE IS STRICTLY PROHIBITED WITHOUT THE PRIOR
 * EXPRESS WRITTEN PERMISSION OF BLIZZARD ENTERTAINMENT.
 */

//trigs
extern int trigflag[5];
extern TriggerStruct trigs[5];
extern int TWarpFrom; // weak

void __cdecl InitNoTriggers();
void __cdecl InitTownTriggers();
void __cdecl InitL1Triggers();
void __cdecl InitL2Triggers();
void __cdecl InitL3Triggers();
void __cdecl InitL4Triggers();
void __cdecl InitSKingTriggers();
void __cdecl InitSChambTriggers();
void __cdecl InitPWaterTriggers();
void __cdecl InitVPTriggers();
unsigned char __cdecl ForceTownTrig();
unsigned char __cdecl ForceL1Trig();
unsigned char __cdecl ForceL2Trig();
unsigned char __cdecl ForceL3Trig();
unsigned char __cdecl ForceL4Trig();
void __cdecl Freeupstairs();
unsigned char __cdecl ForceSKingTrig();
unsigned char __cdecl ForceSChambTrig();
unsigned char __cdecl ForcePWaterTrig();
void __cdecl CheckTrigForce();
void __cdecl CheckTriggers();

/* rdata */

extern int TownDownList[11];
extern int TownWarp1List[13];
extern int L1UpList[12];
extern int L1DownList[10];
extern int L2UpList[3];
extern int L2DownList[5];
extern int L2TWarpUpList[3];
extern int L3UpList[15];
extern int L3DownList[9];
extern int L3TWarpUpList[14];
extern int L4UpList[4];
extern int L4DownList[6];
extern int L4TWarpUpList[4];
extern int L4PentaList[33];
