int Luz = 0; //Valor da Luminosidade, lido pelo LDR
int led = 2; //Porta digital do LED
int ldr = A0; //Porta analógica do LDR

void setup()
{
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  Luz = analogRead(ldr); //A leitura vai de 0 a 1023 
  if (Luz < 850) 
  {
    digitalWrite(led, HIGH);
  } 
  else 
  {
    digitalWrite(led, LOW);
  }
  Serial.print("Valor da Luminosidade do Ambiente: ");
  Serial.println(Luz);
  delay(10); //Delay para uma melhor performance do projeto
}