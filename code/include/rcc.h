#pragma once

#include <stdint.h>

#define RCC_BASE_ADDR 0x40021000

void enable_all_IO_ports() {
    uint32_t* apb2_enr = (uint32_t*)(RCC_BASE_ADDR + 0x18);
    *apb2_enr |= 0b111111100;
}