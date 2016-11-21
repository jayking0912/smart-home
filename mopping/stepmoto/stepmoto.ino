
void setup()
{
  for(int i=2;i<6;i++)
  {
    pinMode(i,OUTPUT);
  } 
}
void loop()
{
  int a;
  a=512;
  //a=10;
  while(a--)
  {
   for(int i=2;i<6;i++)
   {
    digitalWrite(i,1);
    delay(10);
   digitalWrite(i,0); 
   }
  }
}
