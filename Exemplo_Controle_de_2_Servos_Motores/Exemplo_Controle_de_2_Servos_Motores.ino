// Controle de 2 servos

  #include <Servo.h>

  Servo servo1;
  Servo servo2;

  void setup()
{
  servo1.attach(3);
  servo2.attach(4);
}

void loop()
{
  servo1.write(10);
  delay (1000);
  servo1.write(180);
  delay (1000);
  servo2.write(10);
  delay (1000);
  servo2.write(180);
  delay (1000);
  servo1.write(10);
  servo2.write(10);
  delay (1000);
  servo1.write(180);
  servo2.write(180);
  delay (1000);  
}

