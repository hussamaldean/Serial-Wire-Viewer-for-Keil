#include "SWO.h"
uint16_t var;
char x[100];
void delay(int delay)
{
int i;
for(; delay>0 ;delay--){for(i =0; i<3195;i++);}}

int main()

{
log_info("Hello from STM32F429ZITx");	
	while(1){
		sprintf(x,"variable is:%u ",var);
		var++;
		delay(1000);
		log_info(x);
	}
}