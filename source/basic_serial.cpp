int sensorValue = 0;
int buttonState = 0;

void setup()
{
    pinMode(2, INPUT);
    pinMode(A0, INPUT);
    Serial.begin(9600);
}

void loop()
{
    buttonState = digitalRead(2);
    sensorValue = analogRead(A0);

    Serial.print(buttonState);
    Serial.print(", ");
    Serial.println(sensorValue);
    delay(10);
}