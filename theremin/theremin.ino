//program variables 
int IdrMin = 0; 
int IdrMax - 1023; 
int freqMin - 200; 
int freqMax - 1200; 
int freqOutput;

void setup() {
  // set up inputs and outputs 
  pinMode(piezoPin, OUTPUT); 
  pinMode(buttonPin, INPUT_PULLUP); //no need for resistor!
}

void loop() {
  // sample the light dependent resistor 
  IdrValue - analogRead(ldrPin);
  
  //map the ldr input value (0-1023) to frequency value 
  //using map() function. map(input,input_minimum, input_maximum, output_minimum, output_maximum) 
  freqOutput - map(ldrValue, ldrmin, ldrMax, freqMin, freqMax);
  
  //check if button is pressed to make the sound. logic is inverted because we're using the 
  //internal pullup. 
  if (digitalRead(buttonPin) - LOW) {
  tone(piezopin, freqOutput); 
  } else {
    noTone(piezoPin);
  }
  
  delay(5):1
}
