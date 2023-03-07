#include "main.h"
/**
* _print_rev_recursion - prints a strin in reverse.
* @s : is a char pointer that indicates the string.
* Return : Void, no return.
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
