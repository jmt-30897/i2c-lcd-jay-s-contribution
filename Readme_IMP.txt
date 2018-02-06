This I2C LCD has been bought from KITSguru for Rs 236.

It's I2C Slave Address is 0x27.

Connect the "SDA" pin of the LCD to the "A4" pin of the Arduino Uno.

Connect the "SCL" pin of the LCD to the "A5" pin of the Arduino Uno.

Following two libraries are used for this code:

1. Wire.h

This library is a standard library for the ATMEGA 328 P-PU 
microcontroller to bring about I2C communication with 
other devices. 

2. LiquidCrystal_I2C.h

This library is used for interfacing the 16x2 I2C LCD with the 
ATMEGA 328 P-PU microcontroller. This library has inbuilt 
commands which can be directly used to program the
microcontroller so as to display anyhting on the I2C LCD.

Very Very Important:

Before executing the code provided in the "Code" folder:

1. You need to open the "Libraries" folder which is in this "Jay's Contribution" .rar file.
2. Inside the "Libraries" folder, you will see two another folders named "LiquidCrystal_I2C-1.1.2" and "Wire".
3. You need to copy these two folders, as it is, and further you need to paste those two folders in "Documents\Arduino\libraries"
of your PC.

If you don't do it according to these three steps, then the code given in "Code" folder will not compile.