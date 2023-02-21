#include <stdio.h>
/**
 * main - prints lowercase alphabet
 * then the uppercase alphabet
 * followed by a new line.
 * Return: (0) to success
*/
int main(void)
{
char l_u_alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(l_u_alphabet[i]);
}
putchar('\n');
return (0);
}
