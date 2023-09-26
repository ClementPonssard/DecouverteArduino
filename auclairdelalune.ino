int noire=500; // durée d'une noire en ms
int pinBuz = 8 ; // broche sur laquelle est connectée le buzzer

// les fréquences des notes de l'octave 3
int do3 = 262 ; // en Hz
int re3 = 294 ;
int red3 = 311 ;
int mi3 = 330 ;

void  setup() {
  tone(pinBuz,do3,noire);delay(noire*1.1);
  tone(pinBuz,do3,noire);delay(noire*1.1);
  tone(pinBuz,do3,noire);delay(noire*1.1);
  tone(pinBuz,re3,noire);delay(noire*1.1);
  tone(pinBuz,mi3,2*noire);delay(2*noire*1.1);
  tone(pinBuz,re3,2*noire);delay(2*noire*1.1);
  tone(pinBuz,do3,noire);delay(noire*1.1);
  tone(pinBuz,mi3,noire);delay(noire*1.1);
  tone(pinBuz,re3,noire);delay(noire*1.1);
  tone(pinBuz,re3,noire);delay(noire*1.1);
  tone(pinBuz,do3,4*noire);delay(4*noire*1.1);
}

void  loop() {
}
