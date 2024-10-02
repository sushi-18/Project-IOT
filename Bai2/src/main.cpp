#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led(LED_PIN, LED_ACT);
LED led2(LED2_PIN, LED_ACT);
void btnPush();
void btnHold();
void btnDoubleclick();
OneButton button(BTN_PIN, !BTN_ACT);
int stt = 0;
int a=0;
void setup()
{
    led.off();
    led2.off();
    button.attachClick(btnPush);
    button.attachLongPressStart(btnHold);
    button.attachDoubleClick(btnDoubleclick);
}

void loop()
{
    led.loop();
    led2.loop();
    button.tick();
}

void btnPush()
{
  if(stt==1){
    led.flip();
  }else{
    led2.flip();
  }
}

void btnHold()
{
  if(stt==1){
    led.blink(200);
  }else{
    led2.blink(200);
  }
}
void btnDoubleclick()
{
    a++;
    stt = a % 2 +1;
}