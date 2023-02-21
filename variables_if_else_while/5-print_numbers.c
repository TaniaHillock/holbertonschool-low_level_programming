#include <stdio.h>
/**
 * main - prints single digit numbers
 * starting from 0
 * followed by a new line.
 * Return: (0) to success
*/
int main(void)
{
int i;

for(i = 0; i < 10; i++)
{
printf("%d", i);
}
putchar('\n');
return (0);
}
