#include <stdio.h>
/**
 * main - prints single digits
 * of base 10 starting form 0
 * followed by a new line.
 * Return: (0) to success
*/
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
