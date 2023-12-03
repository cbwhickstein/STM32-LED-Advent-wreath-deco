#include <stdint.h>

#define GPIO_B_BASE_ADDR 0x40010C00
#define DELAY_CYCLES 1000000

int main() {
    uint32_t* gpio_conf_low =  (uint32_t*)(GPIO_B_BASE_ADDR + 0x0);
    uint32_t* gpio_output_data = (uint32_t*)(GPIO_B_BASE_ADDR + 0x0C);
    
    *gpio_conf_low = 0b01; //set GPIO B0 to outputmode 10MHz push pull

    while(1) {
        *gpio_output_data = 0; //set the led to other state
        for (volatile int i = 0; i < DELAY_CYCLES; i++);
        *gpio_output_data = 1; //set the led to other state
        for (volatile int i = 0; i < DELAY_CYCLES; i++);
    }
}