/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

    This firmware is a nearly complete rewrite of the sprinter firmware
    by kliment (https://github.com/kliment/Sprinter)
    which based on Tonokip RepRap firmware rewrite based off of Hydra-mmm firmware.
*/

#pragma once

// Arduino Mega 2560 based
#define MOTHERBOARD_RAMPS_1_2 3
#define MOTHERBOARD_RAMPS_1_4 33
#define MOTHERBOARD_AZTEEG_X3 34
#define MOTHERBOARD_AZTEEG_X3_PRO 35
#define MOTHERBOARD_MPX3 38
#define MOTHERBOARD_ULTIMAKER_SHIELD_1_5_7 37
// 3Drag/Velleman K8200       = 66 (experimental)
// Open Motion Controller     = 91
// for correct HEATER_1_PIN assignment! Azteeg X1                  = 65
// 3Drag/Velleman K8200 (experimental) = 66
// Sethi 3D_1                 = 72
// Foltyn 3D Master           = 12
// Fysetc F6                  = 190
// MegaTronics 1.0            = 70
// Megatronics 2.0            = 701
// Megatronics 3.0            = 703 // Thermistors predefined not thermocouples
// Minitronics 1.0            = 702
#define MOTHERBOARD_RUMBA 80
// FELIXprinters              = 101
#define MOTHERBOARD_RAMBO 301
#define MOTHERBOARD_RAMBO_EINSY 310
// PiBot for Repetier V1.0-1.3= 314
// PiBot for Repetier V1.4    = 315
// PiBot Controller V2.0      = 316
// Sanguish Beta              = 501
// Unique One rev. A          = 88
// SAV MK1                    = 89
// MJRice Pica Rev B          = 183
// MJRice Pica Rev C          = 184
#define ZONESTAR_ZRIB_2_1 39

// Arduino DUE based
#define MOTHERBOARD_RADDS 402
#define MOTHERBOARD_RAMPS_FD_INVERTED_HEATER 403
#define MOTHERBOARD_RAMPS_FD 404
#define MOTHERBOARD_FELIX 405
#define MOTHERBOARD_BAM_AND_DICE 406
#define MOTHERBOARD_ULTRATRONICS 409
#define MOTHERBOARD_SMARTRAMPS_NO_EEPROM 408
#define MOTHERBOARD_SMARTRAMPS_EEPROM 413
#define MOTHERBOARD_STACKER_3D_SUPERBOARD 412
#define MOTHERBOARD_RURAMPS4D 414
#define MOTHERBOARD_SHASTA 416
#define MOTHERBOARD_IKS3D 417
#define MOTHERBOARD_DAVINCI 418
#define MOTHERBOARD_ALLIGATOR_REV1 500
#define MOTHERBOARD_ALLIGATOR_REV2 501
#define MOTHERBOARD_ALLIGATOR_REV3 502
#define MOTHERBOARD_USER_DEFINED_DUE 998
#define MOTHERBOARD_USER_DEFINED_AVR 999

// SAMD51 based boards
#define MOTHERBOARD_AGC_SMARTRAMPS_NO_EEPROM 1000
#define MOTHERBOARD_AGC_SMARTRAMPS_EEPROM 1001
#define MOTHERBOARD_AGC_USER_DEFINED 1002
#define MOTHERBOARD_AGC_RADDS 1003

// M0/SAMD21 based boards
#define MOTHERBOARD_MINITRONICS_2_0 2000

// STM32F1 based boards
#define MOTHERBOARD_E3_MINI_V1_2 2500
#define MOTHERBOARD_E3_MINI_V2_0 2501

// STM32F4 based boards (3000 - 3499)
#define MOTHERBOARD_RUMBA32 3000
#define MOTHERBOARD_STACKER3D_SUPER_MINI 3001

#define NO_CONTROLLER 0
#define CONTROLLER_NONE 0
#define UICONFIG_CONTROLLER 1
#define CONTROLLER_CONFIG 1
#define CONTROLLER_SMARTRAMPS 2
#define CONTROLLER_ADAFRUIT 3
#define CONTROLLER_FOLTYN 4
#define CONTROLLER_VIKI 5
#define CONTROLLER_MEGATRONIC 6
#define CONTROLLER_RADDS 7
#define CONTROLLER_PIBOT20X4 8
#define CONTROLLER_PIBOT16X2 9
#define CONTROLLER_GADGETS3D_SHIELD 10
#define CONTROLLER_REPRAPDISCOUNT_GLCD 11
#define CONTROLLER_FELIX 12
#define CONTROLLER_RAMBO 13
#define CONTROLLER_OPENHARDWARE_LCD2004 14
#define CONTROLLER_SANGUINOLOLU_PANELOLU2 15
#define CONTROLLER_GAMEDUINO2 16
#define CONTROLLER_MIREGLI 17
#define CONTROLLER_GATE_3NOVATICA 18
#define CONTROLLER_SPARKLCD 19
#define CONTROLLER_BAM_DICE_DUE 20
#define CONTROLLER_VIKI2 21
#define CONTROLLER_LCD_MP_PHARAOH_DUE 22
#define CONTROLLER_SPARKLCD_ADAPTER 23
#define CONTROLLER_ZONESTAR 24
#define CONTROLLER_FELIX_DUE 405
#define CONTROLLER_ORCABOTXXLPRO2 25
#define CONTROLLER_AZSMZ_12864 26
#define CONTROLLER_REPRAPWORLD_GLCD 27
#define CONTROLLER_AZSMZ_12864_OLED 28
#define CONTROLLER_ENDER_3_12864 29

#define PRINTER_TYPE_CARTESIAN 0
#define PRINTER_TYPE_CORE_XYZ 1
#define PRINTER_TYPE_DELTA 2
#define PRINTER_TYPE_DUAL_X 3

#define Z_PROBE_TYPE_NONE 0
#define Z_PROBE_TYPE_DEFAULT 1
#define Z_PROBE_TYPE_NOZZLE 2
#define Z_PROBE_TYPE_BLTOUCH 3

#define ILLEGAL_Z_PROBE -888

#define IO_TARGET_INIT 1
#define IO_TARGET_PWM 2
#define IO_TARGET_100MS 3
#define IO_TARGET_CLASS_DEFINITION 4
#define IO_TARGET_ENDSTOP_UPDATE 5
#define IO_TARGET_DEFINE_VARIABLES 6
#define IO_TARGET_CONFIG_VISUALIZATION 7
#define IO_TARGET_EEPROM 8
#define IO_TARGET_UPDATE_DERIVED 9
#define IO_TARGET_RESTORE_FROM_CONFIG 10
#define IO_TARGET_ANALOG_INPUT_LOOP 11
#define IO_TARGET_500MS 12
#define IO_TARGET_TEMPLATES 13
#define IO_TARGET_FIRMWARE_EVENTS 14
#define IO_TARGET_PERIODICAL_ACTIONS 15
#define IO_TARGET_GUI_CONTROLS 16
#define IO_TARGET_GUI_CONFIG 17
#define IO_TARGET_GUI_TUNE 18
#define IO_TARGET_GUI_MAIN_MENU 19
#define IO_TARGET_GUI_WIZARDS 20
#define IO_TARGET_STORE_RECOVER_DATA 21
#define IO_TARGET_RESTORE_RECOVER_DATA 22
#define IO_TARGET_INIT_LATE 23
#define IO_TARGET_BEEPER_LOOP 24
#define IO_TARGET_SERVO_INTERRUPT 25

#define NO_PIN -1

#define CHOPPER_TIMING_DEFAULT_12V \
    { 3, -1, 1 }
#define CHOPPER_TIMING_DEFAULT_19V \
    { 4, 1, 1 }
#define CHOPPER_TIMING_DEFAULT_24V \
    { 4, 2, 1 }
#define CHOPPER_TIMING_DEFAULT_36V \
    { 5, 2, 4 }
#define CHOPPER_TIMING_PRUSAMK3_24V \
    { 3, -2, 6 }

#define PELTIER_COOLER 0
#define PELTIER_HEATER 1
#define PELTIER_SWITCH 2

#define X_AXIS 0
#define Y_AXIS 1
#define Z_AXIS 2
#define E_AXIS 3
#define A_AXIS 4
#define B_AXIS 5
#define C_AXIS 6
#define NO_AXIS -1
#define ZPROBE_AXIS 20 // marker that z probe was triggered not z min

#define A_TOWER 0
#define B_TOWER 1
#define C_TOWER 2

#define LEVELING_CORRECTOR_SOFTWARE 0
#define LEVELING_CORRECTOR_MOTOR 1

#define LEVELING_METHOD_NONE 0
#define LEVELING_METHOD_GRID 1
#define LEVELING_METHOD_4_POINT_SYMMETRIC 2
#define LEVELING_METHOD_3_POINTS 3

#define MENU_MODE_SD_MOUNTED 1
#define MENU_MODE_SD_PRINTING 2
#define MENU_MODE_PAUSED 4
#define MENU_MODE_FAN_RUNNING 8
#define MENU_MODE_PRINTING 16
#define MENU_MODE_FULL_PID 32
#define MENU_MODE_DEADTIME 64
#define MENU_MODE_FDM 128
#define MENU_MODE_LASER 256
#define MENU_MODE_CNC 512

#define STR(s) #s
#define XSTR(s) STR(s)

typedef unsigned int uint;
typedef void (*void_fn_t)();
