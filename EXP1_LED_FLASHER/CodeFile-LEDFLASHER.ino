void setup()
{
pinMode(13, OUTPUT);//It defines that there is an output  device connected at pin number 13 of the arduino board.
}

void loop()
{
digitalWrite(13, HIGH);//for glowing the bulb at pin 13.
delay(1000); //Wait for 1000 millisecond(s)
digitalWrite(13, LOW);// switching off the bulb at pin 13.
delay(1000); // Wait for 1000 millisecond(s)
}
