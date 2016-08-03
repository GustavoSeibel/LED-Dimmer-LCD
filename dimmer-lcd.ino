#include <LiquidCrystal.h>  
  
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);  
volatile int i=0;//initializing a integer for incrementing and decrementing duty ratio.
  
void setup()   
{
 pinMode(3, OUTPUT);   // sets the pin9 as output
 lcd.begin(16, 2);  
 lcd.setCursor(0,0);  
 lcd.print("LED Dimmer");  
 lcd.setCursor(0,1);  
 lcd.print("Brilho:");  
}  
  
void loop()  
{  
 int botao;  
 botao = analogRead (0);  //Leitura do valor da porta analógica A0
 lcd.setCursor(8,1);  
 analogWrite(3, i);
 if (botao < 100) {
  i = 51;   
  lcd.print ("10%");  
 }  
 else if (botao < 200) { 
  i = 101; 
  lcd.print ("20");  
 }  
 else if (botao < 400){ 
  i = 151; 
  lcd.print ("30");  
 }  
 else if (botao < 600){
  i = 201;  
  lcd.print ("40");  
 }  
 else if (botao < 800){
  i = 255;  
  lcd.print ("50");  
 }  
}
