#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes;

	/**
	 *If the number of argument is not the correct one,
	 *print Error, followed by a new line,
	 *and exit with the status 1
	 */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/*convert the argument to an int*/
	nbytes = atoi(argv[1]);

	/**
	 *If the number of bytes is negative,
	 *print Error, followed by a new line,
	 *and exit with the status 2
	 */
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	/**
	 *prints the opcodes of its own main function,
	 *opcodes should be printed in hexadecimal, lowercase,
	 *each opcode is two char long
	 *listing ends with a new line
	 */
	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
