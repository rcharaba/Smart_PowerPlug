long tempo;
double pulso,pot;
void setup() 
{
  Serial.begin(1200);
  attachInterrupt(0, pul, RISING);
}

void loop() 
{
  tempo = millis();
    if(tempo%20000==0)
    {
      pot = pulso/10.1795;
      Serial.println(pot);
      delay(100);
      pulso=0;  
    }
}
void pul()
{
  pulso ++;
}
