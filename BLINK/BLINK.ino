// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(115200);
	// initialize digital pin 13 as an output.
	pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
	digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
	Serial.println("On");
	delay(1000);              // wait for a second
	digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
	Serial.println("Off");
	delay(1000);              // wait for a second
}