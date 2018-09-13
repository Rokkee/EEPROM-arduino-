#include <EEPROM.h>

   byte valor;

void setup() {

  Serial.begin(9600)
  for (int a=0;a<1024;a++){
    for (int b=0;b<1024;b++){
      valor=EEPROM.read(a);
      Serial.print(a);
      Serial.print("->");
      Serial.print(\t);
      Serial.print(valor);
      Serial.print(\t);
      a++
      if(a==1024)break;
    }
    Serial.println();
    }
   }
void loop() {
      
}
