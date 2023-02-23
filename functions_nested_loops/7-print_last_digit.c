#include "main.h"
/**
*print_last_digit - prints the last digit.
*Return: (u) the digit on the units place.
*/
int print_last_digit(int d)
{
int u;
u = d % 10;
if (u < 0)
{
_putchar(-1 + 48);
return (-1);
}
else
{
_putchar(1 + 48);
return (1);
}
}
