#define led13 13
int led = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, 1); pinMode(12, 1); pinMode(11, 1); 
  //pinMode (pin value, mod)
  //OUTPUT=1, INPUT=0, INPUT_PULLUP=2
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, 250);  // turn the LED on (HIGH is the voltage level)
  //digitalWrite(pin value, relative value) HIGH=1=5V, LOW=0=0V
  delay(1000);  
   digitalWrite(13, 0);  // turn the LED on (HIGH is the voltage level)
  //digitalWrite(pin value, relative value) HIGH=1=5V, LOW=0=0V
  delay(1000);                       // wait for a second
  digitalWrite(12, 100);   // turn the LED off by making the voltage LOW
  delay(1000);  
  digitalWrite(12, 0);   // turn the LED off by making the voltage LOW
  delay(1000);  
  digitalWrite(11, 150);   // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(11, 0);   // turn the LED off by making the voltage LOW
  delay(1000); 
}
