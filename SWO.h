#ifndef __SWO__h
#define __SWO__h
#include <stdio.h>
#include "stm32f4xx.h"                  // Device header

void log_error(char *p);
void log_info(char *p);
void log_debug(char *p);
void log_debug_array(char const * const label, void const *array, uint16_t const len);
#endif
