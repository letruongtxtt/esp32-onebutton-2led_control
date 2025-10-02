#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led1(LED_PIN, LED_ACT);
LED led2(LED2_PIN, LED2_ACT);
void btnPush();
void btnHold();
void btnDoubleclick();
OneButton button(BTN_EXTERNAL, !BTN_ACT);

void setup()
{
    led1.off();
    led2.off();
    Serial.begin(115200);
    button.attachClick(btnPush);
    button.attachLongPressStart(btnHold);
    button.attachDoubleClick(btnDoubleclick);
    Serial.println("=============================");
    Serial.println("Double click to switch LED control");
    Serial.println("Currently controlling LED1 (Built-in LED)");
}
bool choose = false;
void loop()
{
    led1.loop();
    led2.loop();
    button.tick();
}

void btnPush()
{
    if (choose==false) 
    {
        led1.flip();
        led2.on();
    }
    else
    {
        led2.flip();
        led1.off();
    }
}

void btnHold()
{
    if (choose==false)
    {
        led1.blink(200);
        led2.on();
    }
    else
    {
        led2.blink(200);
        led1.off();
    }
}
void btnDoubleclick()
{
    choose = !choose;
    if (choose==false)
        {
        led1.on();
        Serial.println("LED1 (Built-in LED) choosed, controling LED1");
        led2.on();
        }
    else
        {
        led2.off();
        Serial.println("LED2 (External LED) choosed, controling LED2");
        led1.off();
        }
}