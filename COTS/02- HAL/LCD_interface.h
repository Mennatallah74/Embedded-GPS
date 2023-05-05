//*********************************************************//
//********** Name    : ASU_EMBEDDED_TEAM_3		***********//
//********** Date    : 14/04/2023              	***********//
//********** SWC     : LCD                   	***********//
//********** Version : 1.0                    	***********//
//*********************************************************//
#ifndef __LCD_INTERFACE_C__H__
#define __LCD_INTERFACE_C__H__

                  // GPIO pin connected to RS of LCD
#define E 0x10   // GPIO pin connected to E of LCD
#define DB_MASK 0xF0  // Mask for data pins connected to DB4-DB7 of LCD
#define BusyFlag //DB7 pin responsible for busy flag
#define RW 0x40 //GPIO connected to RW of LCD

#define DB0 0
#define DB1  1
#define DB2  2
#define DB3  3
#define DB4  4
#define DB5  5
#define DB6  6
#define DB7  7
#define RS  8

#define CLR_PIN 0
#define SET_PIN 1

#define PORT_DB0 0
#define PORT_DB1 1
#define PORT_DB2 2
#define PORT_DB3 3
#define PORT_DB4 4
#define PORT_DB5 5
#define PORT_DB6 5
#define PORT_DB7 5
#define PORT_RS 4
#define PORT_RW 4
#define PORT_E 4


#define PORTS_EN 0x3F
#define  BIT_MODE  4 //also can be 8


#define Function_Set_4Bit 0x20
#define Function_Set_8Bit 0x30
#define ON_OFF 0x0C
#define Clear_Display 0x01
#define Entry_Mode 0x06

void LCD_VoidCommand(u8 copy_u8Command);
void LCD_VoidChar(u8 copy_u8Data);
void LCD_VoidInit(void);
void lcd_VoidCheck_BF(void);
void LCD_VoidString (u8 *copy_u8Str);
void LCD_VoidSendNumber( f64 copy_f64Num);

#endif
