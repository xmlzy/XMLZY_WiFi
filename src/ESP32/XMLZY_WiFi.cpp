#include "XMLZY_WiFi.h>"
#include <WiFi.h>

void XMLZY_WiFI::SetAP(char ssid,char password){
    this->ssid=ssid;
    this->password=password;
    WiFi.softAP(ssid,password);
    Serial.println("ClientConnect:"+WiFi.softAPIP());
}