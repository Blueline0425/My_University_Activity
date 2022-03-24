#define BLYNK_PRINT Serial
#define RELAY 8
#define BLYNK_AUTH_TOKEN "0tzGIx8mRqIZ_FQ2ZvdrP19qFZN3jq9v"
/* Fill-in your Template ID (only if using Blynk.Cloud) */
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"
// Your ESP8266 baud rate:
#define ESP8266_BAUD 9600


#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>
#include <Wire.h>
#include <Adafruit_MLX90614.h>//비접촉 온도 측정 라이브러리
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
// or Software Serial on Uno, Nano...
#include <SoftwareSerial.h>
SoftwareSerial EspSerial(6,7); // RX, TX

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "0tzGIx8mRqIZ_FQ2ZvdrP19qFZN3jq9v";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "U+NetFE00";
char pass[] = "GF76#8A7A2";

ESP8266 wifi(&EspSerial);

BlynkTimer timer; //타이머 관련
boolean statetimer=0; //타이머 관련
boolean prevStatetimer=0; //타이머 관련
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
  mlx.begin();

  timer.setInterval(300L, checktimerstate); //타이머 관련
}

void loop()
{
  if (Blynk.connected())
  {
    Blynk.run();
  }
   timer.run(); //타이머 관련
  
  //온도 계산
  celsius= mlx.readAmbientTempC();
  Blynk.virtualWrite(V1, celsius);
    //온도 계산
    //릴레이 상태 측정
    int relay = digitalRead(RELAY);
}

BLYNK_CONNECTED() //타이머 관련
{
  Blynk.syncAll();
  
}

void checktimerstate() //타이머 관련
{
  
  statetimer=digitalRead(RELAY);
  if (statetimer!=prevStatetimer)
  {
    if (statetimer==0) Blynk.virtualWrite(V0,LOW); Blynk.notify("Timer On");
    if (statetimer==1) Blynk.virtualWrite(V0,HIGH); 
  }
  prevStatetimer=statetimer;
}

///
//블링크 가상함수
BLYNK_READ(V1)//온도
{
  Blynk.virtualWrite(V1, celsius);
}
 
BLYNK_WRITE(V0) {
  int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(RELAY, HIGH);
  } else {
    digitalWrite(RELAY, LOW);
  }
}
BLYNK_WRITE(V2) //타이머 관련
{
  if(param.asInt()) {
    digitalWrite(RELAY, HIGH);
    Blynk.virtualWrite(V0, HIGH);
    Blynk.notify("Timer On");
  } else {
    digitalWrite(RELAY, LOW);
    Blynk.virtualWrite(V0,LOW);
  }
}

BLYNK_WRITE(V3) //타이머 관련
{
  if(param.asInt()){       
    digitalWrite(RELAY, HIGH);
    Blynk.virtualWrite(V0,HIGH);
    Blynk.notify("Timer On");
  } else {
    digitalWrite(RELAY, LOW);
    Blynk.virtualWrite(V13,LOW);
  }
}
//
///
