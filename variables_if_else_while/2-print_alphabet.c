#include <stdio.h>
/**
 * main - prints lowercase alphabet
 * followed by a new line.
 * Return: (0) to success
*/
int main(void)
{
char lower_case_alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

 for (i = 0; i < 26; i++)
   {
   putchar(lower_case_alphabet[i]);
   }
putchar('\n');
return (0);
}
