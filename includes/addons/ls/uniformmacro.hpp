//Do not touch this.
#include "..\script_component.hpp"
#define CURRENTMOD ls
#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DATAPATH##\path

#ifdef CURRENTCLASSCFGVEHICLES
	#define LS_UNIFORM_MARSHALCOMMANDER(classname,displayNameText)\
	class TAG##_##classname##_Unit: ls_gar_marshalCommander_base {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(trooper\uniform\classname.paa),\
			PATHTO(trooper\uniform\1\classname.paa),\
			ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa\
		};\
	};
	#define LS_UNIFORM_TROOPER(classname,displayNameText)\
	class TAG##_##classname##_Unit: ls_gar_phase2_base {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(trooper\uniform\classname.paa),\
			PATHTO(trooper\uniform\1\classname.paa),\
			ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa\
		};\
	};
	#define LS_UNIFORM_KATARN(classname,displayNameText)\
	class TAG##_##classname##_Unit: ls_sob_commando_base {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(katarn\uniform\classname.paa),\
			PATHTO(katarn\uniform\1\classname.paa)\
		};\
	};
	#define LS_UNIFORM_MARINE(classname,displayNameText)\
	class TAG##_##classname##_Unit: lsd_gar_phase2Insulated_base {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(marine\uniform\classname.paa),\
			PATHTO(marine\uniform\1\classname.paa),\
			lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa\
		};\
	};
	#define LS_UNIFORM_SENATEGUARD(classname,displayNameText)\
	class TAG##_##classname##_Unit: lsd_csf_senateGuard_base {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(senatecommando\uniform\classname.paa),\
			PATHTO(senatecommando\uniform\1\classname.paa),\
			ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa\
		};\
	};
#endif
#ifdef CURRENTCLASSCFGWEAPONS
	#define LS_UNIFORM_MARSHALCOMMANDER(classname,displayNameText)\
	class TAG##_##classname##: ls_gar_marshalCommander_uniform {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define LS_UNIFORM_TROOPER(classname,displayNameText)\
	class TAG##_##classname##: ls_gar_phase2_uniform {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define LS_UNIFORM_KATARN(classname,displayNameText)\
	class TAG##_##classname##: ls_sob_commando_uniform {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define LS_UNIFORM_MARINE(classname,displayNameText)\
	class TAG##_##classname##: lsd_gar_phase2Insulated_uniform {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define LS_UNIFORM_SENATEGUARD(classname,displayNameText)\
	class TAG##_##classname##: lsd_csf_senateGuard_uniform {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
#endif