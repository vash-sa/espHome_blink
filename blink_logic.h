#include "esphome.h"

// Простая функция на C++, которую мы вызовем из YAML
void native_blink(int times, int delay_ms) {
    auto my_led = id(led_internal).get_output(); // Получаем доступ к компоненту по ID
    
    for(int i = 0; i < times; i++) {
        my_led->set_level(1.0); // Включить (для light это float 0.0-1.0)
        delay(delay_ms);
        my_led->set_level(0.0); // Выключить
        delay(delay_ms);
    }
}
