#include <init.h>
#include <stdint.h>


int main(void){
        GPIO_Ini();
        GPIO_Ini_Self_Def();
        GPIO_Ini_CMSIS();
        while(1){
                if(READ_BIT(GPIOC->IDR, GPIO_IDR_IDR_13)!=0){
                        SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS7);
                        SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS14);
                        SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS0);
                }else{
                        SET_BIT(GPIOB->BSRR, GPIO_BSRR_BR7);
                        SET_BIT(GPIOB->BSRR, GPIO_BSRR_BR14);
                        SET_BIT(GPIOB->BSRR, GPIO_BSRR_BR0);
                }
        }

        // *(uint32_t*)(0x40023800UL + 0x30UL) |= 0x02;

        // *(uint32_t*)(0x40020400UL + 0x00UL) |= 0x4000;
        // *(uint32_t*)(0x40020400UL + 0x08UL) |= 0x4000;
        // *(uint32_t*)(0x40020400UL + 0x18UL) |= 0x800000;
        

        // while(1){
        //         *(uint32_t*)(0x40020400UL + 0x18UL) |= 0x80;
        // }
        // while(1){
        //         if(READ_BIT(GPIOC_IDR, GPIOC_IDR_PIN13) != 0){
        //                 SET_BIT(GPIOB_BSRR, GPIOB_BSRR_PIN7_SET);
        //         }else{
        //                 SET_BIT(GPIOB_BSRR, GPIOB_BSTT_PIN7_RESET);
        //         }    
        // }
}