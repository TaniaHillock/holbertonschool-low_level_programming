#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: first string.
* @s2: second string.
* @n: amount of bytes.
*
* Return: pointer to the allocated memory.
* if malloc fails, status value is equal to 98.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *sout;
unsigned int ls1, ls2, lsout, i;

if (s1 == NULL) /*Verify the string is not empty*/
s1 = "";

if (s2 == NULL)
s2 = "";

for (ls1 = 0; s1[ls1] != '\0'; ls1++) /*Count how long is s1 and save in ls1*/
;

for (ls2 = 0; s2[ls2] != '\0'; ls2++)
;

if (n >= ls2) /*If n is greater or equal to s2 then use the entire s2*/
n = ls2;

lsout = ls1 + n; /*The lenght of the string coming out*/

sout = malloc(lsout + 1); /*Reserve memory, add a space for null*/

if (sout == NULL) /*If the function fails allocating the memory returns NULL*/
return (NULL);

for (i = 0; i < lsout; i++)
if (i < ls1)
sout[i] = s1[i];
else
sout[i] = s2[i - ls1];

sout[i] = '\0';

return (sout);
}
