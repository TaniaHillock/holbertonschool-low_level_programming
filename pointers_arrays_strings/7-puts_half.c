#include "main.h"
/**
* puts_half - prints half of a string
* followed by a new line.
* @str: input string.
* Return: void no return.
*/
void puts_half(char *str)
{
int l = 0, i;

/*counts how long is the string*/
while (l >= 0)
{
if (str[l] == '\0')
break;
l++;
}
/*states the ending of the half*/
if (l % 2 == 1)
i = l / 2;
else
i = (l - 1) / 2;
/*prints the sting and stops at half*/
for (i++; i < l; i++)
_putchar(str[i]);
/*followed by a new line*/
_putchar('\n');
}
