

#include <xc.h>
#include "mcc_generated_files/mcc.h"
#include "I2C_LCD.h"

void displayManager(char s1[], char s2[], char s3[], char s4[]) {

    LCD_Clear();
    LCD_CMD(LCD_ENTRY_MODE_SET | LCD_RETURN_HOME);
    __delay_ms(50);
    LCD_Set_Cursor(1, 1);
    LCD_Write_String(s1);
    LCD_Set_Cursor(2, 1);
    LCD_Write_String(s2);
    LCD_Set_Cursor(3, 1);
    LCD_Write_String(s3);
    LCD_Set_Cursor(4, 1);
    LCD_Write_String(s4);

}

void displayManagerMaster(char s1[], char s2[], char s3[], char s4[]) {

    LCD_Init(0x4E);
    displayManager(s1, s2, s3, s4);

}

void displayManagerSlave(char s1[], char s2[], char s3[], char s4[]) {

    LCD_Init(0x46);
    displayManager(s1, s2, s3, s4);

}
