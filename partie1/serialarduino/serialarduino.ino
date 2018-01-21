//Voila le petit programme ou va envoie des information sur le serial
void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.write(666); //On envoie au serial un byte de 666

   int bytesSent = Serial.write("Bonjour python"); 
}
