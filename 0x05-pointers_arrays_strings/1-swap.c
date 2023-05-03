#include "main.h"

/**
 * swap_int - swap the values of two integers
  *
  * @i: takes in the address and swaps j
  * @j: takes in the address and swaps i
  * Return: 0
  */

void swap_int(int *i, int *j)
{
	int swap;

	swap = *j;
	*j = *i;
	*i = swap;
}
