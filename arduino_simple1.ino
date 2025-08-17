// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  //esta es una forma de declarar pines para usar despues
  Serial.begin(9600);
  
  for(int i=0;i<7;i++){
      pinMode(i, OUTPUT);
	Serial.println("se inicio el pin: "+i);
    Serial.println(i); //forma de controlar que se iniciaron los pines
  }
}

void loop()
{
  for(int i=2;i<7;i++){
  digitalWrite(i, HIGH);
  delay(50); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(50); // Wait for 1000 millisecond(s)
  }
  
  
  //reverso
  for(int i=7;i>2;i--){
  digitalWrite(i, HIGH);
  delay(50); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(50); // Wait for 1000 millisecond(s)
  }
}