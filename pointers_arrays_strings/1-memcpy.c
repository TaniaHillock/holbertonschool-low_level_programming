#include "main.h"
/**
* _memcpy - copies bytes from a memory area.
* @dest: destination area to copy the bytes.
* @src: memory area copied.
* @n: bytes from memory area.
* Return: a pointer to dest.
*/

char *_memcpy(char *dest, char *scr, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(dest + i) = *(scr + i);
return (dest);
}
