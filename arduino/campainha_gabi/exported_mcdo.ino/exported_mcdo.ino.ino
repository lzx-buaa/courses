
// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 8;
void setup() {
    midi();
}

void midi() {

    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 293, 450.0);
    delay(500.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    delay(1000.0);
    tone(tonePin, 493, 450.0);
    delay(500.0);
    tone(tonePin, 493, 450.0);
    delay(500.0);
    tone(tonePin, 440, 450.0);
    delay(500.0);
    tone(tonePin, 440, 450.0);
    delay(500.0);
    tone(tonePin, 391, 900.0);
    delay(1000.0);
    delay(500.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 293, 450.0);
    delay(500.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    delay(1000.0);
    tone(tonePin, 493, 450.0);
    delay(500.0);
    tone(tonePin, 493, 450.0);
    delay(500.0);
    tone(tonePin, 440, 450.0);
    delay(500.0);
    tone(tonePin, 440, 450.0);
    delay(500.0);
    tone(tonePin, 391, 900.0);
    delay(1000.0);
    delay(500.0);
    tone(tonePin, 293, 225.0);
    delay(250.0);
    delay(250.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 293, 225.0);
    delay(250.0);
    delay(250.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 900.0);
    delay(1000.0);
    tone(tonePin, 391, 225.0);
    delay(250.0);
    tone(tonePin, 391, 225.0);
    delay(250.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 225.0);
    delay(250.0);
    tone(tonePin, 391, 225.0);
    delay(250.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 225.0);
    delay(250.0);
    tone(tonePin, 391, 225.0);
    delay(250.0);
    tone(tonePin, 391, 225.0);
    delay(250.0);
    tone(tonePin, 391, 225.0);
    delay(250.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 391, 450.0);
    delay(500.0);
    tone(tonePin, 293, 450.0);
    delay(500.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    tone(tonePin, 329, 450.0);
    delay(500.0);
    delay(1000.0);
    tone(tonePin, 493, 450.0);
    delay(500.0);
    tone(tonePin, 493, 450.0);
    delay(500.0);
    tone(tonePin, 440, 450.0);
    delay(500.0);
    tone(tonePin, 440, 450.0);
    delay(500.0);
    tone(tonePin, 391, 900.0);
    delay(1000.0);

}

void loop() {
    // Play midi
}
