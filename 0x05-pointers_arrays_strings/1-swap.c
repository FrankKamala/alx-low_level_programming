#include "main.h"
#include <stdio.h>
/**
* swap_int - reset argument value to 98
* Return: void
* @a: pointer
* @b: second pointer
*/
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
