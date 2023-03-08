#define "main.h"
#define <stdio.h>
/**
* main - prints the number of arguments passed into it.
* followed by a new line.
* @argc: the number of arguments.
* @argv: array with the strings of arguments.
* Return: 0 for success.
*/
int main (int argc, char *argv[] __attribute__ ((unused)))
{
  printf ("%d\n", argc - 1);
  return (0);
}
