#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: minimum value.
* @max: maximum value.
* Return: pointer to the newly created array.
* if min > mix, returns NULL.
* if malloc fails, returns NULL.
*/
int *array_range(int min, int max)
{
int *ar;
int i;

if (min > max)
return (NULL);

ar = malloc(sizeof(*ar) * ((max - min) + 1));

if (ar == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)/*From min included to max included*/
ar[i] = min;/*The array created contains all the values*/

return (ar);
}
