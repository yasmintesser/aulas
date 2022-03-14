int var1;
  
void setup()
{
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(3);
  if(var1){
  digitalWrite(4,LOW);
  }else{
  digitalWrite(4,HIGH);
  }
  
}
