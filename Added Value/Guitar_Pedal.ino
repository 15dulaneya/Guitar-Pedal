#include "dsp.h"

// create an array for the delay
//byte array[2000]; 

//define variables
//int j;
int fx;
// int mode;
int value;
//int value300;
//int value10000;
//int delayed;

void setup() {
  setupIO();
  
  //set initial values
//  j = 50;
  value = 50;
//  value300 = 300;
//  value10000 = 1000;
//  delayed = 0;

//  Serial.begin(9600);
}

void loop() {
  
    //check status of the effect potentiometer and rotary switch
    readKnobs();
//    Serial.print(fx);

      
    
    // Distortion
    
      value = 1 + ((float) fx / (float) 1000);    
      byte input = analogRead(left);
      input = (input * value); 
      output(left, input);


}

void readKnobs(){
    
  //reads the effects pot to adjust
  //the intensity of the effects above  
  fx = analogRead(3);

}
