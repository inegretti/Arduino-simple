// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  
  for(int i=0;i<7;i++){
      pinMode(i, OUTPUT);
	Serial.println("se inicio el pin: "+i);
    Serial.println(i); 
  }
}

void loop()
{
  for(int i=2;i<7;i++){
  digitalWrite(i, HIGH);
  delay(50); 
  digitalWrite(i, LOW);
  delay(50); 
  }
  
  
  //reverso
  for(int i=7;i>2;i--){
  digitalWrite(i, HIGH);
  delay(50); 
  digitalWrite(i, LOW);
  delay(50); 
  }
}
