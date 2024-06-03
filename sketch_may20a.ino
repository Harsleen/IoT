void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(2, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

 int sensorState = digitalRead(2);
 int analogSensorState = analogRead(2);
if (digitalRead(2)== HIGH)
    {
     digitalWrite(13, HIGH);
      Serial.println("Motion detected!");
      Serial.println(analogSensorState);
    }
else
    {
      digitalWrite(13, LOW);
      Serial.println("No Motion Dected!");
    }
  delay(2500);

}
