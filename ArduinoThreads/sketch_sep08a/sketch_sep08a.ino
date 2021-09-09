#include <Thread.h>

Thread led1 = Thread();
Thread led2 = Thread();
Thread led3 = Thread();

int led_1 = 3;
int led_2 = 4;
int led_3 = 5;



void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);

  led1.onRun(LedBlinkOne);
  led1.setInterval(2000);
  
  led2.onRun(LedBlinkTwo);
  led2.setInterval(1000);

  led3.onRun(LedBlinkThree);
  led3.setInterval(500);
  // put your setup code here, to run once:

}

void loop() {
  if (led1.shouldRun())
    led1.run();
  if (led2.shouldRun())
    led2.run();
  if (led3.shouldRun())
    led3.run();
  // put your main code here, to run repeatedly:

}

void LedBlinkOne(){
  static bool LedStatus = false;
  LedStatus = !LedStatus;
  digitalWrite(led_1,LedStatus);
}

void LedBlinkTwo(){
  static bool LedStatus = false;
  LedStatus = !LedStatus;
  digitalWrite(led_2,LedStatus);
}

void LedBlinkThree(){
  static bool LedStatus = false;
  LedStatus = !LedStatus;
  digitalWrite(led_3,LedStatus);
}
