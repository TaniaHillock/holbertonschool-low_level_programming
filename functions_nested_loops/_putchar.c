#include <unistd.h>
#include "main.h"

/**
 *_putchar - writes the character c to stdout
 *@c: The character that we want to print
 *Return: (1) sucess, (-1) on error
 *errno is set
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
