#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLIpLokGji"
#define BLYNK_DEVICE_NAME "D13"
#define BLYNK_AUTH_TOKEN "SUcZJnYuOqKQBEEqHoO7T0pmYQfg8IWl"
char auth[] = "SUcZJnYuOqKQBEEqHoO7T0pmYQfg8IWl";
//위에 항목은 항상 최상단에 순서대로 위치해야 작동함.
/* Fill-in your Template ID (only if using Blynk.Cloud) */
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>



// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "U+NetFE00";
char pass[] = "GF76#8A7A2";

// or Software Serial on Uno, Nano...
#include <SoftwareSerial.h>
SoftwareSerial EspSerial(6,7); // RX, TX

// Your ESP8266 baud rate:
#define ESP8266_BAUD 9600

ESP8266 wifi(&EspSerial);

void setup()
{
  // Debug console
  Serial.begin(9600);

  delay(10);

  // Set ESP8266 baud rate
  EspSerial.begin(ESP8266_BAUD);
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);
}
void loop()
{
  Blynk.run();
}
