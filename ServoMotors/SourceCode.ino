 #include <Servo.h>
Servo myServo1;
Servo myServo2;

int const pot1Pin = A0;
int const pot2Pin = A1;
int pot1Val;
int angle1;
int pot2Val;
int angle2;

void setup() {
myServo1.attach(3);
Serial.begin(9600);
myServo2.attach(4);
Serial.begin(9600);
}

void loop() {
pot1Val = analogRead(pot1Pin);
Serial.print("pot1Val: ");
Serial.print(pot1Val);
angle1 = map(pot1Val, 0, 1023, 0, 179);
Serial.print(", angle1: ");
Serial.println(angle1);
myServo1.write(angle1);
delay(15);  

                                                                                                                                                    
pot2Val = analogRead(pot2Pin);
Serial.print("pot2Val: ");
Serial.print(pot2Val);
angle2 = map(pot2Val, 0, 1023, 0, 179);
Serial.print(", angle2: ");
Serial.println(angle2);
myServo2.write(angle2);
delay(15); 
}
