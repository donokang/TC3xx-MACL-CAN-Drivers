
/*******************************************************************************
**                                                                            **
** Copyright (C) Infineon Technologies (2016)                                 **
**                                                                            **
** All rights reserved.                                                       **
**                                                                            **
** This document contains proprietary information belonging to Infineon       **
** Technologies. Passing on and copying of this document, and communication   **
** of its contents is not permitted without prior written authorization.      **
**                                                                            **
********************************************************************************
**                                                                            **
**   FILENAME   : DemoApp_Cfg.h                                               **
**                                                                            **
**  DATE, TIME: 2023-08-10, 16:09:30                                          **
**                                                                            **
**  GENERATOR : Build b191017-0938                                            **
**                                                                            **
**  VARIANT   : Post-Build                                                    **
**                                                                            **
**  PLATFORM  : Infineon AURIX2G                                              **
**                                                                            **
**  AUTHOR    : DL-AUTOSAR-Engineering                                        **
**                                                                            **
**  VENDOR    : Infineon Technologies                                         **
**                                                                            **
**  DESCRIPTION  : DemoApp configuration generated out of Tresos configuration**
**                                                                            **
**  SPECIFICATION(S) : NA                                                     **
**                                                                            **
**  MAY BE CHANGED BY USER [yes/no]: Yes                                      **
**                                                                            **
*******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#ifndef  DEMOAPP_CFG_H
#define  DEMOAPP_CFG_H

/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/
/************************* Demo Application Configuration *********************/



#define MCU_DEMO_EN                   (STD_ON)
#define PORT_DEMO_EN                  (STD_ON)
#define DIO_DEMO_EN                   (STD_ON)
#define GPT_DEMO_EN                   (STD_OFF)
#define SPI_DEMO_EN                   (STD_OFF)
#define PWM_DEMO_EN                   (STD_OFF)
#define ADC_DEMO_EN                   (STD_OFF)
#define DMA_DEMO_EN                   (STD_OFF)
/* Note that the FLS Delivery must be ON if FEE is ON */
#define FEE_DEMO_EN                   (STD_OFF)
#define FLS_DEMO_EN                   (STD_OFF)
#define ICU_DEMO_EN                   (STD_ON)
#define CAN_DEMO_EN                   (STD_ON)
#define FR_DEMO_EN                    (STD_OFF)
#define ETH_DEMO_EN                   (STD_OFF)
#define WDG_DEMO_EN                   (STD_OFF)
#define MSC_DEMO_EN                   (STD_OFF)
#define CRC_DEMO_EN                   (STD_OFF)
#define LIN_DEMO_EN                   (STD_OFF)
#define HSSL_DEMO_EN                  (STD_OFF)
#define SENT_DEMO_EN                  (STD_OFF)
#define FLSLDR_DEMO_EN                (STD_OFF)
#define IRQ_DEMO_EN                   (STD_ON)
#define I2C_DEMO_EN                   (STD_OFF)
#define IOM_DEMO_EN                   (STD_OFF)
#define UART_DEMO_EN                   (STD_OFF)
#define SMU_DEMO_EN                  (STD_OFF)
#define STM_DEMO_EN                  (STD_ON)
#define OCU_DEMO_EN                  (STD_OFF)
#define DSADC_DEMO_EN                (STD_OFF)
#define CTRV9251_DEMO_EN             (STD_ON)
#define CTRV9255_DEMO_EN             (STD_ON)

#endif /* DEMOAPP_CFG_H */
