#include "SWO.h"

struct __FILE {int handle;/* Add whatever you need here */};

FILE __stdout;
FILE __stdin;

int fputc(int ch, FILE *f)
{
  ITM_SendChar(ch);
  return(ch);
}


void log_error(char *p)
{

	printf("log Error: ");

		printf((char*)p);
printf("\r\n");


}

void log_info(char *p)
{

	printf("log info: ");

		printf((char*)p);
printf("\r\n");


}

void log_debug(char *p)
{

	printf("log debug: ");

		printf((char*)p);
printf("\r\n");


}