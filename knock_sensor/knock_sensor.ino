int piezoPin = 10; 
int piezoValue;

int piezo Threshold;

void setup() { 
  // put your setup code here, to run once: 
  //Set up Serial communication to communicate with the Serial Monitor at 9600 Baud rate 
  Serial.begin(9600); 
}
   
 void loop() {
  // put your main code here, to run repeatedly:
  // Sample the analog input the piezo is connected to 
  piezoValue = analogRead(AO);
  
  // Send this sampled value to the Serial monitor 
  Serial.println(piezoValue);
  
  // delay so the Serial monitor isn't flooded by incoming values 
  delay(20);

} 

// Look at the incoming data on your serial monitor. 
// Add an Led to your circuit and create blinking knock sensor using piezo Threshold 
//and an if statement (see Button example)
