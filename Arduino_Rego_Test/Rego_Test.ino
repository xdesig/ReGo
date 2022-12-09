//  *************************
//    FILE: ReGo_Test
//    X Rosas.
//  Test placa ReGo 0.3
//  *************************
//
// Transmite o mesmo por USB e RS485
// interrupción RTC INT4
// Tx 0
// Rx 1
// tranmisión / recepcion A3
// SDA 2
// SCL 3


#include <dht.h>

dht DHT;

#define DHT11_PIN 15

int TR = A3;

int IN1 = A2;
int IN2 = A1;

int SW1 = A0;

int C_1 = 14;
int C_2 = 16;
int C_3 = 10;
int C_4 = 9;
int C_5 = 8;
int C_6 = 6;
int C_7 = 5;
int C_8 = 4;




void setup()
{
  pinMode(IN1, INPUT);
  pinMode(IN2, INPUT); 
  pinMode(SW1, INPUT);  

  pinMode(TR, OUTPUT);

  pinMode(C_1, OUTPUT);
  pinMode(C_2, OUTPUT);
  pinMode(C_3, OUTPUT);
  pinMode(C_4, OUTPUT);
  pinMode(C_5, OUTPUT);
  pinMode(C_6, OUTPUT);
  pinMode(C_7, OUTPUT);
  pinMode(C_8, OUTPUT);  



  
  Serial.begin(115200);
  Serial.println("DHT TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT_LIB_VERSION);
  Serial.println();
  Serial1.begin(115200);
}

void loop()
{
  // transmision por USB e RS485
  digitalWrite(TR, HIGH); // Habilitar transmisión RS485
  
  Serial.println("Sensor Estado \t %humi \t temperatura \t USB");
    Serial1.println("Sensor Estado \t %humi \t temperatura \t RS485");
  Serial.print("DHT11, \t");
    Serial1.print("DHT11, \t");
  int chk = DHT.read11(DHT11_PIN);
  switch (chk)
  {
    case DHTLIB_OK:  
		Serial.print("OK,\t"); 
                  Serial1.print("OK,\t"); 
		break;
    case DHTLIB_ERROR_CHECKSUM: 
		Serial.print("Checksum error,\t"); 
                  Serial1.print("Checksum error,\t"); 
		break;
    case DHTLIB_ERROR_TIMEOUT: 
		Serial.print("Time out error,\t"); 
 		 Serial1.print("Time out error,\t"); 
		break;
    default: 
		Serial.print("Unknown error,\t"); 
  		 Serial1.print("Unknown error,\t"); 
		break;

    
  }

  Serial.print(DHT.humidity, 1);
    Serial1.print(DHT.humidity, 1);
  Serial.print(",\t \t");
    Serial1.print(",\t \t");
  Serial.println(DHT.temperature, 1);
    Serial1.println(DHT.temperature, 1);
  Serial.println("");
    Serial1.println("");
  Serial.println("Pulsador \t IN1 \t In2");
    Serial1.println("Pulsador \t IN1 \t In2");
  Serial.print(digitalRead(SW1));
    Serial1.print(digitalRead(SW1));
  Serial.print(",\t \t");
    Serial1.print(",\t \t");
  Serial.print(analogRead(IN1));
    Serial1.print(analogRead(IN1));
  Serial.print(",\t ");
    Serial1.print(",\t ");
  Serial.print(analogRead(IN2));
    Serial1.print(analogRead(IN2));
  Serial.println(",");
    Serial1.println(",");
  Serial.println();
    Serial1.println();


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



//
// END OF FILE
//
