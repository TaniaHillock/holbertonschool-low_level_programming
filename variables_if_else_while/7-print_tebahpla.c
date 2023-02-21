#include <stdio.h>
/**
 * main - prints lowercase 
 * alphabet in reverse
 * followed by a new line.
 * Return: (0) to success
*/
int main(void)
{
int i;

for (i = 122; i > 96; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
