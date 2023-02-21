#include <stdio.h>
/**
 * main - prints all base 16 numbers
 * in lowercase,
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
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
