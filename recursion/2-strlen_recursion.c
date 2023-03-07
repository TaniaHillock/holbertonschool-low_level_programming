#include "main.h"
/**
* _strlen_recursion - returns the lenght of a string.
* @s : pointer to the string.
* Return : int @l the lenght of the string.
*/
int _strlen_recursion(char *s)
{
int l = 0;  
if (*s != '\0')
{
_strlen_recursion(s + 1);
l++;
}
return (l);
}
