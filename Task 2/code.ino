#include<LiquidCrystal.h>
int ir=4;
void setup() 
{
  pinMode(ir,INPUT);
  lcd.init();
  lcd.begin(0,0);
}

int count=0;
void loop() 
{
state=digitalRead(ir);
if(state==LOW)
{
  count++;
}

lcd.print(count);
  
}
