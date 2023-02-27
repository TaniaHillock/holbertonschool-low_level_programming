#include "main.h"
/**
* puts2 - prints every other character
* starting with the first one of a string
* followed by a new line.
* @str: input string.
* Return: void no return.
*/
void puts2(char *str)
{
int l = 0;

while (l >= 0)
{
if (str[l] == '\0')
{
_putchar('\n');
break;
}
if (l % 2 == 0)
_putchar(str[l]);
l++;
}
}
