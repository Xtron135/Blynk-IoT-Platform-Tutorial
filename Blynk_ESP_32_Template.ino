#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "Your_Template_ID"
#define BLYNK_DEVICE_NAME "Your_Device_Name"
#define BLYNK_AUTH_TOKEN "YourToken"

#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Your Wifi";
char pass[] = "YourPassword";

BlynkTimer timer;

//------------------------------------------------------------------
//Declare

//------------------------------------------------------------------

void setup(){ //Core
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

  timer.setInterval(500L, myTimerEvent);
}

//------------------------------------------------------------------
//Virtual Output
//Blynk.virtualWrite(VLED,0);

void myTimerEvent(){
  
}

//------------------------------------------------------------------

void loop(){
  Blynk.run();
  timer.run();
}

//-------------------------------------------------------------------
//Virtual Input

//BLYNK_WRITE(Virtual_Pin)
//{
//  int value = param.asInt();
//
//}
