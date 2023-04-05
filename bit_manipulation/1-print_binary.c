#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
    int i;
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1); // Initialize mask to 1 followed by all zeros
    
    for (i = 0; i < sizeof(unsigned long int) * 8; i++) {
        _putchar((n & mask) ? '1' : '0'); // If the current bit is 1, print '1', otherwise print '0'
        mask >>= 1; // Shift the mask one bit to the right
    }
    _putchar('\n'); // Print a newline character at the end
}
