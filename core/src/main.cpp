#include "main.h"
#include <stdio.h>
#include "esp_log.h"

#define LOG_TAG "MAIN"

extern "C" void app_main(void) {
    while (true) {
        ESP_LOGI(LOG_TAG, "Hello, C++");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}