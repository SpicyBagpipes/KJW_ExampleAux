//Do not touch this.
#include "..\script_component.hpp"

#define DATAPATH data\textures\##CURRENTMOD
#define PATHTO(path) DIRECTORY##\##DATAPATH##\path

#ifdef CURRENTCLASSCFGVEHICLES
	#define JLTS_UNIFORM_MARSHALCOMMANDER(classname,displayNameText)\
	class TAG##_##classname##_Unit: JLTS_Clone_P2_marshalcommander {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(marshalcommander\uniform\upper\classname.paa),\
			PATHTO(marshalcommander\uniform\lower\classname.paa),\
			PATHTO(marshalcommander\uniform\classname.paa),\
		};\
	};
	#define JLTS_UNIFORM_TROOPER(classname,displayNameText)\
	class TAG##_##classname##_Unit: JLTS_Clone_P2_DC15A {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(trooper\uniform\upper\classname.paa),\
			PATHTO(trooper\uniform\lower\classname.paa),\
			\
		};\
	};
	#define JLTS_UNIFORM_TROOPERGRENADIER(classname,displayNameText)\
	class TAG##_##classname##_Unit: JLTS_Clone_P2_DC15AUGL {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(trooper\uniform\upper\classname.paa),\
			PATHTO(trooper\uniform\lower\classname.paa),\
			PATHTO(trooper\uniform\classname.paa),\
			\
		};\
	};
	#define JLTS_UNIFORM_TROOPERRECON(classname,displayNameText)\
	class TAG##_##classname##_Unit: JLTS_Clone_P2_recon {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(trooper\uniform\upper\classname.paa),\
			PATHTO(trooper\uniform\lower\classname.paa),\
			PATHTO(trooper\uniform\classname.paa),\
			\
		};\
	};
	#define JLTS_UNIFORM_TROOPERSUPPORT(classname,displayNameText)\
	class TAG##_##classname##_Unit: JLTS_Clone_P2_AR {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(trooper\uniform\upper\classname.paa),\
			PATHTO(trooper\uniform\lower\classname.paa),\
			PATHTO(trooper\uniform\classname.paa),\
			\
		};\
	};
	#define JLTS_UNIFORM_SENATECOMMANDO(classname,displayNameText)\
	class TAG##_##classname##_Unit: JLTS_Clone_P2_DC15A_SC {\
		HIDDEN\
		displayName = [##UNITNAME##] displayNameText Unit;\
		hiddenSelectionsTextures[] = {\
			PATHTO(senatecommando\uniform\upper\classname.paa),\
			PATHTO(senatecommando\uniform\lower\classname.paa),\
			PATHTO(senatecommando\uniform\classname.paa)\
		};\
	};
#endif
#ifdef CURRENTCLASSCFGWEAPONS
	#define JLTS_UNIFORM_MARSHALCOMMANDER(classname,displayNameText)\
	class TAG##_##classname##: JLTS_CloneArmorMC {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define JLTS_UNIFORM_TROOPER(classname,displayNameText)\
	class TAG##_##classname##: JLTS_CloneArmor {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define JLTS_UNIFORM_TROOPERGRENADIER(classname,displayNameText)\
	class TAG##_##classname##: JLTS_CloneArmorGrenadier {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define JLTS_UNIFORM_TROOPERRECON(classname,displayNameText)\
	class TAG##_##classname##: JLTS_CloneArmorRecon {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define JLTS_UNIFORM_TROOPERSUPPORT(classname,displayNameText)\
	class TAG##_##classname##: JLTS_CloneArmorSupport {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
	#define JLTS_UNIFORM_SENATECOMMANDO(classname,displayNameText)\
	class TAG##_##classname##: JLTS_CloneArmor_SC {\
		ARSENALINFO\
		displayName = [##UNITNAME##] displayNameText;\
		class ItemInfo: ItemInfo {\
			uniformClass = TAG##_##classname##_Unit;\
		};\
	};
#endif