/**
 * main.c
 */
#include "driverlib.h"
#include "device.h"
#include "bsw_sci.h"

typedef void (*AppBeginFunc)(void);
// Application Entry
#define APP_BEGIN_ADDR 0x084000
void jumpToApp(void)
{
    AppBeginFunc appBegin = (AppBeginFunc)APP_BEGIN_ADDR;
    appBegin();
}

void main(void)
{
    //Flush SCIA TX port by waiting while it is busy, driverlib.
    sciaFlush();

    // Initialize device and GPIO, driverlib.
    Device_init();
    Device_initGPIO();

    // Init interrupt and vectorTable, drivelib.
    Interrupt_initModule();
    Interrupt_initVectorTable();

    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    EINT;
    ERTM;

    // initialize flash_sectors, fapi + driverlib
    initFlashSectors();

    // parameter SCI_BOOT for GPIO28 (RX),29 (TX) is default.
    sciGetFunction(SCI_BOOT);

    jumpToApp();
}


