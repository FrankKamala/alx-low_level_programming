#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - length of string
* Return: void
* @s: Pointer s
*/
int _strlen(char *s)
{
int u = 0;
while (s[u])
u++;

return (u);
}
