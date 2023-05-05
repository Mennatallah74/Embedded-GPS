
#include "LCD_private.h"
#include"STD_TYPES.h"
#include "LCD_interface.h"



void LCD_VoidCommand(u8 copy_u8Command)
{
     switch(BIT_MODE)
     {
 case 4:
    DIO_u8SetPinValue(PORT_RS,RS,CLR_PIN ); // set RS to 0 (command mode)
    DIO_u8SetPinValue(PORT_RW,RW,CLR_PIN ); //set RW to 0
    DIO_u8SetPinValue(PORT_DB4,DB4,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB5,DB5,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB6,DB6,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB7,DB7,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB4,DB4,copy_u8Command&0x10); // send high nibble
    DIO_u8SetPinValue(PORT_DB5,DB5,copy_u8Command&0x20);
    DIO_u8SetPinValue(PORT_DB6,DB6,copy_u8Command&0x40);
    DIO_u8SetPinValue(PORT_DB7,DB7,copy_u8Command&0x80);
    DIO_u8SetPinValue(PORT_E,E,SET_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    DIO_u8SetPinValue(PORT_E,E,CLR_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    DIO_u8SetPinValue(PORT_DB4,DB4,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB5,DB5,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB6,DB6,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB7,DB7,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB4,DB4,copy_u8Command&0x01); // send high nibble
    DIO_u8SetPinValue(PORT_DB5,DB5,copy_u8Command&0x02);
    DIO_u8SetPinValue(PORT_DB6,DB6,copy_u8Command&0x04);
    DIO_u8SetPinValue(PORT_DB7,DB7,copy_u8Command&0x08);
    DIO_u8SetPinValue(PORT_E,E,SET_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    DIO_u8SetPinValue(PORT_E,E,CLR_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
 case 8:
    DIO_u8SetPinValue(PORT_RS,RS,CLR_PIN ); // set RS to 0 (command mode)
    DIO_u8SetPinValue(PORT_RW,RW,CLR_PIN ); //set RW to 0

    DIO_u8SetPinValue(PORT_DB0,DB0,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB1,DB1,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB2,DB2,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB3,DB3,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB4,DB4,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB5,DB5,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB6,DB6,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB7,DB7,CLR_PIN );

    DIO_u8SetPinValue(PORT_DB0,DB0,copy_u8Command&0x01); // send high nibble
    DIO_u8SetPinValue(PORT_DB1,DB1,copy_u8Command&0x02);
    DIO_u8SetPinValue(PORT_DB2,DB2,copy_u8Command&0x04);
    DIO_u8SetPinValue(PORT_DB3,DB3,copy_u8Command&0x08);
    DIO_u8SetPinValue(PORT_DB4,DB4,copy_u8Command&0x10); // send high nibble
    DIO_u8SetPinValue(PORT_DB5,DB5,copy_u8Command&0x20);
    DIO_u8SetPinValue(PORT_DB6,DB6,copy_u8Command&0x40);
    DIO_u8SetPinValue(PORT_DB7,DB7,copy_u8Command&0x80);

    DIO_u8SetPinValue(PORT_E,E,SET_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    DIO_u8SetPinValue(PORT_E,E,CLR_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    break;
 default:
    break;
     }
}

void LCD_VoidChar(u8 copy_u8Data)
{
    switch(BIT_MODE)
    {
case 4:
    DIO_u8SetPinValue(PORT_RS,RS,CLR_PIN ); // set RS to 0 (command mode)
    DIO_u8SetPinValue(PORT_RW,RW,CLR_PIN ); //set RW to 0
    DIO_u8SetPinValue(PORT_DB4,DB4,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB5,DB5,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB6,DB6,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB7,DB7,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB4,DB4, copy_u8Data &0x10); // send high nibble
    DIO_u8SetPinValue(PORT_DB5,DB5,copy_u8Data &0x20);
    DIO_u8SetPinValue(PORT_DB6,DB6,copy_u8Data &0x40);
    DIO_u8SetPinValue(PORT_DB7,DB7,copy_u8Data &0x80);
    DIO_u8SetPinValue(PORT_E,E,SET_PIN );  // toggle E to latch high nibble
    STK_voidDelay(1);
    DIO_u8SetPinValue(PORT_E,E,CLR_PIN );  // toggle E to latch high nibble
    STK_voidDelay(1);
     DIO_u8SetPinValue(PORT_DB4,DB4,copy_u8Data &0x01); // send high nibble
    DIO_u8SetPinValue(PORT_DB5,DB5,copy_u8Data &0x02);
    DIO_u8SetPinValue(PORT_DB6,DB6,copy_u8Data &0x04);
    DIO_u8SetPinValue(PORT_DB7,DB7,copy_u8Data &0x08);

    DIO_u8SetPinValue(PORT_E,E,SET_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    DIO_u8SetPinValue(PORT_E,E,CLR_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    break;

    case 8:
     DIO_u8SetPinValue(PORT_RS,RS,CLR_PIN ); // set RS to 0 (command mode)
    DIO_u8SetPinValue(PORT_RW,RW,CLR_PIN ); //set RW to 0
    DIO_u8SetPinValue(PORT_DB0,DB0,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB1,DB1,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB2,DB2,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB3,DB3,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB4,DB4,CLR_PIN );  // clear data pins
    DIO_u8SetPinValue(PORT_DB5,DB5,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB6,DB6,CLR_PIN );
    DIO_u8SetPinValue(PORT_DB7,DB7,CLR_PIN );  // clear data pins

    DIO_u8SetPinValue(PORT_DB0,DB0,copy_u8Data &0x01); // send high nibble
    DIO_u8SetPinValue(PORT_DB1,DB1,copy_u8Data &0x02);
    DIO_u8SetPinValue(PORT_DB2,DB2,copy_u8Data &0x04);
    DIO_u8SetPinValue(PORT_DB3,DB3,copy_u8Data &0x08);
    DIO_u8SetPinValue(PORT_DB4,DB4,copy_u8Data &0x10); // send high nibble
    DIO_u8SetPinValue(PORT_DB5,DB5,copy_u8Data &0x20);
    DIO_u8SetPinValue(PORT_DB6,DB6,copy_u8Data &0x40);
    DIO_u8SetPinValue(PORT_DB7,DB7,copy_u8Data &0x80);

    DIO_u8SetPinValue(PORT_E,E,SET_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    DIO_u8SetPinValue(PORT_E,E,CLR_PIN ); // toggle E to latch high nibble
    STK_voidDelay(1);
    break;
    default:
    break;
    }



}

void LCD_VoidInit(void)
{
    SYSCTL_RCGCGPIO_R |= PORTS_EN;  // enable clock for all ports
    switch(BIT_MODE)
    {
    case 4:
    DIO_u8SetPinDirection (PORT_DB4, DB4,SET_PIN); // set data pins as output
    DIO_u8SetPinDirection (PORT_DB5, DB5,SET_PIN);
    DIO_u8SetPinDirection (PORT_DB6, DB6,SET_PIN);
    DIO_u8SetPinDirection (PORT_DB7, DB7,SET_PIN);
    DIO_u8SetPinDirection (PORT_RS, RS,SET_PIN);
    DIO_u8SetPinDirection (PORT_E, E,SET_PIN);

    /*SET_BIT(GPIO_PORTA_DEN_R,D4); //Enable digital function
    SET_BIT(GPIO_PORTA_DEN_R,D5);
    SET_BIT(GPIO_PORTA_DEN_R,D6);
    SET_BIT(GPIO_PORTA_DEN_R,D7);
    SET_BIT(GPIO_PORTA_DEN_R,RS);
    SET_BIT(GPIO_PORTA_DEN_R,E);*/

    STK_voidDelay(20);  // wait for LCD to power up
    LCD_VoidCommand(Function_Set_4Bit);  // function set command: 4-bit mode, 1-line display, 5x7 dot font
    LCD_VoidCommand(ON_OFF);  // display ON/OFF command: display on, cursor off, blinking off
    LCD_VoidCommand(Clear_Display);  //   clear display command
    LCD_VoidCommand(Entry_Mode);  // entry mode set command: cursor moves to right after writing a character
    break;
    case 8:
    DIO_u8SetPinDirection (PORT_DB0, DB0,SET_PIN); // set data pins as output
    DIO_u8SetPinDirection (PORT_DB1, DB1,SET_PIN);
    DIO_u8SetPinDirection (PORT_DB2, DB2,SET_PIN);
    DIO_u8SetPinDirection (PORT_DB3, DB3,SET_PIN);
    DIO_u8SetPinDirection (PORT_DB4, DB4,SET_PIN); // set data pins as output
    DIO_u8SetPinDirection (PORT_DB5, DB5,SET_PIN);
    DIO_u8SetPinDirection (PORT_DB6, DB6,SET_PIN);
    DIO_u8SetPinDirection (PORT_DB7, DB7,SET_PIN);
    DIO_u8SetPinDirection (PORT_RS, RS,SET_PIN);
    DIO_u8SetPinDirection (PORT_E, E,SET_PIN);

    STK_voidDelay(20);  // wait for LCD to power up
    LCD_VoidCommand(Function_Set_8Bit);  // function set command: 4-bit mode, 1-line display, 5x7 dot font
    LCD_VoidCommand(ON_OFF);  // display ON/OFF command: display on, cursor off, blinking off
    LCD_VoidCommand(Clear_Display);  //   clear display command
    LCD_VoidCommand(Entry_Mode);  // entry mode set command: cursor moves to right after writing a character
    break;

    default:
    break;
    }


}


void lcd_VoidCheck_BF(void)
{
    u8 BF_copy;                         // busy flag 'mirror'
   DIO_u8SetPinDirection (PORT_DB7, DB7,CLR_PIN); // set D7 data direction to input
   DIO_u8SetPinValue(PORT_RS,RS,CLR_PIN );                // select the Instruction Register (RS low)
    DIO_u8SetPinValue(PORT_RW,RW,SET_PIN );                  // read from LCD module (RW high)

    do
    {
        BF_copy = 0;                         // initialize busy flag 'mirror'
         DIO_u8SetPinValue(PORT_E,E,SET_PIN );              // Enable pin high
        STK_voidDelay(1);

        BF_copy |= DB7;  // get actual busy flag status

        GDIO_u8SetPinValue(PORT_E,E,CLR_PIN );              // Enable pin low
        STK_voidDelay(1);

    } while (DB7);                   // check again if busy flag was high

// arrive here if busy flag is clear -  clean up and return
    DIO_u8SetPinValue(PORT_RW,RW,CLR_PIN );              // write to LCD module (RW low)       <-- (not really necessary)
    DIO_u8SetPinDirection (PORT_DB7, DB7, SET_PIN);                 // reset D7 data direction to output
}
void LCD_VoidString (u8 *copy_u8Str) /* Send string to LCD function */
{
	u32 i;
	for(i=0;copy_u8Str[i]!='\0';i++)  /* Send each char of string till the NULL */
	{
		LCD_VoidChar (copy_u8Str[i]);  /* Call LCD data write */
	}
}
void LCD_VoidSetPosition(u8 copy_u8xDir, u8 copy_u8yDir) {
    switch(copy_u8yDir)
    {
      case 0:
        LCD_VoidCommand(0x80 + copy_u8xDir); // Set DDRAM address for first row
        break;
      case 1:
        LCD_VoidCommand(0xC0 + copy_u8xDir); // Set DDRAM address for second row
        break;
      default:
        break;
    }
}

void LCD_VoidSendNumber( f64 copy_f64Num) {
  u8 Local_u8Buffer[11] = {0}; // buffer to hold string representation of number
  s8 Local_s8Counter = 0; // index for iterating through buffer

  if (copy_f64Num == 0) {
    LCD_VoidChar('0'); // if number is 0, just write a single '0' to the LCD
    return;
  }

  // add sign to buffer if number is negative
  if (copy_f64Num < 0) {
    buffer[Local_s8Counter++] = '-';
   copy_f64Num = -copy_f64Num;
  }
    // convert number to string by repeatedly dividing by 10 and adding the remainder to the buffer
  while (copy_f64Num > 0) {
   Local_u8Buffer[Local_s8Counter++] = (copy_f64Num % 10) + '0'; // add remainder to buffer as character
    copy_f64Num /= 10; // divide by 10 to get next digit
  }

  // write digits to LCD in reverse order (since they were added to buffer in reverse order)
  for (s8 j = Local_s8Counter - 1; j >= 0; j--) {
   LCD_VoidChar(Local_u8Buffer[j]); // write digit to LCD
  }
}








int main(void)
{
LCD_VoidInit();
    while (1)
        ;  // do nothing
}
