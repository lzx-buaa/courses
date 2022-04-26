#include "pitches.h"

int oldMacdoMelody [] = {
391,391,391,293,329,329,293,493,493,440,440,391,293,391,391,391,293,329,329,293,493,493,440,440,391,293,293,391,391,391,293,293,391,391,391,391,391,391,391,391,391,391,391,391,391,391,391,391,391,391,293,329,329,293,493,493,440,440,391
};

int oldMacdoDurations [] = {
480,480,480,480,480,480,0,480,480,480,480,960,0,480,480,480,480,480,480,0,480,480,480,480,960,240,0,480,480,480,240,0,480,480,960,240,240,480,240,240,480,240,240,240,240,480,480,480,480,480,480,480,480,0,480,480,480,480,960
};
// notes in the melody:
int melody[] = {

  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {

  4, 8, 8, 4, 4, 4, 4, 4
};

int freq_divider = 1;

void midi() {
    for (int thisNote = 0; thisNote < sizeof(melody); thisNote++) 
    {
      int pauseBetweenNotes = noteDurations[thisNote]/freq_divider * 1.30;
      tone(8, melody[thisNote], noteDurations[thisNote]/freq_divider);
      delay(pauseBetweenNotes);
  }
  digitalWrite(8, HIGH); 
}

void setup() {
   pinMode(8, OUTPUT);
   midi();
}

void loop() {
  // no need to repeat the melody.
}
