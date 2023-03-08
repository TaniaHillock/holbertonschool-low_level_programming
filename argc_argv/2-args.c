#include "main.h"
#include <stdio.h>
/**
* main - prints all arguments it receives.
* one argument per line, ending with a new line.
* @argc: the count of arguments.
* @argv: the array with the strings of arguments.
* Return: 0 for success.
*/
int main(int argc, char *argv[])
{
int i;
for(i = 1; i < argc; i++)
{
printf("%s\n",argv[i]);
}
return (0);
}
