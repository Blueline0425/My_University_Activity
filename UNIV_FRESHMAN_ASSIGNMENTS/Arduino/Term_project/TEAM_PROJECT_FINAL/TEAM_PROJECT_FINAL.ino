#define BLYNK_PRINT Serial //Defines the object that is used for printing
#define RELAY 8 //8번핀을 RELAY로 정의
#define BLYNK_AUTH_TOKEN "0tzGIx8mRqIZ_FQ2ZvdrP19qFZN3jq9v" //Blynk 인증 토큰
#define ESP8266_BAUD 9600 //ESP8266_BAUD 속도 정의


#include <ESP8266_Lib.h>
//WiFi 모듈 라이브러리_WiFi 통신을 위해 사용
#include <BlynkSimpleShieldEsp8266.h>
//Blynk 라이브러리_Blynk 앱을 이용하기 위해 사용
#include <Wire.h>
//Wire 라이브러리_ I2C 통신을 쉽게 사용할 수 있도록 하기 위해 사용
#include <Adafruit_MLX90614.h>
//비접촉 온도 측정 센서 라이브러리
Adafruit_MLX90614 mlx = Adafruit_MLX90614(); //mlx90614 라이브러리 생성 
#include <SoftwareSerial.h>
//SoftwareSerial 라이브러리_일반 입출력 데이터 핀을 RX, TX핀으로 동작하게 만들기 위해 사용
SoftwareSerial EspSerial(6,7); // RX, TX (6, 7)

char auth[] = BLYNK_AUTH_TOKEN; //Blynk App 인증 토큰. 앱에서 이메일로 쉽게 전송 가능.
char ssid[] = "U+NetFE00"; //와이파이 네트워크 아이디
char pass[] = "GF76#8A7A2"; //와이파이 네트워크 비밀번호

ESP8266 wifi(&EspSerial);

BlynkTimer timer; //Blynk 타이머 함수
boolean statetimer=0;   
boolean prevStatetimer=0; 
int relay; //8번 핀 상태 저장 변수 선언
double celsius=0; //온도 저장 변수 선언
void setup()
{
  pinMode(RELAY, OUTPUT);
  Serial.begin(9600);

  delay(10);

  
  EspSerial.begin(ESP8266_BAUD); // Set ESP8266 baud 속도 설정
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);//아두이노가 Blynk Cloud에 연결
  
  mlx.begin(); //온도 센서 시작

  timer.setInterval(300L, checktimerstate); //타이머 관련
}

void loop()
{
  if (Blynk.connected())
  {
    Blynk.run(); //Blynk 시작
  }
   timer.run(); //타이머 시작
  
  celsius= mlx.readAmbientTempC(); //온도 계산
  Blynk.virtualWrite(V1, celsius);
  //읽은 값을 Virtual Pin V1을 통해 Blynk 앱에 기록
  
  int relay = digitalRead(RELAY); //릴레이 상태 측정
}

BLYNK_CONNECTED() //Blynk 앱과 동기화
{
  Blynk.syncAll();
  
}

void checktimerstate() //타이머 관련 함수
{
  
  statetimer=digitalRead(RELAY);
  //8번 핀 값을 statetimer에 저장(0 or 1)
  if (statetimer!=prevStatetimer)
  {
    if (statetimer==0) Blynk.virtualWrite(V0,LOW); Blynk.notify("Timer On");
    if (statetimer==1) Blynk.virtualWrite(V0,HIGH);
    //읽은 값이 0이면 V0(릴레이 모듈 제어 가상 핀)을 off하고, 1이면 V0을 on.
  }
  prevStatetimer=statetimer;
}

//블링크 가상함수
BLYNK_READ(V1) //아두이노에서 측정한 온도 값을 Blynk 앱으로 전송 및 화면에 출력하는 함수
{
  Blynk.virtualWrite(V1, celsius);
}
 
BLYNK_WRITE(V0) { //Blynk 앱에서 버튼을 눌러 릴레이 모듈을 제어하는 함수
  int pinValue = param.asInt(); //사용자의 입력 감지
  if (pinValue == 1) {
    digitalWrite(RELAY, HIGH);
    //버튼을 눌러 1을 입력 시 릴레이 모듈에 HIGH를 전송
  } else {
    digitalWrite(RELAY, LOW);
    //버튼을 눌러 0을 입력 시 릴레이 모듈에 LOW를 전송
  }
}
BLYNK_WRITE(V2) //타이머 기능 구현 함수
{
  if(param.asInt()) {
    digitalWrite(RELAY, HIGH);
    //시간을 설정해 정해진 시간이 되면 1을 릴레이 모듈에 전송
    Blynk.virtualWrite(V0, HIGH);
    //시간을 설정해 정해진 시간이 되면 1을 V0에 전송
    Blynk.notify("Timer On");
  } else {
    digitalWrite(RELAY, LOW);
    Blynk.virtualWrite(V0,LOW);
  }
}

BLYNK_WRITE(V3) 
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
