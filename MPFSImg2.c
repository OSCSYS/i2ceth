/***************************************************************
 * MPFSImg2.c
 * Defines an MPFS2 image to be stored in program memory.
 *
 * NOT FOR HAND MODIFICATION
 * This file is automatically generated by the MPFS2 Utility
 * ALL MODIFICATIONS WILL BE OVERWRITTEN BY THE MPFS2 GENERATOR
 * Generated Tuesday, July 12, 2011 1:00:43 PM
 ***************************************************************/

#define __MPFSIMG2_C

#include "TCPIPConfig.h"
#if !defined(MPFS_USE_EEPROM) && !defined(MPFS_USE_SPI_FLASH)

#include "TCPIP Stack/TCPIP.h"
#if defined(STACK_USE_MPFS2)


/**************************************
 * MPFS2 Image Data
 **************************************/
#define DATACHUNK000000 \
	0x4d,0x50,0x46,0x53,0x02,0x01,0x04,0x00,0x06,0x9e,0xff,0xff,0xec,0x46,0xff,0xff, /* MPFS.........F.. */ \
	0x68,0x00,0x00,0x00,0x7f,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0xf8,0x11,0x1b,0x4e, /* h..............N */ \
	0x00,0x00,0x00,0x00,0x02,0x00,0x72,0x00,0x00,0x00,0x8a,0x00,0x00,0x00,0x08,0x00, /* ......r......... */ \
	0x00,0x00,0xf8,0x11,0x1b,0x4e,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x00,0x00,0x00, /* .....N......s... */ \
	0x92,0x00,0x00,0x00,0xaf,0x01,0x00,0x00,0xb5,0x7d,0x1c,0x4e,0x00,0x00,0x00,0x00, /* .........}.N.... */ \
	0x02,0x00,0x7e,0x00,0x00,0x00,0x41,0x02,0x00,0x00,0x38,0x00,0x00,0x00,0xb5,0x7d, /* ..~...A...8....} */ \
	0x1c,0x4e,0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x74,0x6e,0x69,0x63,0x2e,0x63,0x67, /* .N......btnic.cg */ \
	0x69,0x00,0x00,0x69,0x6e,0x64,0x65,0x78,0x2e,0x68,0x74,0x6d,0x6c,0x00,0x00,0x7e, /* i..index.html..~ */ \
	0x42,0x54,0x4e,0x69,0x63,0x5f,0x43,0x47,0x49,0x7e,0x00,0x00,0x00,0x00,0x02,0x00, /* BTNic_CGI~...... */ \
	0x00,0x00,0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x0d,0x0a,0x3c,0x68,0x65,0x61,0x64,0x3e, /* ..<html>..<head> */ \
	0x3c,0x74,0x69,0x74,0x6c,0x65,0x3e,0x42,0x54,0x6e,0x69,0x63,0x3c,0x2f,0x74,0x69, /* <title>BTnic</ti */ \
	0x74,0x6c,0x65,0x3e,0x3c,0x2f,0x68,0x65,0x61,0x64,0x3e,0x0d,0x0a,0x3c,0x6d,0x65, /* tle></head>..<me */ \
	0x74,0x61,0x20,0x68,0x74,0x74,0x70,0x2d,0x65,0x71,0x75,0x69,0x76,0x3d,0x22,0x72, /* ta http-equiv="r */ \
	0x65,0x66,0x72,0x65,0x73,0x68,0x22,0x20,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x3d, /* efresh" content= */ \
	0x22,0x31,0x22,0x3e,0x0d,0x0a,0x3c,0x62,0x6f,0x64,0x79,0x3e,0x0d,0x0a,0x3c,0x68, /* "1">..<body>..<h */ \
	0x31,0x3e,0x42,0x54,0x4e,0x69,0x63,0x20,0x45,0x6d,0x62,0x65,0x64,0x64,0x65,0x64, /* 1>BTNic Embedded */ \
	0x3c,0x2f,0x68,0x31,0x3e,0x0d,0x0a,0x3c,0x68,0x32,0x3e,0x42,0x54,0x4e,0x69,0x63, /* </h1>..<h2>BTNic */ \
	0x20,0x56,0x65,0x72,0x73,0x69,0x6f,0x6e,0x3c,0x2f,0x68,0x32,0x3e,0x0d,0x0a,0x7e, /*  Version</h2>..~ */ \
	0x42,0x54,0x56,0x65,0x72,0x7e,0x0d,0x0a,0x3c,0x68,0x32,0x3e,0x42,0x54,0x43,0x6f, /* BTVer~..<h2>BTCo */ \
	0x6d,0x6d,0x20,0x53,0x74,0x61,0x74,0x75,0x73,0x3c,0x2f,0x68,0x32,0x3e,0x0d,0x0a, /* mm Status</h2>.. */ \
	0x3c,0x75,0x6c,0x3e,0x0d,0x0a,0x3c,0x6c,0x69,0x3e,0x53,0x74,0x61,0x74,0x65,0x3a, /* <ul>..<li>State: */ \
	0x20,0x7e,0x42,0x54,0x53,0x74,0x61,0x74,0x75,0x73,0x7e,0x3c,0x2f,0x6c,0x69,0x3e, /*  ~BTStatus~</li> */ \
	0x0d,0x0a,0x3c,0x6c,0x69,0x3e,0x42,0x54,0x43,0x6f,0x6d,0x6d,0x54,0x69,0x6d,0x65, /* ..<li>BTCommTime */ \
	0x72,0x28,0x6d,0x73,0x29,0x3a,0x20,0x7e,0x42,0x54,0x43,0x6f,0x6d,0x6d,0x54,0x69, /* r(ms): ~BTCommTi */ \
	0x6d,0x65,0x72,0x7e,0x3c,0x2f,0x6c,0x69,0x3e,0x0d,0x0a,0x3c,0x6c,0x69,0x3e,0x54, /* mer~</li>..<li>T */ \
	0x69,0x63,0x6b,0x28,0x6d,0x73,0x29,0x3a,0x20,0x7e,0x54,0x69,0x63,0x6b,0x47,0x65, /* ick(ms): ~TickGe */ \
	0x74,0x7e,0x3c,0x2f,0x6c,0x69,0x3e,0x0d,0x0a,0x3c,0x2f,0x75,0x6c,0x3e,0x0d,0x0a, /* t~</li>..</ul>.. */ \
	0x0d,0x0a,0x3c,0x68,0x32,0x3e,0x49,0x32,0x43,0x20,0x53,0x74,0x61,0x74,0x75,0x73, /* ..<h2>I2C Status */ \
	0x3c,0x2f,0x68,0x32,0x3e,0x0d,0x0a,0x3c,0x75,0x6c,0x3e,0x0d,0x0a,0x3c,0x6c,0x69, /* </h2>..<ul>..<li */ \
	0x3e,0x53,0x53,0x50,0x31,0x43,0x4f,0x4e,0x31,0x3a,0x20,0x7e,0x53,0x53,0x50,0x31, /* >SSP1CON1: ~SSP1 */ \
	0x43,0x4f,0x4e,0x31,0x7e,0x3c,0x2f,0x6c,0x69,0x3e,0x0d,0x0a,0x3c,0x6c,0x69,0x3e, /* CON1~</li>..<li> */ \
	0x53,0x53,0x50,0x31,0x43,0x4f,0x4e,0x32,0x3a,0x20,0x7e,0x53,0x53,0x50,0x31,0x43, /* SSP1CON2: ~SSP1C */ \
	0x4f,0x4e,0x32,0x7e,0x3c,0x2f,0x6c,0x69,0x3e,0x0d,0x0a,0x3c,0x6c,0x69,0x3e,0x53, /* ON2~</li>..<li>S */ \
	0x53,0x50,0x31,0x53,0x54,0x41,0x54,0x3a,0x20,0x7e,0x53,0x53,0x50,0x31,0x53,0x54, /* SP1STAT: ~SSP1ST */ \
	0x41,0x54,0x7e,0x3c,0x2f,0x6c,0x69,0x3e,0x0d,0x0a,0x3c,0x2f,0x75,0x6c,0x3e,0x0d, /* AT~</li>..</ul>. */ \
	0x0a,0x3c,0x2f,0x62,0x6f,0x64,0x79,0x3e,0x0d,0x0a,0x3c,0x2f,0x68,0x74,0x6d,0x6c, /* .</body>..</html */ \
	0x3e,0x8d,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xbf,0x00,0x00,0x00,0x03,0x00,0x00, /* >............... */ \
	0x00,0xe5,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x01,0x00,0x00,0x08,0x00,0x00, /* ................ */ \
	0x00,0x49,0x01,0x00,0x00,0x04,0x00,0x00,0x00,0x68,0x01,0x00,0x00,0x05,0x00,0x00, /* .I.......h...... */ \
	0x00,0x87,0x01,0x00,0x00,0x06,0x00,0x00,0x00                                     /* .........        */


/**************************************
 * MPFS2 C linkable symbols
 **************************************/
// For C18, these are split into seperate arrays because it speeds up compilation a lot.  
// For other compilers, the entire data array must be defined as a single variable to 
// ensure that the linker does not reorder the data chunks in Flash when compiler 
// optimizations are turned on.
#if defined(__18CXX)
	ROM BYTE MPFS_Start[] = {DATACHUNK000000};
#else
	ROM BYTE MPFS_Start[] = {DATACHUNK000000};
#endif


/**************************************************************
 * End of MPFS
 **************************************************************/
#endif // #if defined(STACK_USE_MPFS2)
#endif // #if !defined(MPFS_USE_EEPROM) && !defined(MPFS_USE_SPI_FLASH)
