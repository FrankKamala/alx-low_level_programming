#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _puts - print out string
* Return: void
* @str: Pointer s
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
