
#include <TVout.h>
#include "a.h"
#include "e.h"
#include "m.h"
#include "o.h"
#include "u.h"
#include "disturbance1.h"
#include "disturbance2.h"
#include "font6x8.h"

TVout tv;

void starting_animation(){
  for(int i=0;i<5;i++){
  tv.bitmap(20,16,d1);
  tv.delay(50);
  tv.bitmap(20,16,d2);
  tv.delay(50);
}
}


void setup(){
  

  Serial.begin(9600);
  tv.begin(PAL);
  starting_animation();
 
}

void loop(){

}