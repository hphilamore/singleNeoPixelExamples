#include <Adafruit_NeoPixel.h>
#include "Wire.h"
#include "SparkFunIMU.h"
#include "SparkFunLSM303C.h"
#include "LSM303CTypes.h"

#define PIN 8
#define NUM_LEDS 1

//create a NeoPixel strip
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  Serial.begin(115200);
  strip.begin();
  strip.show();
}

void loop()
{


//  if (w>threshold && flag==0)
//  {
//    steps=steps+1;
//    
//    flag=1;  
//
 // light ON
strip.setPixelColor(250, 0,0, 0);
strip.show();
delay(1000);
// light OFF
strip.setPixelColor(0, 0, 0, 0);
strip.show();    
delay(1000);
   
//  }
//  
//   else if (w > threshold && flag==1)
//  {
//    //do nothing 
//  }
//  
//  if (w <threshold  && flag==1)
//  {
//    flag=0;
//  }
//
// Serial.print("\t");
// Serial.println(steps); 
// delay(100);   

//
//
//  // ********************************************
//
//   if ((millis() - startTime) > MeasurePeriod)
//   {
//     stepsNew = steps;   
//     endTime = millis();     
//     paceAve = float(stepsNew - stepsOld)/ float(endTime - startTime); 
//     stepsOld = steps;
//     startTime = millis();    
//   }
//
//   Serial.print("\t");
//   Serial.println(paceAve, 6); 
//
//   if (paceAve > thresholdPace)
//   {
//    strip.setPixelColor(0, 0, 255, 0);
//    strip.show();
//    delay(200);
//   }  
 
 
}
