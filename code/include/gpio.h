#pragma once

#include <stdint.h>

/**
 * 
 * GPIO REGISTER STRUCT
 * 
 */

typedef struct
{
    volatile uint32_t CRL;   //configuration register low 
    volatile uint32_t CRH;   //configuration register high
    volatile uint32_t IDR;   //input data register
    volatile uint32_t ODR;   //output data register 
    volatile uint32_t BSRR;  //bit set/reset register
    volatile uint32_t BRR;   //bit reset register
    volatile uint32_t LCKR;  //configuration lock register 
}GPIO_t;


/**
 * 
 * GPIO ADDRESSES
 * 
 */

#define GPIO_BASE_ADDR_A ((uint32_t*) 0x40010800)
#define GPIO_BASE_ADDR_B ((uint32_t*) 0x40010C00) 
#define GPIO_BASE_ADDR_C ((uint32_t*) 0x40011000)
#define GPIO_BASE_ADDR_D ((uint32_t*) 0x40011400)
#define GPIO_BASE_ADDR_E ((uint32_t*) 0x40011800)
#define GPIO_BASE_ADDR_F ((uint32_t*) 0x40011C00)
#define GPIO_BASE_ADDR_G ((uint32_t*) 0x40012000)

/**
 * 
 * GPIO REGISTER BIT OFFSETS
 * 
 */

//CRL
#define GPIO_CRL_MODE0_OFFSET   0
#define GPIO_CRL_CNF0_OFFSET    2
#define GPIO_CRL_MODE1_OFFSET   4
#define GPIO_CRL_CNF1_OFFSET    6
#define GPIO_CRL_MODE2_OFFSET   8
#define GPIO_CRL_CNF2_OFFSET    10
#define GPIO_CRL_MODE3_OFFSET   12
#define GPIO_CRL_CNF3_OFFSET    14
#define GPIO_CRL_MODE4_OFFSET   16
#define GPIO_CRL_CNF4_OFFSET    18
#define GPIO_CRL_MODE5_OFFSET   20
#define GPIO_CRL_CNF5_OFFSET    22
#define GPIO_CRL_MODE6_OFFSET   24
#define GPIO_CRL_CNF6_OFFSET    26
#define GPIO_CRL_MODE7_OFFSET   28
#define GPIO_CRL_CNF7_OFFSET    30

//CRH
#define GPIO_CRH_MODE8_OFFSET    0
#define GPIO_CRH_CNF8_OFFSET     2
#define GPIO_CRH_MODE9_OFFSET    4
#define GPIO_CRH_CNF9_OFFSET     6
#define GPIO_CRH_MODE10_OFFSET   8
#define GPIO_CRH_CNF10_OFFSET    10
#define GPIO_CRH_MODE11_OFFSET   12
#define GPIO_CRH_CNF11_OFFSET    14
#define GPIO_CRH_MODE12_OFFSET   16
#define GPIO_CRH_CNF12_OFFSET    18
#define GPIO_CRH_MODE13_OFFSET   20
#define GPIO_CRH_CNF13_OFFSET    22
#define GPIO_CRH_MODE14_OFFSET   24
#define GPIO_CRH_CNF14_OFFSET    26
#define GPIO_CRH_MODE15_OFFSET   28
#define GPIO_CRH_CNF15_OFFSET    30

//IDR
#define GPIO_IDR_IDR0_OFFSET     0
#define GPIO_IDR_IDR1_OFFSET     1
#define GPIO_IDR_IDR2_OFFSET     2
#define GPIO_IDR_IDR3_OFFSET     3
#define GPIO_IDR_IDR4_OFFSET     4
#define GPIO_IDR_IDR5_OFFSET     5
#define GPIO_IDR_IDR6_OFFSET     6
#define GPIO_IDR_IDR7_OFFSET     7
#define GPIO_IDR_IDR8_OFFSET     8
#define GPIO_IDR_IDR9_OFFSET     9
#define GPIO_IDR_IDR10_OFFSET    10
#define GPIO_IDR_IDR11_OFFSET    11
#define GPIO_IDR_IDR12_OFFSET    12
#define GPIO_IDR_IDR13_OFFSET    13
#define GPIO_IDR_IDR14_OFFSET    14
#define GPIO_IDR_IDR15_OFFSET    15

//ODR
#define GPIO_ODR_ODR0_OFFSET     0
#define GPIO_ODR_ODR1_OFFSET     1
#define GPIO_ODR_ODR2_OFFSET     2
#define GPIO_ODR_ODR3_OFFSET     3
#define GPIO_ODR_ODR4_OFFSET     4
#define GPIO_ODR_ODR5_OFFSET     5
#define GPIO_ODR_ODR6_OFFSET     6
#define GPIO_ODR_ODR7_OFFSET     7
#define GPIO_ODR_ODR8_OFFSET     8
#define GPIO_ODR_ODR9_OFFSET     9
#define GPIO_ODR_ODR10_OFFSET    10
#define GPIO_ODR_ODR11_OFFSET    11
#define GPIO_ODR_ODR12_OFFSET    12
#define GPIO_ODR_ODR13_OFFSET    13
#define GPIO_ODR_ODR14_OFFSET    14
#define GPIO_ODR_ODR15_OFFSET    15

//BSRR
#define GPIO_BSRR_BS0_OFFSET     0
#define GPIO_BSRR_BS1_OFFSET     1
#define GPIO_BSRR_BS2_OFFSET     2
#define GPIO_BSRR_BS3_OFFSET     3
#define GPIO_BSRR_BS4_OFFSET     4
#define GPIO_BSRR_BS5_OFFSET     5
#define GPIO_BSRR_BS6_OFFSET     6
#define GPIO_BSRR_BS7_OFFSET     7
#define GPIO_BSRR_BS8_OFFSET     8
#define GPIO_BSRR_BS9_OFFSET     9
#define GPIO_BSRR_BS10_OFFSET    10
#define GPIO_BSRR_BS11_OFFSET    11
#define GPIO_BSRR_BS12_OFFSET    12
#define GPIO_BSRR_BS13_OFFSET    13
#define GPIO_BSRR_BS14_OFFSET    14
#define GPIO_BSRR_BS15_OFFSET    15

#define GPIO_BSRR_BR0_OFFSET     16
#define GPIO_BSRR_BR1_OFFSET     17
#define GPIO_BSRR_BR2_OFFSET     18
#define GPIO_BSRR_BR3_OFFSET     19
#define GPIO_BSRR_BR4_OFFSET     20
#define GPIO_BSRR_BR5_OFFSET     21
#define GPIO_BSRR_BR6_OFFSET     22
#define GPIO_BSRR_BR7_OFFSET     23
#define GPIO_BSRR_BR8_OFFSET     24
#define GPIO_BSRR_BR9_OFFSET     25
#define GPIO_BSRR_BR10_OFFSET    26
#define GPIO_BSRR_BR11_OFFSET    27
#define GPIO_BSRR_BR12_OFFSET    28
#define GPIO_BSRR_BR13_OFFSET    29
#define GPIO_BSRR_BR14_OFFSET    30
#define GPIO_BSRR_BR15_OFFSET    31

//LCKR
#define GPIO_LCKR_LCK0_OFFSET     0
#define GPIO_LCKR_LCK1_OFFSET     1
#define GPIO_LCKR_LCK2_OFFSET     2
#define GPIO_LCKR_LCK3_OFFSET     3
#define GPIO_LCKR_LCK4_OFFSET     4
#define GPIO_LCKR_LCK5_OFFSET     5
#define GPIO_LCKR_LCK6_OFFSET     6
#define GPIO_LCKR_LCK7_OFFSET     7
#define GPIO_LCKR_LCK8_OFFSET     8
#define GPIO_LCKR_LCK9_OFFSET     9
#define GPIO_LCKR_LCK10_OFFSET    10
#define GPIO_LCKR_LCK11_OFFSET    11
#define GPIO_LCKR_LCK12_OFFSET    12
#define GPIO_LCKR_LCK13_OFFSET    13
#define GPIO_LCKR_LCK14_OFFSET    14
#define GPIO_LCKR_LCK15_OFFSET    15
#define GPIO_LCKR_LCKK_OFFSET     16



/**
 * 
 * GPIO REGISTER BITS
 * 
 */

//CRL
#define GPIO_CRL_MODE0_BITS   (0b11 << GPIO_CRL_MODE0_OFFSET)
#define GPIO_CRL_CNF0_BITS    (0b11 << GPIO_CRL_CNF0_OFFSET) 
#define GPIO_CRL_MODE1_BITS   (0b11 << GPIO_CRL_MODE1_OFFSET)
#define GPIO_CRL_CNF1_BITS    (0b11 << GPIO_CRL_CNF1_OFFSET) 
#define GPIO_CRL_MODE2_BITS   (0b11 << GPIO_CRL_MODE2_OFFSET)
#define GPIO_CRL_CNF2_BITS    (0b11 << GPIO_CRL_CNF2_OFFSET) 
#define GPIO_CRL_MODE3_BITS   (0b11 << GPIO_CRL_MODE3_OFFSET)
#define GPIO_CRL_CNF3_BITS    (0b11 << GPIO_CRL_CNF3_OFFSET) 
#define GPIO_CRL_MODE4_BITS   (0b11 << GPIO_CRL_MODE4_OFFSET)
#define GPIO_CRL_CNF4_BITS    (0b11 << GPIO_CRL_CNF4_OFFSET) 
#define GPIO_CRL_MODE5_BITS   (0b11 << GPIO_CRL_MODE5_OFFSET)
#define GPIO_CRL_CNF5_BITS    (0b11 << GPIO_CRL_CNF5_OFFSET) 
#define GPIO_CRL_MODE6_BITS   (0b11 << GPIO_CRL_MODE6_OFFSET)
#define GPIO_CRL_CNF6_BITS    (0b11 << GPIO_CRL_CNF6_OFFSET) 
#define GPIO_CRL_MODE7_BITS   (0b11 << GPIO_CRL_MODE7_OFFSET)
#define GPIO_CRL_CNF7_BITS    (0b11 << GPIO_CRL_CNF7_OFFSET) 

//CRH
#define GPIO_CRH_MODE8_BITS    (0b11 << GPIO_CRH_MODE8_OFFSET)
#define GPIO_CRH_CNF8_BITS     (0b11 << GPIO_CRH_CNF8_OFFSET) 
#define GPIO_CRH_MODE9_BITS    (0b11 << GPIO_CRH_MODE9_OFFSET)
#define GPIO_CRH_CNF9_BITS     (0b11 << GPIO_CRH_CNF9_OFFSET) 
#define GPIO_CRH_MODE10_BITS   (0b11 << GPIO_CRH_MODE10_OFFSET)
#define GPIO_CRH_CNF10_BITS    (0b11 << GPIO_CRH_CNF10_OFFSET) 
#define GPIO_CRH_MODE11_BITS   (0b11 << GPIO_CRH_MODE11_OFFSET)
#define GPIO_CRH_CNF11_BITS    (0b11 << GPIO_CRH_CNF11_OFFSET) 
#define GPIO_CRH_MODE12_BITS   (0b11 << GPIO_CRH_MODE12_OFFSET)
#define GPIO_CRH_CNF12_BITS    (0b11 << GPIO_CRH_CNF12_OFFSET) 
#define GPIO_CRH_MODE13_BITS   (0b11 << GPIO_CRH_MODE13_OFFSET)
#define GPIO_CRH_CNF13_BITS    (0b11 << GPIO_CRH_CNF13_OFFSET) 
#define GPIO_CRH_MODE14_BITS   (0b11 << GPIO_CRH_MODE14_OFFSET)
#define GPIO_CRH_CNF14_BITS    (0b11 << GPIO_CRH_CNF14_OFFSET) 
#define GPIO_CRH_MODE15_BITS   (0b11 << GPIO_CRH_MODE15_OFFSET)
#define GPIO_CRH_CNF15_BITS    (0b11 << GPIO_CRH_CNF15_OFFSET) 

//IDR
#define GPIO_IDR_IDR0_BITS     (0b1 << GPIO_IDR_IDR0_OFFSET)
#define GPIO_IDR_IDR1_BITS     (0b1 << GPIO_IDR_IDR1_OFFSET)
#define GPIO_IDR_IDR2_BITS     (0b1 << GPIO_IDR_IDR2_OFFSET)
#define GPIO_IDR_IDR3_BITS     (0b1 << GPIO_IDR_IDR3_OFFSET)
#define GPIO_IDR_IDR4_BITS     (0b1 << GPIO_IDR_IDR4_OFFSET)
#define GPIO_IDR_IDR5_BITS     (0b1 << GPIO_IDR_IDR5_OFFSET)
#define GPIO_IDR_IDR6_BITS     (0b1 << GPIO_IDR_IDR6_OFFSET)
#define GPIO_IDR_IDR7_BITS     (0b1 << GPIO_IDR_IDR7_OFFSET)
#define GPIO_IDR_IDR8_BITS     (0b1 << GPIO_IDR_IDR8_OFFSET)
#define GPIO_IDR_IDR9_BITS     (0b1 << GPIO_IDR_IDR9_OFFSET)
#define GPIO_IDR_IDR10_BITS    (0b1 << GPIO_IDR_IDR10_OFFSET)
#define GPIO_IDR_IDR11_BITS    (0b1 << GPIO_IDR_IDR11_OFFSET)
#define GPIO_IDR_IDR12_BITS    (0b1 << GPIO_IDR_IDR12_OFFSET)
#define GPIO_IDR_IDR13_BITS    (0b1 << GPIO_IDR_IDR13_OFFSET)
#define GPIO_IDR_IDR14_BITS    (0b1 << GPIO_IDR_IDR14_OFFSET)
#define GPIO_IDR_IDR15_BITS    (0b1 << GPIO_IDR_IDR15_OFFSET)

//ODR
#define GPIO_ODR_ODR0_BITS    (0b1 << GPIO_ODR_ODR0_OFFSET)
#define GPIO_ODR_ODR1_BITS    (0b1 << GPIO_ODR_ODR1_OFFSET)
#define GPIO_ODR_ODR2_BITS    (0b1 << GPIO_ODR_ODR2_OFFSET)
#define GPIO_ODR_ODR3_BITS    (0b1 << GPIO_ODR_ODR3_OFFSET)
#define GPIO_ODR_ODR4_BITS    (0b1 << GPIO_ODR_ODR4_OFFSET)
#define GPIO_ODR_ODR5_BITS    (0b1 << GPIO_ODR_ODR5_OFFSET)
#define GPIO_ODR_ODR6_BITS    (0b1 << GPIO_ODR_ODR6_OFFSET)
#define GPIO_ODR_ODR7_BITS    (0b1 << GPIO_ODR_ODR7_OFFSET)
#define GPIO_ODR_ODR8_BITS    (0b1 << GPIO_ODR_ODR8_OFFSET)
#define GPIO_ODR_ODR9_BITS    (0b1 << GPIO_ODR_ODR9_OFFSET)
#define GPIO_ODR_ODR10_BITS   (0b1 << GPIO_ODR_ODR10_OFFSET)
#define GPIO_ODR_ODR11_BITS   (0b1 << GPIO_ODR_ODR11_OFFSET)
#define GPIO_ODR_ODR12_BITS   (0b1 << GPIO_ODR_ODR12_OFFSET)
#define GPIO_ODR_ODR13_BITS   (0b1 << GPIO_ODR_ODR13_OFFSET)
#define GPIO_ODR_ODR14_BITS   (0b1 << GPIO_ODR_ODR14_OFFSET)
#define GPIO_ODR_ODR15_BITS   (0b1 << GPIO_ODR_ODR15_OFFSET)

//BSRR
#define GPIO_BSRR_BS0_BITS      (0b1 << GPIO_BSRR_BS0_OFFSET)
#define GPIO_BSRR_BS1_BITS      (0b1 << GPIO_BSRR_BS1_OFFSET)
#define GPIO_BSRR_BS2_BITS      (0b1 << GPIO_BSRR_BS2_OFFSET)
#define GPIO_BSRR_BS3_BITS      (0b1 << GPIO_BSRR_BS3_OFFSET)
#define GPIO_BSRR_BS4_BITS      (0b1 << GPIO_BSRR_BS4_OFFSET)
#define GPIO_BSRR_BS5_BITS      (0b1 << GPIO_BSRR_BS5_OFFSET)
#define GPIO_BSRR_BS6_BITS      (0b1 << GPIO_BSRR_BS6_OFFSET)
#define GPIO_BSRR_BS7_BITS      (0b1 << GPIO_BSRR_BS7_OFFSET)
#define GPIO_BSRR_BS8_BITS      (0b1 << GPIO_BSRR_BS8_OFFSET)
#define GPIO_BSRR_BS9_BITS      (0b1 << GPIO_BSRR_BS9_OFFSET)
#define GPIO_BSRR_BS10_BITS     (0b1 << GPIO_BSRR_BS10_OFFSET)
#define GPIO_BSRR_BS11_BITS     (0b1 << GPIO_BSRR_BS11_OFFSET)
#define GPIO_BSRR_BS12_BITS     (0b1 << GPIO_BSRR_BS12_OFFSET)
#define GPIO_BSRR_BS13_BITS     (0b1 << GPIO_BSRR_BS13_OFFSET)
#define GPIO_BSRR_BS14_BITS     (0b1 << GPIO_BSRR_BS14_OFFSET)
#define GPIO_BSRR_BS15_BITS     (0b1 << GPIO_BSRR_BS15_OFFSET)

#define GPIO_BSRR_BR0_BITS     (0b1 << GPIO_BSRR_BR0_OFFSET)
#define GPIO_BSRR_BR1_BITS     (0b1 << GPIO_BSRR_BR1_OFFSET)
#define GPIO_BSRR_BR2_BITS     (0b1 << GPIO_BSRR_BR2_OFFSET)
#define GPIO_BSRR_BR3_BITS     (0b1 << GPIO_BSRR_BR3_OFFSET)
#define GPIO_BSRR_BR4_BITS     (0b1 << GPIO_BSRR_BR4_OFFSET)
#define GPIO_BSRR_BR5_BITS     (0b1 << GPIO_BSRR_BR5_OFFSET)
#define GPIO_BSRR_BR6_BITS     (0b1 << GPIO_BSRR_BR6_OFFSET)
#define GPIO_BSRR_BR7_BITS     (0b1 << GPIO_BSRR_BR7_OFFSET)
#define GPIO_BSRR_BR8_BITS     (0b1 << GPIO_BSRR_BR8_OFFSET)
#define GPIO_BSRR_BR9_BITS     (0b1 << GPIO_BSRR_BR9_OFFSET)
#define GPIO_BSRR_BR10_BITS    (0b1 << GPIO_BSRR_BR10_OFFSET)
#define GPIO_BSRR_BR11_BITS    (0b1 << GPIO_BSRR_BR11_OFFSET)
#define GPIO_BSRR_BR12_BITS    (0b1 << GPIO_BSRR_BR12_OFFSET)
#define GPIO_BSRR_BR13_BITS    (0b1 << GPIO_BSRR_BR13_OFFSET)
#define GPIO_BSRR_BR14_BITS    (0b1 << GPIO_BSRR_BR14_OFFSET)
#define GPIO_BSRR_BR15_BITS    (0b1 << GPIO_BSRR_BR15_OFFSET)

//LCKR
#define GPIO_LCKR_LCK0_BITS     (0b1 << GPIO_LCKR_LCK0_OFFSET)
#define GPIO_LCKR_LCK1_BITS     (0b1 << GPIO_LCKR_LCK1_OFFSET)
#define GPIO_LCKR_LCK2_BITS     (0b1 << GPIO_LCKR_LCK2_OFFSET)
#define GPIO_LCKR_LCK3_BITS     (0b1 << GPIO_LCKR_LCK3_OFFSET)
#define GPIO_LCKR_LCK4_BITS     (0b1 << GPIO_LCKR_LCK4_OFFSET)
#define GPIO_LCKR_LCK5_BITS     (0b1 << GPIO_LCKR_LCK5_OFFSET)
#define GPIO_LCKR_LCK6_BITS     (0b1 << GPIO_LCKR_LCK6_OFFSET)
#define GPIO_LCKR_LCK7_BITS     (0b1 << GPIO_LCKR_LCK7_OFFSET)
#define GPIO_LCKR_LCK8_BITS     (0b1 << GPIO_LCKR_LCK8_OFFSET)
#define GPIO_LCKR_LCK9_BITS     (0b1 << GPIO_LCKR_LCK9_OFFSET)
#define GPIO_LCKR_LCK10_BITS    (0b1 << GPIO_LCKR_LCK10_OFFSET)
#define GPIO_LCKR_LCK11_BITS    (0b1 << GPIO_LCKR_LCK11_OFFSET)
#define GPIO_LCKR_LCK12_BITS    (0b1 << GPIO_LCKR_LCK12_OFFSET)
#define GPIO_LCKR_LCK13_BITS    (0b1 << GPIO_LCKR_LCK13_OFFSET)
#define GPIO_LCKR_LCK14_BITS    (0b1 << GPIO_LCKR_LCK14_OFFSET)
#define GPIO_LCKR_LCK15_BITS    (0b1 << GPIO_LCKR_LCK15_OFFSET)
#define GPIO_LCKR_LCKK_BITS     (0b1 << GPIO_LCKR_LCKK_OFFSET)  


/**
 * 
 * GPIO CONFIG MODES
 * 
 */

#define GPIO_CRX_MODE_INPUT         0b00
#define GPIO_CRX_MODE_OUTPUT_10MHZ  0b01
#define GPIO_CRX_MODE_OUTPUT_2MHZ   0b10
#define GPIO_CRX_MODE_OUTPUT_50MHZ  0b11

/**
 * 
 * GPIO CONFIG CONFIGURATION BITS
 * 
 */

//input mode
#define GPIO_CRX_CNF_IN_ANALOG          0b00
#define GPIO_CRX_CNF_IN_FLOATING        0b01
#define GPIO_CRX_CNF_IN_PULLUP_PULLDOWN 0b10

//output mode
#define GPIO_CRX_CNF_OUT_GP_PUSH_PULL   0b00
#define GPIO_CRX_CNF_OUT_GP_OPEN_DRAIN  0b01
#define GPIO_CRX_CNF_OUT_AF_PUSH_PULL   0b10
#define GPIO_CRX_CNF_OUT_AF_OPEN_DRAIN  0b11


/**
 * 
 * GPIO FUNCTIONS
 * 
 */

/**
 *
 * FUNCTION DEFINITIONS 
 * 
 */

void gpio_config(char port, uint8_t num, uint32_t mode, uint32_t cnf);
void gpio_set(char port, uint8_t num, uint8_t state);

/**
 * 
 * FUNCTION DECLARATIONS
 * 
 */

/**
 * @brief sets the configuration of a specified gpio pin
 * 
 * @param port GPIO Port of the GPIO that needs to be configured: {'a', 'b', 'c', 'd', 'e', 'f', 'g'}
 * @param num Number of the GPIO of which the config bits gets updated: {0-15}
 * @param mode mode which the GPIO pin should have
 *              MODES: {GPIO_CRX_MODE_INPUT, 
 *                      GPIO_CRX_MODE_OUTPUT_10MHZ, 
 *                      GPIO_CRX_MODE_OUTPUT_2MHZ, 
 *                      GPIO_CRX_MODE_OUTPUT_50MHZ}
 * @param cnf config which the GPIO pin should have (carefull which mode you choose)
 *              CNF:
 *                  INMODE: 
 *                      {GPIO_CRX_CNF_IN_ANALOG, 
 *                       GPIO_CRX_CNF_IN_FLOATING,
 *                       GPIO_CRX_CNF_IN_PULLUP_PULLDOWN}
 *                  OUTMODE:
 *                      {GPIO_CRX_CNF_OUT_GP_PUSH_PULL,
 *                       GPIO_CRX_CNF_OUT_GP_OPEN_DRAIN,
 *                       GPIO_CRX_CNF_OUT_AF_PUSH_PULL,
 *                       GPIO_CRX_CNF_OUT_AF_OPEN_DRAIN}
 * 
 * @example Set Port A pin 1 to analog in
 *      gpio_config('a', 1, GPIO_CRX_MODE_INPUT, GPIO_CRX_CNF_IN_ANALOG);
 * 
 * @example Set Port B pin 8 to general purpose output push pull max AHB clk speed 10MHz
 *      gpio_config('b', 8, GPIO_CRX_MODE_OUTPUT_10MHZ, GPIO_CRX_CNF_OUT_GP_PUSH_PULL)
 * 
 * @example Set Port C pin 13 to alternate function output open drain
 *      gpio_config('c', 8, GPIO_CRX_MODE_OUTPUT_10MHZ, GPIO_CRX_CNF_OUT_AF_OPEN_DRAIN)
 * 
 */
void gpio_config(char port, uint8_t num, uint32_t mode, uint32_t cnf) {
    volatile GPIO_t* gpio_port;
    uint8_t num_mode_offset;
    uint8_t num_cnf_offset;
    uint32_t num_mode_bits;
    uint32_t num_cnf_bits;

    switch (port) {
        case 'a': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_A; break;
        case 'b': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_B; break;
        case 'c': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_C; break;
        case 'd': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_D; break;
        case 'e': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_E; break;
        case 'f': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_F; break;
        case 'g': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_G; break;
        
        default: gpio_port = (GPIO_t*)GPIO_BASE_ADDR_A; break;
    }

    switch (num) {
        case 0: 
            num_mode_offset = GPIO_CRL_MODE0_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF0_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE0_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF0_BITS;
            break;                                     
        case 1:
            num_mode_offset = GPIO_CRL_MODE1_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF1_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE1_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF1_BITS;
            break;
        case 2:
            num_mode_offset = GPIO_CRL_MODE2_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF2_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE2_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF2_BITS;
            break;
        case 3:
            num_mode_offset = GPIO_CRL_MODE3_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF3_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE3_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF3_BITS;
            break;
        case 4:
            num_mode_offset = GPIO_CRL_MODE4_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF4_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE4_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF4_BITS;
            break;
        case 5:
            num_mode_offset = GPIO_CRL_MODE5_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF5_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE5_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF5_BITS;
            break;
        case 6:
            num_mode_offset = GPIO_CRL_MODE6_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF6_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE6_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF6_BITS;
            break;
        case 7:
            num_mode_offset = GPIO_CRL_MODE7_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF7_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE7_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF7_BITS;
            break;
        case 8:
            num_mode_offset = GPIO_CRH_MODE8_OFFSET;
            num_cnf_offset  = GPIO_CRH_CNF8_OFFSET; 
            num_mode_bits   = GPIO_CRH_MODE8_BITS;  
            num_cnf_bits    = GPIO_CRH_CNF8_BITS;
            break;
        case 9:
            num_mode_offset = GPIO_CRH_MODE9_OFFSET;
            num_cnf_offset  = GPIO_CRH_CNF9_OFFSET; 
            num_mode_bits   = GPIO_CRH_MODE9_BITS;  
            num_cnf_bits    = GPIO_CRH_CNF9_BITS;
            break;
        case 10:
            num_mode_offset = GPIO_CRH_MODE10_OFFSET;
            num_cnf_offset  = GPIO_CRH_CNF10_OFFSET; 
            num_mode_bits   = GPIO_CRH_MODE10_BITS;  
            num_cnf_bits    = GPIO_CRH_CNF10_BITS;
            break;
        case 11:
            num_mode_offset = GPIO_CRH_MODE11_OFFSET;
            num_cnf_offset  = GPIO_CRH_CNF11_OFFSET; 
            num_mode_bits   = GPIO_CRH_MODE11_BITS;  
            num_cnf_bits    = GPIO_CRH_CNF11_BITS;
            break;
        case 12:
            num_mode_offset = GPIO_CRH_MODE12_OFFSET;
            num_cnf_offset  = GPIO_CRH_CNF12_OFFSET; 
            num_mode_bits   = GPIO_CRH_MODE12_BITS;  
            num_cnf_bits    = GPIO_CRH_CNF12_BITS;
            break;
        case 13:
            num_mode_offset = GPIO_CRH_MODE13_OFFSET;
            num_cnf_offset  = GPIO_CRH_CNF13_OFFSET; 
            num_mode_bits   = GPIO_CRH_MODE13_BITS;  
            num_cnf_bits    = GPIO_CRH_CNF13_BITS;
            break;
        case 14:
            num_mode_offset = GPIO_CRH_MODE14_OFFSET;
            num_cnf_offset  = GPIO_CRH_CNF14_OFFSET; 
            num_mode_bits   = GPIO_CRH_MODE14_BITS;  
            num_cnf_bits    = GPIO_CRH_CNF14_BITS;
            break;
        case 15:
            num_mode_offset = GPIO_CRH_MODE15_OFFSET;
            num_cnf_offset  = GPIO_CRH_CNF15_OFFSET; 
            num_mode_bits   = GPIO_CRH_MODE15_BITS;  
            num_cnf_bits    = GPIO_CRH_CNF15_BITS;
            break;

        default:
            num_mode_offset = GPIO_CRL_MODE0_OFFSET;
            num_cnf_offset  = GPIO_CRL_CNF0_OFFSET; 
            num_mode_bits   = GPIO_CRL_MODE0_BITS;  
            num_cnf_bits    = GPIO_CRL_CNF0_BITS;
            break;    
    }

    //clear and set the mode and cnf bits
    if (num < 8) {
        gpio_port->CRL &= !(num_mode_bits | num_cnf_bits);
        gpio_port->CRL |= ( mode << num_mode_offset |
                            cnf << num_cnf_offset   );
    }
    else {
        gpio_port->CRH &= !(num_mode_bits | num_cnf_bits);
        gpio_port->CRH |= ( (mode << num_mode_offset) |
                            (cnf << num_cnf_offset)   );
    }
}

/**
 * @brief sets the output of the 
 * 
 * @param port GPIO Port of the GPIO that needs to be set: {'a', 'b', 'c', 'd', 'e', 'f', 'g'}
 * @param num Number of the GPIO of which the state gets set: {0-15}
 * @param state 0 for off, else on
 * 
 * @example
 * //set the GPIO-A-1 to on
 * gpio_set('a', 1, 1);
 * 
 */
void gpio_set(char port, uint8_t num, uint8_t state) {
    volatile GPIO_t* gpio_port;
    uint32_t num_offset;
    uint32_t num_bits;
    uint8_t new_state;

    switch (port) {
        case 'a': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_A; break;
        case 'b': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_B; break;
        case 'c': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_C; break;
        case 'd': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_D; break;
        case 'e': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_E; break;
        case 'f': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_F; break;
        case 'g': gpio_port = (GPIO_t*)GPIO_BASE_ADDR_G; break;
        
        default: gpio_port = (GPIO_t*)GPIO_BASE_ADDR_A; break;
    }

    switch (num) {
        case 0: num_offset = GPIO_ODR_ODR0_OFFSET; break;
        case 1: num_offset = GPIO_ODR_ODR1_OFFSET; break;
        case 2: num_offset = GPIO_ODR_ODR2_OFFSET; break;
        case 3: num_offset = GPIO_ODR_ODR3_OFFSET; break;
        case 4: num_offset = GPIO_ODR_ODR4_OFFSET; break;
        case 5: num_offset = GPIO_ODR_ODR5_OFFSET; break;
        case 6: num_offset = GPIO_ODR_ODR6_OFFSET; break;
        case 7: num_offset = GPIO_ODR_ODR7_OFFSET; break;
        case 8: num_offset = GPIO_ODR_ODR8_OFFSET; break;
        case 9: num_offset = GPIO_ODR_ODR9_OFFSET; break;
        case 10: num_offset = GPIO_ODR_ODR10_OFFSET; break;
        case 11: num_offset = GPIO_ODR_ODR11_OFFSET; break;
        case 12: num_offset = GPIO_ODR_ODR12_OFFSET; break;
        case 13: num_offset = GPIO_ODR_ODR13_OFFSET; break;
        case 14: num_offset = GPIO_ODR_ODR14_OFFSET; break;
        case 15: num_offset = GPIO_ODR_ODR15_OFFSET; break;

        default: num_offset = GPIO_ODR_ODR0_OFFSET; break;
    }

    switch (num) {
        case 0: num_bits = GPIO_ODR_ODR0_BITS; break;
        case 1: num_bits = GPIO_ODR_ODR1_BITS; break;
        case 2: num_bits = GPIO_ODR_ODR2_BITS; break;
        case 3: num_bits = GPIO_ODR_ODR3_BITS; break;
        case 4: num_bits = GPIO_ODR_ODR4_BITS; break;
        case 5: num_bits = GPIO_ODR_ODR5_BITS; break;
        case 6: num_bits = GPIO_ODR_ODR6_BITS; break;
        case 7: num_bits = GPIO_ODR_ODR7_BITS; break;
        case 8: num_bits = GPIO_ODR_ODR8_BITS; break;
        case 9: num_bits = GPIO_ODR_ODR9_BITS; break;
        case 10: num_bits = GPIO_ODR_ODR10_BITS; break;
        case 11: num_bits = GPIO_ODR_ODR11_BITS; break;
        case 12: num_bits = GPIO_ODR_ODR12_BITS; break;
        case 13: num_bits = GPIO_ODR_ODR13_BITS; break;
        case 14: num_bits = GPIO_ODR_ODR14_BITS; break;
        case 15: num_bits = GPIO_ODR_ODR15_BITS; break;

        default: num_bits = GPIO_ODR_ODR0_BITS; break;
    }

    switch (state) {
        case 0: new_state = 0; break;
        default: new_state = 1; break;
    }


    //clear and set the port
    gpio_port->ODR &= !num_bits;
    gpio_port->ODR |= new_state << num_offset;
}