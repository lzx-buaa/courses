#include "pitches.h"
int MacDomelody[]= {391,391,391,293,329,329,293,493,493,440,440,391,293,391,391,391,293,329,329,293,493,493,440,440,391,293,293,391,391,391,293,293,391,391,391,391,391,391,391,391,391,391,391,391,391,391,391,391,391,391,293,329,329,293,493,493,440,440,391};
int MacDonoteDurations[] = {1,1,1,1,1,1,0,1,1,1,1,2,0,1,1,1,1,1,1,0,1,1,1,1,2,0,0,1,1,1,0,0,1,1,2,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,2};

int melody[]= {NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
int noteDurations[] = { 2, 3, 3, 2, 2, 2, 2, 2 };
int bpm = 240;

void playNote( int speaker, int theTone, int duration, int bpm )
{
   // mnemotécnico: 120 bpm - - > 1000
   // 1000 milliseconds for half note
   // source http://bradthemad.org/
   // guitar/tempo_calculator.php
 long time = ( 1000 / bpm * 120 ) / pow( 2, duration );
 tone( speaker, theTone, time ); // assign the note to the speaker
 delay( time*1.30 ); // add 30% for the silence between notes
}

void setup() {
 for( int thisNote = 0; thisNote < sizeof(MacDomelody); thisNote++ ) {
 playNote( 8, MacDomelody[thisNote], MacDonoteDurations[thisNote], bpm );
 }
 }
void loop() {
 // let’s listen to it just once
}
