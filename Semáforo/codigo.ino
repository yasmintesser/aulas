int vermelho = 13;
int amarelo = 12;
int verde = 11;


void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  digitalWrite (vermelho, HIGH);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, LOW);
  delay(5000);
  
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, HIGH);
  digitalWrite (verde, LOW);
  delay(2000);
  
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, HIGH);
  delay(4000);
  
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, HIGH);
  digitalWrite (verde, LOW);
  delay(2000);
  
  digitalWrite (vermelho, HIGH);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, LOW);
  delay(5000);
  }
