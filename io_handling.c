#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#include "joystick.h"
#include "led_matrix.h"


uint16_t snek_color = RGB565_CYAN;
int snek_len = 3;
int stop =1;


void sleep_ms(int ms) {
  usleep(1000 * ms);
}

void *handle_input(void* arg){
  struct js_event jstick;

  jstick=read_joystick_input();
  if (jstick.type==1)
    {
      if(jstick.direction==DIRECTION_EAST) {
	snek_color=RGB565_YELLOW;
      }
      else if(jstick.direction==DIRECTION_WEST) {
	snek_color=RGB565_MAGENTA;
      }
      else if(jstick.direction==DIRECTION_SOUTH) {
	snek_len++;
      }
      else if(jstick.direction==DIRECTION_NORTH) {
	snek_len--;
      }
      else if(jstick.direction==DIRECTION_DOWN) {
	stop=0;
      }
    }
  return NULL;

}

int main() {
  int snek_pos = 0;

  pthread_t xiancheng;
  open_led_matrix();
  open_joystick_device();

  /* Move the snek. */


  while (1){


    clear_leds();
    snek_pos = (snek_pos + 1) % NUM_LEDS;

    for (int i = 0; i < snek_len; i++) {
      int led_num = (snek_pos + i) % NUM_LEDS;
      set_led_num(led_num, snek_color);
    }
    sleep_ms(100);

    if (pthread_create(&xiancheng, NULL, handle_input, NULL))
      {
	printf( "Error creating new thread.\n");
	return -1;
      }


    if(stop==0) {
      goto exit;
    }
  }
exit:
    clear_leds();
    close_joystick_device();
    close_led_matrix();
  
  return 0;
}
