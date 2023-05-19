#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - to allocate memory using malloc
  * @b: bytes to allocate
  * @p: pointer to be returned
  * Return: a pointer to the memory allocated
  * if malloc fail, status value is 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;
		p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
