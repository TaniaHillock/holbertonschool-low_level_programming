# include "main.h"
/**
* _puts_recursion - prints a string
* followed by a new line.
* @s: address to the place where the
* string begins.
* Returns: void, no return.
**/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
