#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds positive numbers.
* followed with a new line.
* prints 0 if not numbers passed.
* @argc: the count of arguments.
* @argv: the array with the strings of arguments.
* Return: 0 for success. 1 for Error.
*/
int main(int argc,char *argv[])
{
int i, j;
int result;
if (argc == 0)
{
printf("0\n");
return (1);
}
 if (argc != 0)
{
for(i = 1; i < argc; i++)
{
if (!isdigit(argv[i]))
{
printf("Error\n");
}
 return (1);
 }
}
else
{
for (j = 1; j < argc; j++)
{
result += atoi(argv[j]);
}
printf("%d\n", result);
return (0);
}
}
}
