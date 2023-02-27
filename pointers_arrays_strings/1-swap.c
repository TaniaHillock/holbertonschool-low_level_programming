#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: the address to first integer
* @b: the address to second integer
* Return: Void, no return value
*/
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
