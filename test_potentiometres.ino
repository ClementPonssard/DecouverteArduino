// adressage des potentiomètres (PIN) //
int SLIDER1_PIN = 0;
int SLIDER2_PIN = 1;
int SLIDER3_PIN = 2;

int potentiom1 = 0; //définition de la variable entière (integer) potentiom1//
int potentiom2 = 0; //définition de la variable entière (integer) potentiom2//
int potentiom3 = 0; //définition de la variable entière (integer) potentiom3//

void setup()
{
  Serial.begin(9600);   // mise en route de la liaison série //
}

void loop()
{ 
  potentiom1 = analogRead(SLIDER1_PIN); // lecture potentiomètre 1 //
  potentiom2 = analogRead(SLIDER2_PIN); // lecture potentiomètre 2 //
  potentiom3 = analogRead(SLIDER3_PIN); // lecture potentiomètre 3 //
  Serial.print("potentiometres: "); // affichage liaison série //
    Serial.print(" ");
    Serial.print(potentiom1);
    Serial.print("  ");
    Serial.print(potentiom2);
    Serial.print("  ");
    Serial.println(potentiom3);    // println rajoute un retour à la ligne //
    delay(300); // brève attente//
}
