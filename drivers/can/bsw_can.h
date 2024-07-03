/*
 * bsw_can.h
 *
 *  Created on: Jul 3, 2024
 *      Author: wqu3wx
 */

#ifndef DRIVERS_CAN_BSW_CAN_H_
#define DRIVERS_CAN_BSW_CAN_H_
/**** include files ********************************************************************************
* List of include files needed in this module.                                                    */


/*** defines ***************************************************************************************
* List of defines needed only in this module.                                                     */

#define CAN_BOOT                0x02    //GPIO32; GPIO33
#define CAN_BOOT_ALT1           0x22    //GPIO4; GPIO5
#define CAN_BOOT_ALT2           0x42    //GPIO30; GPIO31
#define CAN_BOOT_ALT3           0x62    //GPIO35; GPIO37
#define CAN_BOOT_SENDTEST       0x82    //GPIO32; GPIO33
#define CAN_BOOT_ALT1_SENDTEST  0xA2    //GPIO4; GPIO5
#define CAN_BOOT_ALT2_SENDTEST  0xC2    //GPIO30; GPIO31
#define CAN_BOOT_ALT3_SENDTEST  0xE2    //GPIO35; GPIO37


/**** typedefs/structures **************************************************************************
* Typedefs/structures needed only in this module.                                                 */


/**** data constants *******************************************************************************
* Definitions of constants used only in this module.                                              */


/**** data *****************************************************************************************
* Definitions of variables used only in this module. Memory class "static" has to be used for      *
* each variable.                                                                                  */


/**** prototypes ***********************************************************************************
* Prototypes of functions defined and used only in this module. Memory class "static" has to be    *
* used for each function.                                                                         */

#endif /* DRIVERS_CAN_BSW_CAN_H_ */
