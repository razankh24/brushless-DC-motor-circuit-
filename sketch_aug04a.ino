int VR = 9;
int zf = 7;

void setup() {
  pinMode(VR , OUTPUT);
  pinMode(zf , OUTPUT);
 digitalWrite(zf , 0);  //which: 0 = anti-clockwise, 1 = clockwise
}

 void loop () {
  anslogWrite(VR,50); //where 70 is the motor speed
  delay(4);
 }
