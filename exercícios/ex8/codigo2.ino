const int botao1 = 11;
const int botao2 = 12;
const int botao3 = 13;

const int led1 = 1;
const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;
const int led10 = 10;

int var1;
int var2;
int var3;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
}

void loop()
{
  var1 = digitalRead(botao1);
  var2 = digitalRead(botao2);
  var3 = digitalRead(botao3);
  
  if(var1){
  verdes();
  }
  
  if(var2){
  laranjas();
  }
  
  if(var3){
  brancas();
  }
}

void verdes(){
  digitalWrite(led1, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led10, HIGH);
  delay(3500);
  digitalWrite(led1, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led10, LOW);
}
    
void laranjas(){
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led9, HIGH);
  delay(5000);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led9, LOW);
}

void brancas(){
  digitalWrite(led2, HIGH);
  digitalWrite(led5, HIGH);
  delay(2250);
  digitalWrite(led2, LOW);
  digitalWrite(led5, LOW);
}
