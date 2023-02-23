#include <stdio.h>
/**
 * main - prints _putchar
 * followed by a new line.
 * Return: (0) to success.
*/

int main(void)
{
  int str[] = {95, 112, 117, 116, 99, 104, 97, 114, 00};
int i, j;
j = sizeof(str) / sizeof(int);
 for (i = 0; i < j; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
