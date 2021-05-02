int sensorState = 0;
int led_red = 13;
int input_pin = 2;

void setup()
{
    pinMode(input_pin, INPUT);
    pinMode(led_red, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    sensorState = digitalRead(input_pin);
    if (sensorState == HIGH)
    {
        digitalWrite(led_red, HIGH);
        Serial.println("Sensor activated");
    }
    else
    {
        digitalWrite(input_pin, LOW);
    }
    delay(10);
}