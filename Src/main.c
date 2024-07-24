
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
#include <stdint.h>

int main(void)
{

    SystemCoreClockUpdate();

    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
    GPIOC->MODER |= GPIO_MODER_MODER13_0;
    GPIOC->BSRR |= GPIO_BSRR_BR_13;

    while (1)
    {
    }
}
