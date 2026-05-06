// <WM1 Board Testing Code>
// This code can be used to test the basic functionality of the WM1 board, including motor outputs,
// servo outputs and the relays.



// <WM1 PIN DEFINITIONS>
#define M1_PWM 6
#define M1_DIR 7

#define M2_PWM 3
#define M2_DIR 8

#define M3_PWM 5
#define M3_DIR 12

#define M4_PWM 11
#define M4_DIR 13

#define RELAY1 2
#define RELAY2 4

#define SERVO1 9
#define SERVO2 10

#include <Servo.h>
Servo myServo1;
Servo myServo2;

// <GLOBAL DECLARATIONS>
int duty = 200;    // variable to store duty cycle which controls the motor's effective voltage (range 0-255)
int pos = 0;        // variable for position of servo

void setup() {

  /* <CONFIGURE ALL WM1 PINS AS OUTPUTS> */ 
  pinMode(M1_PWM, OUTPUT);
  pinMode(M1_DIR, OUTPUT);
  pinMode(M2_PWM, OUTPUT);
  pinMode(M2_DIR, OUTPUT);
  pinMode(M3_PWM, OUTPUT);
  pinMode(M3_DIR, OUTPUT);
  pinMode(M4_PWM, OUTPUT);
  pinMode(M4_DIR, OUTPUT);
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(SERVO1, OUTPUT);
  pinMode(SERVO2, OUTPUT);

  myServo1.attach(9);
  myServo2.attach(10);

}

void loop() {
  
  // <SET M1 DIRECTION TO FORWARDS>
  digitalWrite(M1_DIR, HIGH); 

  // <RAMP SPEED UP AND THEN DOWN>
  for (duty = 0; duty <= 255; duty += 1) {  
    analogWrite(M1_PWM, duty);              
    delay(4);                                               
  }
  for (duty = 255; duty >= 0; duty -= 1) {  
    analogWrite(M1_PWM, duty);              
    delay(4);                                              
  }


  // <SET M1 DIRECTION TO BACKWARDS>
  digitalWrite(M1_DIR, LOW); 

  // <RAMP SPEED UP AND THEN DOWN>
  for (duty = 0; duty <= 255; duty += 1) {  
    analogWrite(M1_PWM, duty);              
    delay(4);                                               
  }
  for (duty = 255; duty >= 0; duty -= 1) {  
    analogWrite(M1_PWM, duty);              
    delay(4);                                               
  }



  // <SET M2 DIRECTION TO FORWARDS>
  digitalWrite(M2_DIR, HIGH); 

  // <RAMP SPEED UP AND THEN DOWN>
  for (duty = 0; duty <= 255; duty += 1) {  
    analogWrite(M2_PWM, duty);              
    delay(4);                                               
  }
  for (duty = 255; duty >= 0; duty -= 1) {  
    analogWrite(M2_PWM, duty);              
    delay(4);                                              
  }


  // <SET M2 DIRECTION TO BACKWARDS>
  digitalWrite(M2_DIR, LOW); 

  // <RAMP SPEED UP AND THEN DOWN>
  for (duty = 0; duty <= 255; duty += 1) {  
    analogWrite(M2_PWM, duty);              
    delay(4);                                               
  }
  for (duty = 255; duty >= 0; duty -= 1) {  
    analogWrite(M2_PWM, duty);              
    delay(4);                                               
  }


  // <SET M3 DIRECTION TO FORWARDS>
  digitalWrite(M3_DIR, HIGH); 

  // <RAMP SPEED UP AND THEN DOWN>
  for (duty = 0; duty <= 255; duty += 1) {  
    analogWrite(M3_PWM, duty);              
    delay(4);                                               
  }
  for (duty = 255; duty >= 0; duty -= 1) {  
    analogWrite(M3_PWM, duty);              
    delay(4);                                              
  }


  // <SET M3 DIRECTION TO BACKWARDS>
  digitalWrite(M3_DIR, LOW); 

  // <RAMP SPEED UP AND THEN DOWN>
  for (duty = 0; duty <= 255; duty += 1) {  
    analogWrite(M3_PWM, duty);              
    delay(4);                                               
  }
  for (duty = 255; duty >= 0; duty -= 1) {  
    analogWrite(M3_PWM, duty);              
    delay(4);                                               
  }


  // <SET M4 DIRECTION TO FORWARDS>
  digitalWrite(M4_DIR, HIGH); 

  // <RAMP SPEED UP AND THEN DOWN>
  for (duty = 0; duty <= 255; duty += 1) {  
    analogWrite(M4_PWM, duty);              
    delay(4);                                               
  }
  for (duty = 255; duty >= 0; duty -= 1) {  
    analogWrite(M4_PWM, duty);              
    delay(4);                                              
  }


  // <SET M4 DIRECTION TO BACKWARDS>
  digitalWrite(M4_DIR, LOW); 

  // <RAMP SPEED UP AND THEN DOWN>
  for (duty = 0; duty <= 255; duty += 1) {  
    analogWrite(M4_PWM, duty);              
    delay(4);                                               
  }
  for (duty = 255; duty >= 0; duty -= 1) {  
    analogWrite(M4_PWM, duty);              
    delay(4);                                               
  }

  // <TURN RELAY 1 ON THEN OFF>
  digitalWrite(RELAY1, HIGH);
  delay(2000);
  digitalWrite(RELAY1, LOW);

  delay(1000);

  // <TURN RELAY 2 ON THEN OFF>
  digitalWrite(RELAY2, HIGH);
  delay(2000);
  digitalWrite(RELAY2, LOW);

  delay(1000);


  // <SPIN SERVO 1 TO 180 DEGREES AND BACK TO 0
  for (pos = 0; pos <= 180; pos += 1) { 
    // in steps of 1 degree
    myServo1.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myServo1.write(pos);              
    delay(15);                       
  }

  delay(2000);

  // <SPIN SERVO 1 TO 180 DEGREES AND BACK TO 0
  for (pos = 0; pos <= 180; pos += 1) { 
    // in steps of 1 degree
    myServo2.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myServo2.write(pos);              
    delay(15);                       
  }

}
