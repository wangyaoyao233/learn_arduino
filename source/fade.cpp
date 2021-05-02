// C++ code
//
/*
  Fade
  This example shows how to fade an LED on pin 9
  using the analogWrite() function.

  The analogWrite() function uses PWM, so if  you
  want to change the pin you're using, be  sure to
  use another PWM capable pin. On most  Arduino,
  the PWM pins are identified with   a "~" sign,
  like ~3, ~5, ~6, ~9, ~10 and ~11.
*/

int led_red = 9; //led pin
int brightness = 0;
int step = 10;

void setup()
{
    pinMode(led_red, OUTPUT);
}

void loop()
{
    fade(led_red);
}

void fade(int led)
{
    for (brightness = 0; brightness <= 255; brightness += step)
    {
        analogWrite(led, brightness);
        delay(30);
    }
    for (brightness = 255; brightness >= 0; brightness -= step)
    {
        analogWrite(led, brightness);
        delay(30);
    }
}