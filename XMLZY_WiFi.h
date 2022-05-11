#include <Arduino.h>
#include <EEPROM.h>

const char *ssid = "";
const char *password = "";

class XMLZY_WiFi{
public:
    Serial.begin(9600);
    SetAP(char ssid,char password);
private:

};