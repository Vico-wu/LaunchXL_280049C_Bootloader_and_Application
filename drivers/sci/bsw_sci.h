/*
 * sci.h
 *
 *  Created on: Jul 3, 2024
 *      Author: wqu3wx
 */

#ifndef DRIVERS_SCI_BSW_SCI_H_
#define DRIVERS_SCI_BSW_SCI_H_

#define SCI_BOOT                0x01    //GPIO28; //GPIO29 (CCARD)
#define SCI_BOOT_ALT1           0x21    //GPIO16; //GPIO17
#define SCI_BOOT_ALT2           0x41    //GPIO8; GPIO9
#define SCI_BOOT_ALT4           0x81    //GPIO24, GPIO25


#define DFU_CPU1                    0x0100
#define DFU_CPU2                    0x0200
#define ERASE_CPU1                  0x0300
#define ERASE_CPU2                  0x0400
#define VERIFY_CPU1                 0x0500
#define VERIFY_CPU2                 0x0600
#define LIVE_DFU_CPU1               0x0700
#define CPU1_UNLOCK_Z1              0x000A
#define CPU1_UNLOCK_Z2              0x000B
#define CPU2_UNLOCK_Z1              0x000C
#define CPU2_UNLOCK_Z2              0x000D
#define RUN_CPU1                    0x000E
#define RESET_CPU1                  0x000F
#define RUN_CPU1_BOOT_CPU2          0x0004
#define RESET_CPU1_BOOT_CPU2        0x0007
#define RUN_CPU2                    0x0010
#define RESET_CPU2                  0x0020

//
// undefine from bootrom.h
//
#undef  NO_ERROR
#define NO_ERROR                    0x1000
#define BLANK_ERROR                 0x2000
#define VERIFY_ERROR                0x3000
#define PROGRAM_ERROR               0x4000
#define COMMAND_ERROR               0x5000
#define UNLOCK_ERROR                0x6000
#define ACK                         0x2D
#define NAK                         0xA5
#define DEFAULT_BAUD                0x2580
#define checksum_enable             1

#define INCORRECT_DATA_BUFFER_LENGTH         0x7000
#define INCORRECT_ECC_BUFFER_LENGTH          0x8000
#define DATA_ECC_BUFFER_LENGTH_MISMATCH      0x9000
#define FLASH_REGS_NOT_WRITABLE              0xA000
#define FEATURE_NOT_AVAILABLE                0xB000
#define INVALID_ADDRESS                      0xC000
#define INVALID_CPUID                        0xD000
#define FAILURE                              0xE000
#define NOT_RECOGNIZED                       0xF000

typedef uint16_t (*uint16fptr)();
extern void sciaFlush(void);
extern uint32_t sciGetFunction(uint32_t BootMode);

#endif /* DRIVERS_SCI_BSW_SCI_H_ */
