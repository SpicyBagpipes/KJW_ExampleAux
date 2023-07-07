# Read me before usage
This example aux requires you to be able to do a handful of things:
 * Read.
 * Write.
 * Copy and paste.
 * Change numbers.
 * Place and name files properly.
 * Follow instructions.
If you are incapable of doing any of these things, this template will still not help you and it is recommended you return to first grade education. This template will **not** do the following:
 * Create textures.
 * Make your textures look better.
 * Compensate for your lack of intellect.
 * Allow you to harrass any of the authors.

## Overview
This example aux contains three folders. The only files you ever need to touch are the following:
 * config.cpp, found in the `main` folder.
 * settings.hpp, found in the `main` folder.
 * Placing files in the `data` folder.
The rest of this mod handles all the magic needed, all you need to do is copy paste a shit ton and name your files properly.

The template contains an example for each possible macro including textures. You may delete these as you feel necessary, as they are only contained to provide an example for usage.

## Important Notes
The following should always be taken into account when using this aux template:
 * Classnames (anything you are told is a classname or the line begins with `class`) must NEVER begin with a number. This can break a variety of things, including ACE Medical.
 * The aux is not fully automatic. You must still remember to put the correct macros in the correct places.

## Getting started
### settings.hpp
The first port of call is to navigate to [settings.hpp](settings.hpp). Here you will find the following:
 * #define TAG KJW_ExampleAux
 * #define UNITNAME KJW
 * #define AUTHORS KJW,YourNameHere
 * 
 * #define LSADDON 0 //Change 0 to 1 if LS classes will be edited in your retextures.
 * #define JLTSADDON 0 //Change 0 to 1 if JLTS classes will be edited in your retextures.
 * #define TASADDON 0 //Change 0 to 1 if 3AS classes will be edited in your retextures.
In order to properly utilise this mod, you should do as the notes tell you; if your aux will be editing JLTS and 3AS classes, change the 0 to a 1.

Once you have edited the lines properly, divert your attention to the first 3 lines. Here is an overview of the three lines:
#### TAG
    This must have **NO** spaces and not begin with a number. It prefixes all of your classnames in your aux mod.
#### UNITNAME
    This can have spaces, however is not recommended. Numbers are fine. This prefixes all your display names in your aux mods in square brackets.
#### AUTHORS
    This is a simple list of everybody who has contributed to the mod. Change YourNameHere to your name. Please leave KJW.

Once you have edited the these lines, you should navigate to [config.cpp](config.cpp).

### config.cpp
In the `config.cpp` file, you should **NOT** touch **ANY** line which begins with a `#`. This could at best break a couple of your classnames in the mod, at worst break your entire aux.

#### CfgPatches
##### class KJW_ExampleAux_Textures
You should change this to a classname suitable for your addon, for example `class Six12th_Textures`.
#### requiredAddons[]
You should note out lines from mods that are not in use. For example, if I am not using 3AS, I would note out (by using //)`"3AS_Characters_Clones"` and `"3AS_Characters_Droids"`. Bear in mind that commas should be grammatically correct -- only the last item in the list that is not noted out should not have a comma. `"A3_Data_F_AoW_Loadorder"` should not be touched.
#### units[]
For each uniform you create, you should use a `DECLARE()` macro in units. For example, if I made a 3AS Katarn Uniform with the following `TAS_UNIFORM_KATARN(KJW_ExampleAux_Katarn,hello everybody)`, I would have to place `DECLARE(KJW_ExampleAux_Katarn)` in `units[]`. It follows the same as `requiredAddons[]`; it requires a comma at the end of each line that is not the final one.

#### Using the macros
All you need to do is place the correct macros into the correct locations in `CfgWeapons` and `CfgVehicles`. There is only one macro for each uniform, this is intentional and the unit handling is automatic. Read `main\possible_macros.hpp` for more information about which macros are usable. Leave the notes telling you which parts of the class are for which macros alone. It is recommended you use Ctrl+F to find the class you are looking for. *Uniform macros are using the unit classname. Just copy the classname from ACE Arsenal using Ctrl+C after clicking the uniform.*

Macros should be placed in the correct mod section. For example, JLTS macros should only be found in the following:
```cpp
#if JLTSADDON == 1
    //Your macros should be here.
    JLTS_BACKPACK_RTO_MINI(classname,displayName)
#endif
//Not here.
```

##### classname
The classname in the macro is automatically prefixed with the tag you defined in [settings.hpp](settings.hpp). You do not need to prefix it again.

##### displayName
The displayName in the macro is also automatically prefixed with the unit name you defined in [settings.hpp](settings.hpp). You do not need to prefix it again.
```cpp
JLTS_BACKPACK_RTO_MINI(classname,displayName)
//Will produce a RTO mini backpack of classname KJW_ExampleAux_classname and displayName of [KJW] displayName.
```