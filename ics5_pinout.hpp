/**
 * @file ics5_pinout.hpp
 * @author Felícito Manzano (felicito.manzano@detektor.com.sv)
 * @brief ics5_rev5
 * @version 0.1
 * @date 2020-09-22
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef __ICS5_PINOUT_H
#define __ICS5_PINOUT_H 

    #define ICS_BOARD_ID  11


    /**
     * @brief 
     * 
     */
        #if (ICS_BOARD_ID == 12)
        //UART
        #define BLE_TX          PA_9    //USART1 - BLUETOOTH
        #define BLE_RX          PA_10
        #define TTL_TX          PA_2    //USART2
        #define TTL_RX          PA_3
        #define RS232_CH1_TX    PD_8   //USART3
        #define RS232_CH1_RX    PD_9
        #define RS232_CH2_TX    PC_12   //USART5
        #define RS232_CH2_RX    PE_7
        #define RS485_TX        PC_6    //USART6
        #define RS485_RX        PC_7
        #define TTL_VOICE_TX    PA_0    //USART4
        #define TTL_VOICE_RX    PA_1

        // INPUT
        #define INPUT1_POSITIVE     PA_7
        #define INPUT2_NEGATIVE     PB_0
        #define INPUT3_NEGATIVE     PB_1
        #define INPUT4_NEGATIVE     PF_10
        #define INPUT5_NEGATIVE     PA_4
        #define INPUT6_NEGATIVE     PA_5
        #define INPUT7_NEGATIVE     PA_6
        #define INPUT8_NEGATIVE     PB_3

        // OUTPUT
        #define OUTPUT1_NEGATIVE    PB_13
        #define OUTPUT2_NEGATIVE    PB_14
        #define OUTPUT3_NEGATIVE    PB_15
        #define OUTPUT4_NEGATIVE    PC_0
        //#define OUTPUT5_NEGATIVE    PB_5
        //#define OUTPUT6_NEGATIVE    PA_15
        //#define OUTPUT7_NEGATIVE    PA_8

        // BSP
        #define USER_BUTTON         PC_13
        #define USER_LED1           PB_4
        #define USER_LED2           PB_12

        // BLUETOOTH
        #define BT_STATE            PA_15
        #define BT_RESET            PB_5
        
        // VOICE
        #define VOICE_BUSY          PC_1

        // CAN
        #define STBY_CAN            PD_3
        #define CAN1_TX             PD_1
        #define CAN1_RX             PD_0
        #define MP2155_ENABLE       PB_10

        // I2C
        #define I2C_SDA_EE          PB_9
        #define I2C_SCL_EE          PB_8
        #define I2C_SDA_QW          PC_9
        #define I2C_SCL_QW          PA_8
        
        // SPI
        #define SPI_SCK             PE_2
        #define SPI_SS              PE_4
        #define SPI_MISO            PE_5
        #define SPI_MOSI            PE_6

        // USB
        #define USB_DP              PA_12
        #define USB_DM              PA_11

        //GPIO
        #define GPIO01  PD_6
        #define GPIO02  PD_7
        #define GPIO03  PB_11
        #define GPIO04  PF_14
        #define GPIO05  PD_15
        #define GPIO06  PE_15
        #define GPIO07  PD_12
        #define GPIO08  PG_0
        #define GPIO09  PF_11
        #define GPIO10  PG_2
        #define GPIO11  PG_3
        #define GPIO12  PG_4
        #define GPIO13  PG_5
        #define GPIO14  PG_6
        #define GPIO15  PE_0
        #define GPIO16  PG_8
        #define GPIO17  PE_1
        #define GPIO18  PG_10
        #define GPIO19  PG_11
        #define GPIO20  PG_12
        #define GPIO21  PE_3


    #elif (ICS_BOARD_ID == 11)
        //UART
        #define BLE_TX          PA_9    //USART1 - BLUETOOTH
        #define BLE_RX          PA_10
        #define TTL_TX          PA_2    //USART2
        #define TTL_RX          PA_3
        #define RS232_CH1_TX    PB_10   //USART3
        #define RS232_CH1_RX    PB_11
        #define RS232_CH2_TX    PC_12   //USART5
        #define RS232_CH2_RX    PE_7
        #define RS485_TX        PC_6    //USART6
        #define RS485_RX        PC_7
        #define TTL_VOICE_TX    PA_0    //USART4
        #define TTL_VOICE_RX    PA_1

        // INPUT
        #define INPUT1_POSITIVE     PA_7
        #define INPUT2_NEGATIVE     PB_0
        #define INPUT3_NEGATIVE     PB_1
        #define INPUT4_NEGATIVE     PF_10
        #define INPUT5_NEGATIVE     PA_4
        #define INPUT6_NEGATIVE     PA_5
        #define INPUT7_NEGATIVE     PA_6
        #define INPUT8_NEGATIVE     PB_3
        // OUTPUT
        #define OUTPUT1_NEGATIVE    PB_13
        #define OUTPUT2_NEGATIVE    PB_14
        #define OUTPUT3_NEGATIVE    PB_15
        #define OUTPUT4_NEGATIVE    PC_0
        //#define OUTPUT5_NEGATIVE    PB_5
        //#define OUTPUT6_NEGATIVE    PA_15
        //#define OUTPUT7_NEGATIVE    PA_8

        // BSP
        #define USER_BUTTON         PC_13
        #define USER_LED1           PB_4
        #define USER_LED2           PB_12

        // BLUETOOTH
        #define BT_STATE            PA_15
        #define BT_RESET            PB_5
        
        // VOICE
        #define VOICE_BUSY          PC_1

        // CAN
        #define STBY_CAN            PD_3
        #define CAN1_TX             PD_1
        #define CAN1_RX             PD_0

        // I2C
        #define I2C_SDA_EE          PB_9
        #define I2C_SCL_EE          PB_8
        #define I2C_SDA_QW          PC_9
        #define I2C_SCL_QW          PA_8
        
        // SPI
        #define SPI_SCK             PE_2
        #define SPI_SS              PE_4
        #define SPI_MISO            PE_5
        #define SPI_MOSI            PE_6

        // USB
        #define USB_DP              PA_12
        #define USB_DM              PA_11

    #elif (ICS_BOARD_ID == 5)
        //UART
        #define BLE_TX          PA_9    //USART1
        #define BLE_RX          PA_10
        #define TTL_1_TX        PA_9    //USART1
        #define TTL_1_RX        PA_10
        #define TTL_2_TX        PA_2    //USART2
        #define TTL_2_RX        PA_3
        #define RS232_CH1_TX    PA_2    //USART2
        #define RS232_CH1_RX    PA_3
        #define RS232_CH2_TX    PB_10   //USART3
        #define RS232_CH2_RX    PB_11
        #define RS485_TX        PB_10   //USART3
        #define RS485_RX        PB_11
        #define TTL_4_TX        PA_0    //USART4
        #define TTL_4_RX        PA_1
        #define TTL_5_TX        PB_3    //USART5
        #define TTL_5_RX        PB_4
        // INPUT
        #define INPUT1_POSITIVE     PA_7
        #define INPUT2_NEGATIVE     PB_0
        #define INPUT3_NEGATIVE     PB_1
        #define INPUT4_NEGATIVE     PB_2
        #define INPUT5_NEGATIVE     PA_4
        #define INPUT6_NEGATIVE     PA_5
        // OUTPUT
        #define OUTPUT1_NEGATIVE    PA_12
        #define OUTPUT2_NEGATIVE    PA_11
        #define OUTPUT3_NEGATIVE    PB_7
        #define OUTPUT4_NEGATIVE    PB_6
        #define OUTPUT5_NEGATIVE    PB_5
        #define OUTPUT6_NEGATIVE    PA_15
        #define OUTPUT7_NEGATIVE    PA_8
        // BSP
        #define USER_BUTTON         PC_13
        #define USER_LED2           PB_14
        #define USER_LED3           PB_15
        // BLUETOOTH
        #define BT_STATE            PB_13
        #define BT_LED              PB_12
        // 1-WIRE
        #define ONE_WIRE            PA_6
        // I2C
        #define I2C_SCL             PB_8
        #define I2C_SDA             PB_9


    /**
     * @brief 
     * 
     */
    #elif (ICS_BOARD_ID == 3)
        //UART
        #define BLE_TX          PA_9    //USART1 ==> AVL FMU130
        #define BLE_RX          PA_10
        #define TTL_1_TX        PA_9    //USART1
        #define TTL_1_RX        PA_10
        #define TTL_2_TX        PA_2    //USART2 ==> Lector de Huellas
        #define TTL_2_RX        PA_3
        #define RS232_CH1_TX    PA_2    //USART2
        #define RS232_CH1_RX    PA_3
        #define RS232_CH2_TX    PB_10   //USART3
        #define RS232_CH2_RX    PB_11
        #define RS485_TX        PB_10   //USART3
        #define RS485_RX        PB_11
        #define TTL_4_TX        PA_0    //USART4 ==> N/C Parlante
        #define TTL_4_RX        PA_1
        #define TTL_5_TX        PB_3    //USART5 ==> PC DEbug
        #define TTL_5_TX        PB_4
        // INPUT 
        #define INPUT1_POSITIVE     PA_15
        #define INPUT2_NEGATIVE     PA_6
        #define INPUT3_NEGATIVE     PA_7
        #define INPUT4_NEGATIVE     PA_5
        #define INPUT5_NEGATIVE     PA_8
        // OUTPUTS 
        #define OUTPUT1_NEGATIVE    PB_9
        #define OUTPUT2_NEGATIVE    PB_8
        #define OUTPUT3_NEGATIVE    PB_7
        #define OUTPUT4_NEGATIVE    PB_6
        #define OUTPUT5_NEGATIVE    PB_5
        #define OUTPUT6_NEGATIVE    PB_4
        #define OUTPUT7_NEGATIVE    PB_3
        // BSP
        #define USER_BUTTON         PC_13
        #define USER_LED2           PA_4
        #define USER_LED3           PB_0
        // 1-WIRE 
        #define ONE_WIRE            PB_1
        #define ONE_WIRE2           PB_2
        // TTL
        #define TTL_IO1             PA_11
        #define TTL_IO2             PA_12
        #define RF_TTL_DIN0         PA_8
        #define RF_TTL_DIN1         PB_15
        #define RF_TTL_DIN2         PB_14
        #define RF_TTL_DIN3         PB_13
        #define RF_TTL_DIN_VT       PB_12
        // BLUETOOTH
        #define BT_STATE            PB_13
        #define BT_LED              PB_12


    /**
     * @brief 
     * 
     */
    #elif (ICS_BOARD_ID == 303)
        /* ******************************************** */
        /* *** PRUEBAS CON NUCLEO F303K8            *** */
        /* ******************************************** */
        #define TTL_1_TX            PA_2    //USART1
        #define TTL_1_RX            PA_15
        #define RS232_CH1_TX        PA_2    // USART1
        #define RS232_CH1_RX        PA_15   
        #define TTL_2_TX            PA_9    //USART2
        #define TTL_2_RX            PA_10
        #define RS232_CH2_TX        PA_9   
        #define RS232_CH2_RX        PA_10
        #define RS485_TX            PA_9   
        #define RS485_RX            PA_10
        #define INPUT1_POSITIVE     PA_12
        #define INPUT2_NEGATIVE     PB_0
        #define INPUT3_NEGATIVE     PB_7
        #define INPUT4_NEGATIVE     PB_6
        #define OUTPUT1_NEGATIVE    PB_1
        #define OUTPUT2_NEGATIVE    PF_0
        #define OUTPUT3_NEGATIVE    PF_1
        #define OUTPUT4_NEGATIVE    PA_8
        #define OUTPUT5_NEGATIVE    PA_11
        #define OUTPUT6_NEGATIVE    PB_5
        #define OUTPUT7_NEGATIVE    PB_4
        #define USER_LED2           PB_3    // LED BSP


    /**
     * @brief 
     * 
     */
    #elif (ICS_BOARD_ID == 91)
        /* ******************************************** */
        /* *** PRUEBAS CON NUCLEO F091RC            *** */
        /* ******************************************** */
        //UART
        #define BLE_TX          PC_10    //USART1
        #define BLE_RX          PC_11
        #define TTL_1_TX        PC_10    //USART1
        #define TTL_1_RX        PC_11
        #define TTL_2_TX        PC_12    //USART2
        #define TTL_2_RX        PD_2
        #define RS232_CH1_TX    PC_12    //USART2
        #define RS232_CH1_RX    PD_2
        #define RS232_CH2_TX    PC_0   //USART3
        #define RS232_CH2_RX    PC_1
        #define RS485_TX        PC_0   //USART3
        #define RS485_RX        PC_1
        #define TTL_4_TX        PC_8    //USART4
        #define TTL_4_RX        PC_9
        #define TTL_5_TX        PA_2    //USART5
        #define TTL_5_RX        PA_3
        // INPUT
        #define INPUT1_POSITIVE     PC_4
        #define INPUT2_NEGATIVE     PB_13
        #define INPUT3_NEGATIVE     PB_14
        #define INPUT4_NEGATIVE     PB_15
        #define INPUT5_NEGATIVE     PB_1
        #define INPUT6_NEGATIVE     PB_2
        // OUTPUT
        #define OUTPUT1_NEGATIVE    PC_3
        #define OUTPUT2_NEGATIVE    PC_2
        #define OUTPUT3_NEGATIVE    PF_1
        #define OUTPUT4_NEGATIVE    PF_0
        #define OUTPUT5_NEGATIVE    PC_15
        #define OUTPUT6_NEGATIVE    PC_14
        #define OUTPUT7_NEGATIVE    PB_7
        // BSP
        #define USER_BUTTON         PC_13
        #define USER_LED2           PA_5
        
         // BLUETOOTH
        #define BT_STATE            PB_0
        #define BT_LED              PA_4


    #endif
#endif  //__ICS5_PINOUT_H