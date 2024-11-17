#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_B 493

#define ACTIVATED LOW

const int PIEZO = 13;

const int BUTTON_C = 12;
const int BUTTON_C_SHARP = 11;
const int BUTTON_D = 10;
const int BUTTON_D_SHARP = 9;
const int BUTTON_E = 8;
const int BUTTON_F = 7;
const int BUTTON_G = 5;
const int BUTTON_G_SHARP = 4;
const int BUTTON_A = 3;
const int BUTTON_A_SHARP = 2;
const int BUTTON_B = 1;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON_C, INPUT);
  digitalwrite(BUTTON_C, HIGH);
  pinMode(BUTTON_D, INPUT);
  digitalwrite(BUTTON_D, HIGH);
  pinMode(BUTTON_E, INPUT);
  digitalwrite(BUTTON_E, HIGH);
  pinMode(BUTTON_F, INPUT);
  digitalwrite(BUTTON_F, HIGH);
  pinMode(BUTTON_G, INPUT);
  digitalwrite(BUTTON_G, HIGH);
  pinMode(BUTTON_A, INPUT);
  digitalwrite(BUTTON_A, HIGH);
  pinMode(BUTTON_B, INPUT);
  digitalwrite(BUTTON_B, HIGH);

  digitalWrite(LED, LOW);
}

void loop() {
  while(digitalRead(BUTTON_C) == ACtIVATED)
  {
    tone(PIEZO,NOTE_C);
    digitalWrite(LED,HIGH);
  }

}
