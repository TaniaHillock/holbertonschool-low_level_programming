#include "3-calc.h"

/**
* main - prints the result of the operation.
* @argc: argument count.
* @argv: argument vector.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int a, b;
int (*operation)(int, int);

/*if the number of arguments is wrong*/ 
if (argc != 4) 
{
printf("Error\n");
exit(98);
}

/*if the operator is none of the included in vector*/ 
if (argv[2][1]) 
{
printf("Error\n");
exit(99);
}

/*if the operator is missing*/
operation = get_op_func(argv[2]);

if (operation == NULL) 
{
printf("Error\n");
exit(99);
}
 
/*convert from string input to int*/
a = atoi(argv[1]);
b = atoi(argv[3]);

/*prints the result of the operation followed by a new line*/
printf("%d\n", operation(a, b));
return (0);
}
