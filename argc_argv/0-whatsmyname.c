#include "main.h"
#include <stdio.h>
/**
* main - prints its name, followed by a new line.
* @argc: the argument that contains the count of arguments.
* @argv: the array that contains the strings of arguments.
* Return: 0 if success.
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
