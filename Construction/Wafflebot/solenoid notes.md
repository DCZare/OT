# Solenoid Notes

---

### Piston

- Powered seperately
- Triggered with a solenoid
- Forces air in two inlets to open and close
- Air comes from tank
- Tank fills from compressor

### Solenoid

There isn't really an Arduino language as such. It's really just C++ with some domain-specific libraries.

---

The first step is calling the pins we'll be working with for our solenoid

```c++

int signal_pin = 21; //Pin 21 on the ESP32 (labeled on back)
```
Here is the setup code for the paramters of the loop. The pinmode is set to output because it is sending information (signal triggering voltage to pass). Input would be listening for trigegrs like buttons or sensor thresholds being hit

```c++
void setup() {
  // put your setup code here, to run once:

pinMode(signal_pin, OUTPUT); // Set the signal pin as an output

}

```

Here is the looping section of the script such as seeking *(waiting)* for triggers

```c++


void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(signal_pin, HIGH);
delay(5000); //waiting
digitalWite(signal_pin LOW);
delay(5000;) //waiting

}
```

Testing git from ipad