#include <Wire.h>                      //Inlcuding Wire.h library so as to bring about communication between the LCD and the microcontroller via I2C communication protocol
#include <LiquidCrystal_I2C.h>         //Including LiquidCrystal_I2C.h so as to use functions related to the operation the LCD
int LCD_MESSAGES();                    //Declaration of the LCD_MESSAGES function

LiquidCrystal_I2C lcd(0x27,16,2);      //Defining the I2C address of the LCD and the size of the LCD

void setup()
{
  lcd.init();                         //Initialising the LCD
  lcd.backlight();                    //Enabling the blue backlight of the LCD
}


void loop()
{
  LCD_MESSAGES();                          //Calling the LCD_MESSAGES function
  
}  

int LCD_MESSAGES()                         //Defining the LCD_MESSAGES function
{
  lcd.setCursor(0,0);                                       
  lcd.print("WELCOME FOR");     
  lcd.setCursor(0,1); 
  lcd.print("VERIFICATION!");         
  delay(3000);                              //Display "WELCOME FOR VERIFICATION!" for 3 seconds on LCD
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("PLEASE ENTER");                            
  lcd.setCursor(0,1);
  lcd.print("YOUR AADHAR NO.");
  delay(3000);                              //Display "PLEASE ENTER YOUR AADHAR NO." for 3 seconds on LCD
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("1");
  delay(1000);
  lcd.setCursor(1,0);
  lcd.print("2");
  delay(1000);
  lcd.setCursor(2,0);
  lcd.print("3");
  delay(1000);
  lcd.setCursor(3,0);
  lcd.print("4");
  delay(1000);
  lcd.setCursor(4,0);
  lcd.print("5");
  delay(1000);
  lcd.setCursor(5,0);
  lcd.print("6");
  delay(1000);                                 //Display numbers from 1 to 6 on the LCD with a delay of 1 second in between displaying consecutive two digits
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("PLEASE SCAN");
  lcd.setCursor(0,1);
  lcd.print("YOUR THUMB");
  delay(3000);                                //Display "PLEASE SCAN YOUR THUMB" on the LCD for 3 seconds

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SCANNING...");
  delay(2000);                                //Display "SCANNING..." on the LCD for 2 seconds

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("SCANNING");
  lcd.setCursor(0,1);
  lcd.print("COMPLETED");
  delay(2000);                               //Display "SCANNING COMPLETED" on the LCD for 2 seconds 
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("VERIFYING NOW...");
  delay(5000);                               //Display "VERIFYING NOW..." on the LCD for 5 seconds

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("VERIFICATION");
  lcd.setCursor(0,1);
  lcd.print("SUCCESSFUL!");
  delay(3000);                              //Display "VERIFICATION SUCCESSFUL!" on the LCD for 3 seconds

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("VERIFICATION");
  lcd.setCursor(0,1);
  lcd.print("FAILED!");
  delay(1500);                            //Display "VERIFICATION FAILED!" on the LCD for 1.5 seconds

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("PlEASE TRY");
  lcd.setCursor(0,1);
  lcd.print("AGAIN!"); 
  delay(3000);                          //Display "PLEASE TRY AGAIN!" on the LCD for 1.5 seconds

  return 0;
}

