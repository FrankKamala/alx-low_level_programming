#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _puts - print out string
* Return: void
* @str: Pointer s
*/

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
