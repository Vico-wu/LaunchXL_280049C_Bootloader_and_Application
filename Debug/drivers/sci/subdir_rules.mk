################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
drivers/sci/%.obj: ../drivers/sci/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 --include_path="C:/Users/WQU3WX/workspace_v12/LAUNCHXL_F280049C_Bootloader/device/driverlib" --include_path="C:/ti/c2000/C2000Ware_5_02_00_00/libraries/flash_api/f28004x/include/FlashAPI" --include_path="C:/Users/WQU3WX/workspace_v12/LAUNCHXL_F280049C_Bootloader/drivers/flash" --include_path="C:/Users/WQU3WX/workspace_v12/LAUNCHXL_F280049C_Bootloader/device" --include_path="C:/Users/WQU3WX/workspace_v12/LAUNCHXL_F280049C_Bootloader/drivers/can" --include_path="C:/Users/WQU3WX/workspace_v12/LAUNCHXL_F280049C_Bootloader" --include_path="C:/Users/WQU3WX/workspace_v12/LAUNCHXL_F280049C_Bootloader/drivers/sci" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --define=_FLASH --define=_LAUNCHXL_F280049C --define=CPU1 -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="drivers/sci/$(basename $(<F)).d_raw" --obj_directory="drivers/sci" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


