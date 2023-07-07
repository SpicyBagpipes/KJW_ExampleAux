//Do not touch this.
#include "..\script_component.hpp"

#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DIRECTORY##\##DATAPATH##\path

#define LS_VEST_ARC(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_arc_armor {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(arc\vest\classname.paa),\
		PATHTO(arc\vest\1\classname.paa)\
	};\
};

#define LS_VEST_TROOPER_COMMANDER(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commander_armor {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa),\
		""\
	};\
};

#define LS_VEST_TROOPER_LIEUTENANT(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_lieutenant_armor {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define LS_VEST_TROOPER_OFFICER(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_officer_armor {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define LS_VEST_PONCHO(classname,displayNameText)\
class TAG##_##classname##: ls_misc_poncho_base {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\vest\classname.paa)\
	};\
};

#define LS_VEST_MARINE(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_marine_vest {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(marine\vest\classname.paa),\
		swlb_core\data\common_textures\accessories\heavy_accessories_co.paa,\
		PATHTO(marine\vest\classname.paa),\
		PATHTO(marine\vest\classname.paa),\
		swlb_core\data\common_textures\accessories\officer_accessories_co.paa\
	};\
};

/*#define LS_VEST_KATARN_EOD(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_eod_armor_k1 {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\vest\classname.paa)\
	};\
};*/
//No hiddenSelections.

#define LS_VEST_KATARN_SNIPER(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_sniper_armor_k1 {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\vest\classname.paa),\
		PATHTO(katarn\vest\classname.paa)\
	};\
};

/*#define LS_VEST_KATARN_SQUADLEAD(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_sl_armor_k1 {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\vest\classname.paa)\
	};\
};*/
//No hiddenSelections.

#define LS_VEST_KATARN_TECH(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_tech_armor_k1 {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\vest\classname.paa)\
	};\
};