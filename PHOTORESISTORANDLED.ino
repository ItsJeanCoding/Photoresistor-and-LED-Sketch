//Code by ItsJeanCoding on GitHub
//The brightest light that the Photoresistor detects, the dimmest light that the LED will produce

#define photoresistor_pin A0
#define led_pin 3


void setup() {
 pinMode(photoresistor_pin, INPUT); // HAS VALUES FROM 0...1023
 pinMode(led_pin, OUTPUT); // HAS VALUES FROM 0...255
 Serial.begin(9600);

}

void loop() {
  int sensorVal = analogRead(photoresistor_pin);
  delay(10);

  int mappedValue = map(sensorVal, 0, 1023, 0, 255); // SO THE VALUES WILL RELY ON A SINGULAR VALUE WHICH IS 0(BRIGHTEST) TO 255 (DARKEST)
  analogWrite(led_pin, mappedValue);
  Serial.println(mappedValue);
}
