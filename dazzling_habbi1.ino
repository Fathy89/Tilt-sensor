// C++ code
//
int reading; 
void setup()
{
pinMode(4,INPUT); 
  pinMode(3,OUTPUT); 
}

void loop()
{
 reading=digitalRead(4); 
  if(reading==1)
   digitalWrite(3,1); 
  else 
   digitalWrite(3,0); 
    
  
}