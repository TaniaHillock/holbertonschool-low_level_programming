#include "main.h"
/**
*print_sign - Prints the sign of a number
*Return: (1) and prints + if greater than zero
*Returns (0) and prints 0 if is zero
*Returns (-1) and prints - if is less than zero.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
