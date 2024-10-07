#include<LiquidCrystal_I2C.h>
#include <Keypad.h> 
#include<Wire.h>


char keys[4][4] = {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'C', '0', '=', '/'}
};


byte rowPins[4] = {9, 8, 7, 6};
byte colPins[4] = {5 ,4, 3, 2};

Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, 4, 4); 

LiquidCrystal_I2C lcd(0x27, 16, 2);

 int Num1,Num2;
 double Number;
 char key,action;
 boolean result = false;
 void DisplayResult()
{
  lcd.setCursor(0, 0);   
  lcd.print(Num1); lcd.print(action); lcd.print(Num2); 
  lcd.setCursor(0, 1);  
  lcd.print(Number); 
}
void DetectButtons()
{ 
     lcd.clear(); 
    if (key=='C') 
    { Number=Num1=Num2=0; result=false;}
    
     if (key == '1')
    {
    if (Number==0)
    Number=1;
    else
    Number = (Number*10) + 1; 
    }
    
     if (key == '4') 
    {
    if (Number==0)
    Number=4;
    else
    Number = (Number*10) + 4; 
    }
    
     if (key == '7') 
    {
    if (Number==0)
    Number=7;
    else
    Number = (Number*10) + 7; 
    } 
  

    if (key == '0')
    {
    if (Number==0)
    Number=0;
    else
    Number = (Number*10) + 0; 
    }
    
     if (key == '2') 
    {
     if (Number==0)
    Number=2;
    else
    Number = (Number*10) + 2; 
    }
    
     if (key == '5')
    {
     if (Number==0)
    Number=5;
    else
    Number = (Number*10) + 5; 
    }
    
     if (key == '8')
    {
     if (Number==0)
    Number=8;
    else
    Number = (Number*10) + 8; 
    }   
  

    if (key == '=')
    {
    Num2=Number;
    result = true;
    
    }
    
     if (key == '3')
    {
     if (Number==0)
    Number=3;
    else
    Number = (Number*10) + 3; 
    }
    
     if (key == '6')
    {
    if (Number==0)
    Number=6;
    else
    Number = (Number*10) + 6; 
    }
    
     if (key == '9')
    {
    if (Number==0)
    Number=9;
    else
    Number = (Number*10) + 9; 
    }  

      if (key == '+' || key == '-' || key == '*' || key == '/') 
  {
    Num1 = Number;    
    Number =0;
    if (key == '+')
    { action = '+';}
     if (key == '-')
    { action = '-'; }
     if (key == '*')
    { action = '*';}
     if (key == '/')
    { action = '/';}  

    delay(100);
  }
  
}

void CalculateResult()
{
  if (action=='+')
    Number = double(Num1)+double(Num2);

  if (action=='-')
    Number =double (Num1)-double(Num2);

  if (action=='*')
    Number =double( Num1)*double(Num2);

  if (action=='/')
    Number = double(Num1)/double(Num2); 
}

 
void setup() {
  lcd.begin(); 
  lcd.print("Calculator YEHH"); 
  lcd.setCursor(0, 1);   
  lcd.print("BEN ALAA MESA!!!"); 

   delay(2000); 
    lcd.clear(); 
}

void loop() {
  
key = kpd.getKey(); 

if (key!=NO_KEY)
DetectButtons();

if (result==true)
CalculateResult();

DisplayResult();   
}





