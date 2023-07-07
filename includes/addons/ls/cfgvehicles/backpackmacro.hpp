//Do not touch this.
#include "..\script_component.hpp"
#define CURRENTMOD ls
#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DATAPATH##\path

#define LS_BACKPACK_CLONE_RTO_RECON(classname,displayNameText)\
class TAG##_##classname##: SWLB_CEE_Recon_RTO_Backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa,\
		SWLB_equipment\backpacks\data\bag_co.paa,\
		SWLB_equipment\backpacks\data\bag_co.paa,\
		SWLB_clones\data\light_accessories_co.paa,\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define LS_BACKPACK_CLONE_REGULAR(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa),\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define LS_BACKPACK_CLONE_HEAVY(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_backpack_heavy {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa),\
		PATHTO(trooper\backpack\classname.paa),\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define LS_BACKPACK_CLONE_MEDIC(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_backpack_medic {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa),\
		PATHTO(trooper\backpack\classname.paa),\
		,\
		PATHTO(trooper\backpack\classname.paa),\
	};\
};

#define LS_BACKPACK_CLONE_RTO(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_backpack_RTO {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa),\
		,\
		,\
		,\
		PATHTO(trooper\backpack\classname.paa),\
	};\
};

#define LS_BACKPACK_CLONE_RTO_MINI(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_RTO_mini_backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa),\
		PATHTO(trooper\backpack\1\classname.paa)\
	};\
};

#define LS_BACKPACK_CLONE_JT12_JUMPPACK(classname,displayNameText)\
class TAG##_##classname##: ls_greenfor_jt12_backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(trooper\backpack\classname.paa)\
	};\
};

#define LS_BACKPACK_CLONE_MARINE_BACKPACK(classname,displayNameText)\
class TAG##_##classname##: lsd_gar_marine_backpack {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(marine\backpack\classname.paa)\
	};\
};

#define LS_BACKPACK_KATARN_REGULAR(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_backpack_k2 {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\backpack\classname.paa)\
	};\
};

#define LS_BACKPACK_KATARN_EOD(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_backpack_k2_eod {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\backpack\classname.paa),\
		PATHTO(katarn\backpack\classname.paa)\
	};\
};

#define LS_BACKPACK_KATARN_RTO(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_backpack_k2_rto {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\backpack\classname.paa),\
		PATHTO(katarn\backpack\classname.paa)\
	};\
};

#define LS_BACKPACK_KATARN_TECH(classname,displayNameText)\
class TAG##_##classname##: SWLB_clone_commando_backpack_k2_tech {\
	ARSENALINFO\
	displayName = [##UNITNAME##] displayNameText;\
	hiddenSelectionsTextures[] = {\
		PATHTO(katarn\backpack\classname.paa),\
		PATHTO(katarn\backpack\classname.paa),\
		PATHTO(katarn\backpack\2\classname.paa)\
	};\
};