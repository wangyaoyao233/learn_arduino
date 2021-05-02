int buttonState = 0;
int inputPin = 2;
int led_red = 13;

void setup()
{
    pinMode(inputPin, INPUT);
    pinMode(led_red, OUTPUT);
}

void loop()
{
    // read the state of the pushbutton
    buttonState = digitalRead(inputPin);
    if (buttonState == LOW) //开关闭合, Vout电压下拉到地
    {
        digitalWrite(led_red, HIGH);
    }
    else
    {
        digitalWrite(led_red, LOW);
    }
    delay(10); // delay a little bit to improve simulation performance
}