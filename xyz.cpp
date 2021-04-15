#include "xyz.h"

void a::pin()
{
  pinMode(2,OUTPUT);
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(2,HIGH);
  delay(1000);
}

int a::wifi_con()
{
  WiFi.begin(ssid,pass);delay(500);
  Serial.println("WiFi Connecting");
  
}
int a::wifi_status()
{
  wifi_con();
  while(WiFi.status()!=WL_CONNECTED)
  {
    //wifi_con();  
    pin();    
  }
  if(WiFi.status()==WL_CONNECTED)
  return 0;
  else
  return 1;
}
