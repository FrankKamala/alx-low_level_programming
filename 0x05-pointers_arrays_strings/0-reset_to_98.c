#include "main.h"
#include <stdio.h>
/**
* main - check the code
* Return: Always 0.
* parameter - n
*/

void reset_to_98(int *n)
{
int  num = 98;
n = &num;
printf("value of N is:%d", *n);

}
