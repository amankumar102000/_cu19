void setup()
{
for(int i=10;i<=13;i++)
pinMode(i,OUTPUT);//It defines that there is  an output  device connected at pin ‘I’of the arduino board.
}
void loop()
{
for(int i=10;i<14;i++)
{
digitalWrite(i,HIGH);//for glowing the bulb at pin i.
int j=i+1;
if(j>13)
{
j=10;
}
digitalWrite(j,HIGH);//for glowing the bulb at pin j.
delay(600);//Wait for 600 millisecond(s)
digitalWrite(i,LOW);// switching off the bulb at pin i.
}
}
