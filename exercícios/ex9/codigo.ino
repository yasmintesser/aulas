const int pot = 0;

int var = 0;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  var = analogRead(pot);
  Serial.println(var);
  
  if(var > 102){
  digitalWrite(2,HIGH);
  }else{
  digitalWrite(2,LOW);
  }
  
  if(var > 204){
  digitalWrite(3,HIGH);
  }else{
  digitalWrite(3,LOW);
  }
  
  if(var > 306){
  digitalWrite(4,HIGH);
  }else{
  digitalWrite(4,LOW);
  }
  
  if(var > 408){
  digitalWrite(5,HIGH);
  }else{
  digitalWrite(5,LOW);
  }
  
  if(var > 510){
  digitalWrite(6,HIGH);
  }else{
  digitalWrite(6, LOW);
  }
  
  if(var > 612){
  digitalWrite(7,HIGH);
  }else{
  digitalWrite(7, LOW);
  }
  
  if(var > 714){
  digitalWrite(8,HIGH);
  }else{
  digitalWrite(8, LOW);
  }
  
  if(var > 816){
  digitalWrite(9,HIGH);
  }else{
  digitalWrite(9, LOW);
  }
  
  if(var > 918){
  digitalWrite(10,HIGH);
  }else{
  digitalWrite(10, LOW);
  }
  
  if(var > 1020){
  digitalWrite(11,HIGH);
  }else{
  digitalWrite(11, LOW);
  }
  
  delay(200);
}
