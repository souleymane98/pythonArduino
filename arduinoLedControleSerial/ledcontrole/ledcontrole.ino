//OK on va écrit un programmme qui nous permet de controller notre led arduino grace au serial
void setup() {
 pinMode(13, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 if (Serial.available() > 0) {
   char action = Serial.read(); //On ouvre  l'entré des donné de notre serial
   if (action == 'A' || action == 'a') { // la on cré nos regles si  l'entré du clavier et A ou a
     digitalWrite(13, HIGH); //On allume lampe au pin 13
   }
   if (action == 'B' || action == 'b') {// la on cré nos regles si  l'entré du clavier et B ou b
     digitalWrite(13, LOW); // On étient la lamp
   }
 }
 delay(50);
}
