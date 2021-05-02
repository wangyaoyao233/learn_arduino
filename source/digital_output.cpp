int animationSpeed = 0;
int led_red = 13;
int led_yellow = 12;
int led_green = 11;

void setup()
{
    animationSpeed = 300;
    pinMode(led_red, OUTPUT);
    pinMode(led_yellow, OUTPUT);
    pinMode(led_green, OUTPUT);
}

void loop()
{
    led_on(led_red);
    led_on(led_yellow);
    led_on(led_green);
}

void led_on(int led)
{
    digitalWrite(led, HIGH);
    delay(animationSpeed);
    digitalWrite(led, LOW);
    delay(animationSpeed);
}