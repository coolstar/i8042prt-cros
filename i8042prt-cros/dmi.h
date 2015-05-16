
#pragma once

enum DMI_DEVICE_TYPE
{
	DMI_DEV_TYPE_ANY = 0,
	DMI_DEV_TYPE_OTHER,
	DMI_DEV_TYPE_UNKNOWN,
	DMI_DEV_TYPE_VIDEO,
	DMI_DEV_TYPE_SCSI,
	DMI_DEV_TYPE_ETHERNET,
	DMI_DEV_TYPE_TOKENRING,
	DMI_DEV_TYPE_SOUND,
	DMI_DEV_TYPE_PATA,
	DMI_DEV_TYPE_SATA,
	DMI_DEV_TYPE_SAS,
	DMI_DEV_TYPE_IPMI = -1,
	DMI_DEV_TYPE_OEM_STRING = -2,
	DMI_DEV_TYPE_DEV_ONBOARD = -3,
};

enum DMI_ENTRY_TYPE
{
	DMI_ENTRY_BIOS = 0,
	DMI_ENTRY_SYSTEM = 1,
	DMI_ENTRY_BASEBOARD = 2,
	DMI_ENTRY_CHASSIS = 3,
	DMI_ENTRY_PROCESSOR = 4,
	DMI_ENTRY_MEM_CONTROLLER = 5,
	DMI_ENTRY_MEM_MODULE = 6,
	DMI_ENTRY_CACHE = 7,
	DMI_ENTRY_PORT_CONNECTOR = 8,
	DMI_ENTRY_SYSTEM_SLOT = 9,
	DMI_ENTRY_ONBOARD_DEVICE = 10,
	DMI_ENTRY_OEMSTRINGS = 11,
	DMI_ENTRY_SYSCONF = 12,
	DMI_ENTRY_BIOS_LANG = 13,
	DMI_ENTRY_GROUP_ASSOC = 14,
	DMI_ENTRY_SYSTEM_EVENT_LOG = 15,
	DMI_ENTRY_PHYS_MEM_ARRAY = 16,
	DMI_ENTRY_MEM_DEVICE = 17,
	DMI_ENTRY_32_MEM_ERROR = 18,
	DMI_ENTRY_MEM_ARRAY_MAPPED_ADDR = 19,
	DMI_ENTRY_MEM_DEV_MAPPED_ADDR = 20,
	DMI_ENTRY_BUILTIN_POINTING_DEV,
	DMI_ENTRY_PORTABLE_BATTERY,
	DMI_ENTRY_SYSTEM_RESET,
	DMI_ENTRY_HW_SECURITY,
	DMI_ENTRY_SYSTEM_POWER_CONTROLS = 25,
	DMI_ENTRY_VOLTAGE_PROBE,
	DMI_ENTRY_COOLING_DEV,
	DMI_ENTRY_TEMP_PROBE,
	DMI_ENTRY_ELECTRICAL_CURRENT_PROBE,
	DMI_ENTRY_OOB_REMOTE_ACCESS = 30,
	DMI_ENTRY_BIS_ENTRY,
	DMI_ENTRY_SYSTEM_BOOT = 32,
	DMI_ENTRY_MGMT_DEV,
	DMI_ENTRY_MGMT_DEV_COMPONENT,
	DMI_ENTRY_MGMT_DEV_THRES = 35,
	DMI_ENTRY_MEM_CHANNEL = 36,
	DMI_ENTRY_IPMI_DEV = 37,
	DMI_ENTRY_SYS_POWER_SUPPLY = 38,
	DMI_ENTRY_ADDITIONAL = 39,
	DMI_ENTRY_ONBOARD_DEV_EXT = 40,
	DMI_ENTRY_MGMT_CONTROLLER_HOST = 41,
	DMI_ENTRY_INACTIVE = 126,
	DMI_ENTRY_END_OF_TABLE = 127,
};

enum _DMI_FIELD_OFFSETS
{
	/* Type = 0: DMI_ENTRY_BIOS */
	DMI_BIOS_VENDOR = 0x04,
	DMI_BIOS_VERSION = 0x05,
	DMI_BIOS_DATE = 0x08,
	DMI_BIOS_SIZE = 0x14,

	/* Type = 1: DMI_ENTRY_SYSTEM */
	DMI_SYS_VENDOR = 0x04,
	DMI_SYS_PRODUCT = 0x05,
	DMI_SYS_VERSION = 0x06,
	DMI_SYS_SERIAL = 0x07,
	DMI_SYS_SIZE = 0x1b,

	/* Type = 2: DMI_ENTRY_BASEBOARD */
	DMI_BOARD_VENDOR = 0x04,
	DMI_BOARD_NAME = 0x05,
	DMI_BOARD_VERSION = 0x06,
	DMI_BOARD_SERIAL = 0x07,
	DMI_BOARD_ASSET_TAG = 0x08,
	DMI_BOARD_SIZE = 0x10,


};

typedef struct _DMI_HEADER
{
	UCHAR Type;
	UCHAR Length;
	USHORT Handle;
} DMI_HEADER, *PDMI_HEADER;
