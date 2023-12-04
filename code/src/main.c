#include <stdint.h>
#include <gpio.h>
#include <rcc.h>

#define GPIO_B_BASE_ADDR 0x40010C00
#define DELAY_CYCLES 200000

void gpio_cycle();


int main() {
    enable_all_IO_ports();

    for (uint8_t i = 0; i < 10; i++) {
        gpio_config('a', i, GPIO_CRX_MODE_OUTPUT_10MHZ, GPIO_CRX_CNF_OUT_GP_PUSH_PULL);
    }

    while(1) {
        gpio_cycle();
    }
}


void delay(uint32_t cycles) {
    for (volatile uint32_t i = 0; i < cycles; i++);
}

void gpio_cycle() {
    for (uint8_t i = 0; i < 10; i++) {
        //reset last pin
        if (i == 0) 
            gpio_set('a', 9, 0);
        else
            gpio_set('a', i-1, 0);
        
        //set current pin
        gpio_set('a', i, 1);

        //delay
        delay(DELAY_CYCLES);
    }       
}

