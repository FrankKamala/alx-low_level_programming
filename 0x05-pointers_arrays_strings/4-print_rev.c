#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - print out string in reverse
* Return: void
* @s: Pointer s
*/
void print_rev(char *s)
{
int i = 0;
while (s[i])
	i++;

while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
