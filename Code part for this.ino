int pin1 = 11;
int pin2 = 12;
int pin3 = 13;
void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  delay(1000); 
  
  digitalWrite(12, HIGH);
  delay(500); 
  digitalWrite(12, LOW);
  delay(500);
  
  digitalWrite(11, HIGH);
  delay(1000); 
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(13, HIGH); 
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH); 
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH); 
  digitalWrite(11, LOW);
  delay(3000);
  
  
   
  digitalWrite(11, HIGH);
  delay(1000); 
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(12, HIGH);
  delay(500); 
  digitalWrite(12, LOW);
  delay(500);
  
  digitalWrite(13, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
  delay(1000);
  
  digitalWrite(11, HIGH); 
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH); 
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH); 
  digitalWrite(13, LOW);
  delay(3000);
}