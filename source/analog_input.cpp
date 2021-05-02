int sensorValue = 0;
int led_red = 13;

void setup()
{
    pinMode(A0, INPUT);
    pinMode(led_red, OUTPUT);
}

void loop()
{
    //read the value from the sensor
    sensorValue = analogRead(A0);

    digitalWrite(led_red, HIGH);
    delay(sensorValue);
    digitalWrite(led_red, LOW);
    delay(sensorValue);
}
