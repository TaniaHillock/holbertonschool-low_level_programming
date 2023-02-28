#include "main.h"
/**
* _atoi - converts a string to an integer.
* @s: input string.
* Return: integer.
*/
int _atoi(char *s)
{
unsigned int l = 0, size = 0, oi = 0, pn = 1, m = 1, i;

while (*(s + l) != '\0')
{
if (size > 0 && (*(s + l) < '0' || *(s + l) > '9'))
break;

if (*(s + l) == '-')
pn *= -1;

if ((*(s + l) >= '0') && (*(s + l) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
l++;
}

for (i = l - size; i < l; i++)
{
oi = oi + ((*(s + i) - 48) * m);
m /= 10;
}
return (oi * pn);
}
