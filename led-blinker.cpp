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
  digitalWrite(led2,LOW); //Green off
  delay(delay); // in ms
  digitalWrite(led1,LOW); //Red off
  digitalWrite(led2,HIGH); //Green on
  delay(delay); // in ms
}
