#define BLYNK_PRINT Serial
#define RELAY 8
#define BLYNK_TEMPLATE_ID "TMPL0WIpXVf3"
#define BLYNK_DEVICE_NAME "l2"
#define BLYNK_AUTH_TOKEN "bKhFLfIR5l3-yoMfAb3Fwkah8cWZfCwP"
/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

#include <Wire.h>
#include <Adafruit_MLX90614.h>//비접촉 온도 측정 라이브러리
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "bKhFLfIR5l3-yoMfAb3Fwkah8cWZfCwP";

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
int relay;
double celsius=0;
void setup()
{
  pinMode(RELAY, OUTPUT);
  // Debug console
  Serial.begin(9600);

  delay(10);

  // Set ESP8266 baud rate
  EspSerial.begin(ESP8266_BAUD);
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);
  //온도 측정 관련
  mlx.begin();  //mlx모듈을 읽어들이기 시작합니다.
  
}
//
//블링크 가상함수
//
//
void loop()
{
  Blynk.run();
  relay=digitalRead(RELAY);
  celsius= mlx.readAmbientTempC();
  Blynk.virtualWrite(V0,celsius);
  
  
}
