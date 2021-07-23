#include<LiquidCrystal.h>
char message[]={"Ashish kumar"};
LiquidCrystal lcd(12, 11, 5, 4,3,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin (16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor (0, 0);
  for(int i=0; i<=30; i++)
  {
    lcd.print(message[i]);
    delay(100);
    if(i>16)
    {
      lcd.autoscroll();
    }
  }

}
