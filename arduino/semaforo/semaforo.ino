int rojo = 10;
int naranja = 11;
int verde = 13;

void setup()
{
  pinMode(naranja, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  digitalWrite(rojo, HIGH);
  digitalWrite(naranja, LOW);
  digitalWrite(verde, LOW);
  delay(1000);

  digitalWrite(rojo, LOW);
  digitalWrite(naranja, HIGH);
  digitalWrite(verde, LOW);
  delay(1500);
  
  digitalWrite(rojo, LOW);
  digitalWrite(naranja, LOW);
  digitalWrite(verde, HIGH);
  delay(1000);


  digitalWrite(rojo, LOW);
  digitalWrite(naranja, HIGH);
  digitalWrite(verde, LOW);
  delay(1000);
}
