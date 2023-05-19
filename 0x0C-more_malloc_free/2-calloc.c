#include <stdlib.h>
#include "main.h"

/**
 * *_memset - allocates memory for an array
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy byte
 *
 * Return: pointer to the allocated memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

