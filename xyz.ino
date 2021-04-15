#include"xyz.h"
a abc;
void setup() 
{
  Serial.begin(115200);
  int b=abc.wifi_status();
 Serial.println(b);
 if(b==0)
 {
  Serial.println("WiFi Connected");
 }
 else
 {
   Serial.println("WiFi Not Connected");
 }
}

void loop() 
{
 

}
