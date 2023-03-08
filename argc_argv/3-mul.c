#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers.
* followed by a new line.
* @argc: the count of arguments.
* @argv: the array with the strings of arguments.
* Return: 0 for success, 1 for Error.
*/
int main(int argc, char *argv[])
{
int result; 
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
}
