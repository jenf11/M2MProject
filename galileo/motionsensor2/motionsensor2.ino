#define pir 2
void setup() {
  Serial.begin(9600);
  pinMode(pir, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int pirVal = digitalRead(pir);
  Serial.print("Motion : ");
  Serial.print(pirVal);
  Serial.print("\n");
  
  delay(1000);
  // put your main code here, to run repeatedly: 
  
}
