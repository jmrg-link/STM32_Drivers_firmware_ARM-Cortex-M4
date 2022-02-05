
#include <stm32f401xx.h>

void delay(uint32_t cnt)
{
	while(cnt)
		cnt--;
}

int main(void)
{
	GPIOA->MODER |= (1<<10);
	while(1){
	}
}
