const int verde = 10; // led verde
const int amarelo = 9; // led amarelo
const int vermelho = 8; // led vermelho
const int buzzer = 11; // Pino do buzzer

// define os leds e o buzzer como output
void setup() {
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  // Sinal vermelho
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  digitalWrite(buzzer, HIGH); 
  delay(6000);

  // Sinal amarelo
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  digitalWrite(buzzer, LOW);
  delay(2000);

  // Sinal verde
  digitalWrite(vermelho, LOW);
  digitalWrite(buzzer, LOW); 
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  delay(4000);

  // Sinal amarelo
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(2000);
}
