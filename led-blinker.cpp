// ashton goh

#define delay 600
#define led1 8
#define led2 7

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop()
{

  digitalWrite(led1,HIGH); 
  digitalWrite(led2,LOW); 
  delay(delay); // in ms
  digitalWrite(led1,LOW); 
  digitalWrite(led2,HIGH); 
  delay(delay); // in ms
}




// made by ashton in advance for his arduino project
