#define ledVerde 10
#define ledAmarelo 8
#define ledVermelho 7
#define ldr A0

void setup() {
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
}

void loop() {
  if(float valor = analogRead(ldr) >= 8.80){
    digitalWrite(ledVermelho, HIGH);
    
  }else{
    digitalWrite(ledVermelho, LOW);
    
  }
  if(float valor = analogRead(ldr) >= 8.69 && analogRead(ldr) < 5.4){
    digitalWrite(ledAmarelo, HIGH);
    
  }else{
    digitalWrite(ledAmarelo, LOW);
    
  }
  if(float valor = analogRead(ldr) < 5.5){
    digitalWrite(ledVerde, HIGH);
    
  }else{
    digitalWrite(ledVerde, LOW);
    
  }

  
    
}
