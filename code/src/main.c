#include <stdint.h>
#include <gpio.h>

#define GPIO_B_BASE_ADDR 0x40010C00
#define DELAY_CYCLES 1000000

int main() {
    gpio_config('b', 0, GPIO_CRX_MODE_OUTPUT_10MHZ, GPIO_CRX_CNF_OUT_GP_PUSH_PULL);

    while(1) {
        gpio_set('b', 0, 0);
        for (volatile int i = 0; i < DELAY_CYCLES; i++);
        gpio_set('b', 0, 1); //set the led to other state
        for (volatile int i = 0; i < DELAY_CYCLES; i++);
    }
}