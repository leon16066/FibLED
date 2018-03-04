/*
Name:		Sketch2.ino
Created:	2/26/2018 10:17:30 PM
Author:	leon1
*/

// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(13, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	digitalWrite(13, HIGH);
	delay(500);
	digitalWrite(13, LOW);
	delay(500);
	digitalWrite(13, HIGH);
	delay(1000);
	digitalWrite(13, LOW);
	delay(1000);
	digitalWrite(13, HIGH);
	delay(200);
	digitalWrite(13, LOW);
	delay(200);
	digitalWrite(13, HIGH);
	delay(500);
	digitalWrite(13, LOW);
	delay(500);
	digitalWrite(13, HIGH);
	delay(1000);
	digitalWrite(13, LOW);
	delay(1000);
	digitalWrite(13, HIGH);
	delay(50);
	digitalWrite(13, LOW);
	delay(50);
	digitalWrite(13, HIGH);
	delay(50);
	digitalWrite(13, LOW);
	delay(50);
}
