#include <init.h>

void GPIO_Ini(void){
        RCC_GPIO_EN     |=      RCC_GPIOB_EN + RCC_GPIOC_EN;
        GPIOB_MODER     |=      GPIOB_MODE_PIN7_OUT;
        GPIOB_OTYPER    |=      GPIOB_OTYPE_PIN7_PP;
        GPIOB_OSPEEDR   |=      GPIOB_OSPEED_PIN7_MID;
        GPIOB_PUPDR     |=      GPIOB_PUPDR_PIN7_NOPUPD;      
        
        
        
}