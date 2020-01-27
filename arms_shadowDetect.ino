int LDRpin = 1;
int LDRvalues = 0;
int LEDpin = 8;

void setup() {
   Serial.begin(9600);
}

void loop() {

   LDRvalues = analogRead(LDRpin);

   

   Serial.println(LDRvalues);

   

   delay(100);
   

   if(LDRvalues < 870) return digitalWrite(LEDpin, HIGH);
   
    
    
   else return digitalWrite(LEDpin, LOW);


   delay(100);
  

}