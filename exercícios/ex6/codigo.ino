int var1;
int var2;
int var3;
int var4;
int var5;
  
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop()
{
  var1 = digitalRead(2);
  var2 = digitalRead(3);
  var3 = digitalRead(4);
  var4 = digitalRead(5);
  var5 = digitalRead(6);
  
  if(var1){
  Serial.println("ah");
  }
  if(var2){
  Serial.println("aah");
  }
  if(var3){
  Serial.println("aaah");
  }
  if(var4){
  Serial.println("aaaah");
  }
  if(var5){
  Serial.println("aaaaah");
  }
  delay(10);
}
