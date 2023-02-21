#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints lowercase alphabet
 * followed by a new line,
 * except q and e.
 * Return: (0) to success
*/
int main(void)
{
int i;

for (i = 97; i < 123; i++)
{
if ((i != 101) && (i != 113))
{
putchar(i);
}
}
putchar('\n');
return (0);
}
