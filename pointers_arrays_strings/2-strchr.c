#include "main.h"
/**
* _strchr - locates a character in a string.
* @s : the string evaluated.
* @c : the first occurence of the character.
* Return: a pointer to the first c or NULL if not found.
*/

char *_strchr(char *s, char c)
{
int i;
  
for( i = 0; *(s + i) != '\0'; i++)
if (*(s + i) == 'c')
{
return (s + 1);
}
return ('\0');
}
