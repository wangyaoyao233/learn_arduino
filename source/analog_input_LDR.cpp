int sensorValue = 0;
int led_red = 9;

void setup()
{
    pinMode(A0, INPUT);
    pinMode(led_red, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    sensorValue = analogRead(A0);
    Serial.println(sensorValue);

    analogWrite(led_red, map(sensorValue, 0, 1023, 0, 255));
    delay(10);
}