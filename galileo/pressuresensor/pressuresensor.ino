#include <Wire.h>
#include <Adafruit_BMP085.h>  // Adafruit BMP085 library

Adafruit_BMP085 bmp;
int temp = 23;
void setup(){

 // init serial monitor
 Serial.begin(9600);

 // Sensor init
 if (!bmp.begin()) {
  Serial.println("No valid BMP085 sensor found!");
  while (true) {}
 }
}

void loop(){
char tmp[25] = "TempC :";
Serial.print("TempC : ");
Serial.print(bmp.readTemperature());
Serial.print("\n"); 

 Serial.print("Pressure : ");
 Serial.print(bmp.readPressure());
 Serial.print("\n");

 Serial.print("Height : ");
 Serial.print(bmp.readAltitude());
 Serial.print("\n");

 
 delay(5000);      // wait 5 seconds
}
