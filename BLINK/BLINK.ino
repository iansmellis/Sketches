/*  SparkFun Inventor's Kit for Photon
    Experiment 1 - Part 1: Hello World Blink an LED
    This sketch was written by SparkFun Electronics
    August 31, 2015
    https://github.com/sparkfun
    Modified by Ian Ellis
    September 29, 2017

    This is a simple example sketch that turns on an LED 
    for one second, off for one second, and repeats forever.

    Development environment specifics:
    Particle Build environment (https://www.particle.io/build)
    Particle Photon RedBoard
    Released under the MIT License(http://opensource.org/licenses/MIT)
*/

int led = D7; // LED is connected to D7

// This function runs once when you press reset or power the board
void setup()
{
	Serial.begin(115200);   // Initialize Serial monitor connection and baud rate
	pinMode(led, OUTPUT);   // Initialize D7 pin as output
}

// the loop function runs over and over again forever
void loop()
{
	digitalWrite(led, HIGH);    // Turn ON the LED (HIGH is the voltage level)
	Serial.println("On");       // Print to Serial Monitor "On"
	delay(1000);                // Wait for 1000mS = 1 second
	digitalWrite(led, LOW);     // Turn OFF the LED
	Serial.println("Off");      // Print to Serial Monitor "Off"
	delay(1000);                // Wait for 1 second
}
