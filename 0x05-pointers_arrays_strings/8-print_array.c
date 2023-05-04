#include "main.h"

/**
  * print_array - to print n elements of array of integers
  *
  * @a: array
  * @l: length of array
  */

void print_array(int *a, int l)
{
	int array;

	for (array = 0; array < l; array++)
	{
		printf("%d", a[array]);

		if (array != (l - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
