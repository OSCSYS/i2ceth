#ifndef EEPROM_COMM
#define EEPROM_COMM

#include "HardwareProfile.h"
#include "sw_spi.h"
#include <delays.h>

#define EEPROM_CMD_READ		0x03
#define EEPROM_CMD_WRITE	0x02
#define EEPROM_CMD_WRDI		0x04
#define EEPROM_CMD_WREN		0x06
#define EEPROM_CMD_RDSR		0x05
#define EEPROM_CMD_WRSR		0x01

#define EEPROM_MAP_NVMVALID		0x00	//6 Bytes
#define EEPROM_MAP_APPCONFIG	0x06	//51 Bytes
#define EEPROM_MAP_WEBSRVVALID	0x39	//6 Bytes
#define EEPROM_MAP_WEBSRVCONFIG	0x3F	//37 Bytes
#define EEPROM_MAP_END			0x64
#define EEPROM_MAP_MACADDR		0xFA

void eepromReadBytes(char *dest, unsigned char addr, unsigned char len);
char eepromReadByte(unsigned char addr);
void eepromWriteBytes(char *dest, unsigned char addr, unsigned char len);
void eepromWriteByte(char data, unsigned char addr);
void eepromClear(void);
void eepromWREN(void);
void eepromDisable(void);
void eepromEnable(void);

#endif