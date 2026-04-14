#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int ir=4;
int initial=HIGH; //no object initially
void setup() 
{
  pinMode(ir,INPUT);
  lcd.begin(0,0);
  lcd.backlight();
  Serial.begin(9600);
}

int count=0;
bool state;
void loop() 
{
state=digitalRead(ir);
if(state==LOW) //object detected
{
  if(initial==HIGH) //no object previously
  {
    count++;
    initial=LOW;
  }

}
else
  initial=HIGH;
lcd.print(count);
Serial.println(count);
  
}
