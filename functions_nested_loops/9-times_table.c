#include "main.h"
/**
*times_table - prints the 9 times table.
*Return: (void) no return.
*/
void times_table(void)
{
int a, b, res;
 for (a = 0; a <= 9; a++)
   {
     _putchar(48);
     for(b = 1; b <= 9; b++)
       {
	 res = a * b;
	 _putchar(44);
	 -putchar(32);
	 if (res <= 9)
	   {
	     _putchar(32);
	     _putchar(res+48);
	   }
	 else
	   {
	     _putchar((res / 10) + 48);
	     _putchar((res % 10) + 48);
	   }
       }
     _putchar('\n');
   }
}
