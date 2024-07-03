/*
 * bsw_flash.c
 *
 *  Created on: Jul 3, 2024
 *      Author: wqu3wx
 */
#include "Types.h"
#include "bsw_flash.h"
#include "F021_F28004x_C28x.h"
#include "driverlib.h"

#pragma CODE_SECTION(flashError,".TI.ramfunc");
void flashError(Fapi_StatusType status)
{
    __asm("    ESTOP0");
}

void initFlashSectors(void)
{
    EALLOW;

    Fapi_StatusType oReturnCheck;
    oReturnCheck = Fapi_initializeAPI(F021_CPU0_BASE_ADDRESS, 100);
    if(oReturnCheck != Fapi_Status_Success)
    {
        flashError(oReturnCheck);
    }
    oReturnCheck = Fapi_setActiveFlashBank(Fapi_FlashBank0);
    if(oReturnCheck != Fapi_Status_Success)
    {
        flashError(oReturnCheck);
    }

    EDIS;
}
