#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led(LED_PIN, LED_ACT);
LED led2(LED2_PIN, LED_ACT);

void btnPush();
void btnDoubleclick();
OneButton button(BTN_PIN, !BTN_ACT);

void setup()
{
    led.off();
    led2.off();
    button.attachClick(btnPush);
    button.attachDoubleClick(btnDoubleclick);
}

void loop()
{
    led2.loop();
    button.tick();
}

void btnPush()
{
    led2.flip();
}

void btnDoubleclick()
{
    led2.blink(200);
}