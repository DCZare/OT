int signal_pin = 21; //Pin 21 on the ESP32 (labeled on back)


void setup() {
  // put your setup code here, to run once:
pinMode(signal_pin, OUTPUT); // Set the signal pin as an output

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(signal_pin, HIGH);
delay(5000); //waiting
digitalWite(signal_pin LOW);
delay(5000;) //waiting
}
