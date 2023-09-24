int duree=500;

int pinBuz = 8 ;

void  setup() {
  tone(pinBuz,262,duree);delay(duree*1.1);
  tone(pinBuz,262,duree);delay(duree*1.1);
  tone(pinBuz,262,duree);delay(duree*1.1);
  tone(pinBuz,294,duree);delay(duree*1.1);
  tone(pinBuz,330,2*duree);delay(2*duree*1.1);
  tone(pinBuz,294,2*duree);delay(2*duree*1.1);
  tone(pinBuz,262,duree);delay(duree*1.1);
  tone(pinBuz,330,duree);delay(duree*1.1);
  tone(pinBuz,294,duree);delay(duree*1.1);
  tone(pinBuz,294,duree);delay(duree*1.1);
  tone(pinBuz,262,4*duree);delay(4*duree*1.1);
}
void  loop() {
}
