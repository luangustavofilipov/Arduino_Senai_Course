void setup() {
  pinMode (13, OUTPUT);// led vermelho/carro
  pinMode (12, OUTPUT);// led amarelo/ carro
  pinMode (11, OUTPUT); // led verde / carro
  pinMode (10, OUTPUT); // led verde / pedestre
  pinMode (9, OUTPUT); // led vermelho / pedestre

}

void loop() {
digitalWrite (13, HIGH);
delay (1000);
digitalWrite (10, HIGH);  
delay (5000);

digitalWrite (13, LOW);
delay(1000);
digitalWrite(12, HIGH);
delay(1000);
digitalWrite(12, LOW);
delay(1000);
digitalWrite(10, LOW);
delay(1000);
digitalWrite(11, HIGH);
delay(1000);
digitalWrite(9, HIGH);
delay(3000);
digitalWrite(11, LOW);
delay(1000);
digitalWrite( 12, HIGH);
delay(1000);
digitalWrite(12, LOW);
delay(1000);
digitalWrite(9, LOW);
delay(1000);


  
}
  
