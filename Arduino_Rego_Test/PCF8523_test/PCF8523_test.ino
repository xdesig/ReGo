/*  *************************
    FILE: ReGo_Test
    X Rosas.
  Test placa ReGo 0.3
  *************************

 Transmite o mesmo por USB e RS485 ( menos o time que só por USB)

 SDA 2
 SCL 3
 interrupción RTC INT4
 Tx 0
 Rx 1
 tranmisión / recepcion A3
*/

/*          PCF8523 Arduino library
    Copyright (C) Alfredo Prado ,2014
    radikalbytes [at] gmail [dot] com


  Permission to use, copy, modify, distribute, and sell this 
  software and its documentation for any purpose is hereby granted
  without fee, provided that the above copyright notice appear in 
  all copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting 
  documentation, and that the name of the author not be used in 
  advertising or publicity pertaining to distribution of the 
  software without specific, written prior permission.

  The author disclaim all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/

#include "Wire.h"

#include <PCF8523.h>
PCF8523 rtc;
int segundos = 0;

int C_1 = 14;
int C_2 = 16;
int C_3 = 10;
int C_4 = 9;
int C_5 = 8;
int C_6 = 6;
int C_7 = 5;
int C_8 = 4;

  

void setup(){
pinMode(2, INPUT);           // set pin to input
digitalWrite(2, HIGH);       // turn on pullup resistors
pinMode(3, INPUT);           // set pin to input
digitalWrite(3, HIGH);       // turn on pullup resistors

  pinMode(C_1, OUTPUT);
  pinMode(C_2, OUTPUT);
  pinMode(C_3, OUTPUT);
  pinMode(C_4, OUTPUT);
  pinMode(C_5, OUTPUT);
  pinMode(C_6, OUTPUT);
  pinMode(C_7, OUTPUT);
  pinMode(C_8, OUTPUT);  


  Wire.begin();
  Serial.begin(115200);
  Serial.println("Initializing RTC...");
#ifdef AVR
  Wire.begin();
#else
  Wire1.begin(); // Shield I2C pins connect to alt I2C bus on Arduino Due
#endif
  rtc.begin();
  rtc.adjust(DateTime(2014, 11, 16, 15, 25, 0));

  if (! rtc.isrunning()) {
    Serial.println("RTC is NOT running!");
    // following line sets the RTC to the date & time this sketch was compiled
   //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // This line sets the RTC with an explicit date & time, for example to set

  
  }
 
 }

void loop(){
    DateTime now = rtc.now();
    
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
    

    // Canles de Saida
  digitalWrite(C_1, HIGH);   
  delay(100);                
  digitalWrite(C_1, LOW); 
  digitalWrite(C_2, HIGH);   
  delay(100);                
  digitalWrite(C_2, LOW); 
  digitalWrite(C_3, HIGH);   
  delay(100);                
  digitalWrite(C_3, LOW); 
  digitalWrite(C_4, HIGH);   
  delay(100);                
  digitalWrite(C_4, LOW); 
  digitalWrite(C_5, HIGH);   
  delay(100);                
  digitalWrite(C_5, LOW); 
  digitalWrite(C_6, HIGH);   
  delay(100);                
  digitalWrite(C_6, LOW); 
  digitalWrite(C_7, HIGH);   
  delay(100);                
  digitalWrite(C_7, LOW); 
  digitalWrite(C_8, HIGH);   
  delay(100);                
  digitalWrite(C_8, LOW); 

}
