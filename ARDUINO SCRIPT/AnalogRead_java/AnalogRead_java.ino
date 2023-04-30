/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

void setup() {
  Serial.begin(9600); //config serial port (9600 bits/seconds)
}

// enter a loop where it read from a0
void loop() {
  int sensorValue = analogRead(A0);
  //output it to serial port;
  //then loops infinite
  Serial.println(sensorValue);
  delay(250); //update date at 1 s
}
