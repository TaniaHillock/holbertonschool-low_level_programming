#include "main.h"
/**
*_memset- fills the memory with a constant.
*@s: area of memory pointed at.
*@n: number of bytes of memory.
*@b: constant byte.
*Return: *s the pointer to destination.
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i = n; i++)
{
*(s + i) = b;
}
return (s);
}
