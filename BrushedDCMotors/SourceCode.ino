
#define button1 12
#define button2 13

#define pot 0
#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11
 
boolean motor1_dir = 0;
boolean motor2_dir = 0;
int motor_speed;
 
void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}
 
void loop() {
  motor_speed = analogRead(pot) / 4;
  
 if(motor1_dir)
    analogWrite(IN1, motor_speed);
  else
    analogWrite(IN2, motor_speed);
    
  if(!digitalRead(button1)){                
    while(!digitalRead(button1));        
    motor1_dir = !motor1_dir;                
    
  if(motor1_dir)
      digitalWrite(IN2, 0);
    else
      digitalWrite(IN1, 0);
  }
  
  if(motor2_dir)
    analogWrite(IN3, motor_speed);
  else
    analogWrite(IN4, motor_speed);
    
  if(!digitalRead(button2)){                
    while(!digitalRead(button2));        
    motor2_dir = !motor2_dir;                
    
  if(motor2_dir)
      digitalWrite(IN4, 0);
    else
      digitalWrite(IN3, 0);
  }
}
    
