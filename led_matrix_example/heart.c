#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include "led_matrix.h"
void led_on();
void pointless_calculation();

void pointless_calculation(){
  int amount_of_pointlessness = 100000000;
  int x = 0;
  for (int i = 0; i < amount_of_pointlessness; i++){
    x += i;
  }
}

void led_on(){
  int row[10]={2,2,3,3,2,2,3,4,5,6,7,7,6,5,4,3};
  int col[10]={2,3,4,5,6,7,8,8,7,6,5,4,3,2,1,1};
  for (int j = 0; col<16; col++){
    pointless_calculation();
    set_led(a[j],b[j],565_BLUE);
  }
}


 
int main(){
  open_led_matrix();
  clear_leds();
  led_on();
  clear_leds();
  close_led_matrix();
  return 0;
} 
