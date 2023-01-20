#define MOISTURE_PIN	A0

int moisture_val = 0;

void setup() {
	Serial.begin(9600);
	pinMode(MOISTURE_PIN, INPUT);
	delay(1000);
	Serial.println("WATER SETUP COMPLETE");
}

void loop() {
	moisture_val = analogRead(MOISTURE_PIN);
	Serial.println("Soil Moisture Level: " + (String)moisture_val);
	// TODO: Figure out periodic time to check	
	delay(10000);	
}
