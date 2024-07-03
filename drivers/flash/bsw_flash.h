/*
 * bsw_flash.h
 *
 *  Created on: Jul 3, 2024
 *      Author: wqu3wx
 */

#ifndef DRIVERS_FLASH_BSW_FLASH_H_
#define DRIVERS_FLASH_BSW_FLASH_H_
/**** include files ********************************************************************************
* List of include files needed in this module.                                                    */


#define FLASH_BOOT              0x03    //begin of BANK 0 Sector 0
#define FLASH_BOOT_ALT1         0x23    //begin of BANK 0 Sector 15
#define FLASH_BOOT_ALT2         0x43    //begin of BANK 1 Sector 0
#define FLASH_BOOT_ALT3         0x63    //begin of BANK 1 Sector 15

#define FLASH_ENTRY_POINT               0x080000    //BANK0 Sector 0
#define FLASH_ENTRY_POINT_ALT1          0x08EFF0    //BANK0 Sector 15 end - 16
#define FLASH_ENTRY_POINT_ALT2          0x090000    //BANK1 sector 0
#define FLASH_ENTRY_POINT_ALT3          0x09EFF0    //BANK1 sector 15 end - 16



extern void initFlashSectors(void);

#endif /* DRIVERS_FLASH_BSW_FLASH_H_ */
