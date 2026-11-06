#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void app_main() {
gpio_reset_pin(32);
gpio_set_direction(32, GPIO_MODE_OUTPUT);
while(1){
  gpio_set_level(32,1);
  vTaskDelay(1000 / portTICK_PERIOD_MS);
  gpio_set_level(32,0);
  vTaskDelay(1000 / portTICK_PERIOD_MS);
}
}

