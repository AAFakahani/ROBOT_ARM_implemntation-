
#include <Servo.h>
Servo sm1 , sm2 , sm3 , sm4 , sm5 ; 

int pot1=A1;
int pot2=A2;
int pot3=A3;
int pot4=A4;
int pot5=A5;

int valpot1;
int valpot2;
int valpot3;
int valpot4;
int valpot5;

void setup() {
  
  sm1.attach(8);
  sm2.attach(9);
  sm3.attach(10);
  sm4.attach(11);
  sm5.attach(12);

}

void loop() {
  valpot1=analogRead(pot1);
  valpot1=map (valpot1, 0, 1023, 0,180);
  sm1.write(valpot1);
  delay(15);


  valpot2=analogRead(pot2);
  valpot2=map (valpot2,0,1023,0,180);
  sm2.write(valpot2);
  delay(15);


  valpot3=analogRead(pot3);
  valpot3=map (valpot3,0,1023,0,180);
  sm3.write(valpot3);
  delay(15);

  valpot4=analogRead(pot4);
  valpot4=map (valpot4,0,1023,0,180);
  sm4.write(valpot4);
  delay(15);


  
  valpot5=analogRead(pot5);
  valpot5=map (valpot5,0,1023,0,180);
  sm5.write(valpot5);
  delay(15);
  


}
