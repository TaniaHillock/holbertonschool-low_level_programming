#include "main.h"
/**
* _strlen - returns the lengh of a string
* @s: the string
* Return: int, length of the string
*/
int _strlen(char *s)
{
int l=0;

while (*(s + l) != '\0')
{
l++;
}
return (l);
}
