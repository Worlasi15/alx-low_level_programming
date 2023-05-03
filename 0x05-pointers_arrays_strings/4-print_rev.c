#include "main.h"

/**
  * print_rev - this function prints string in reverse
  * @s: points to the string
  * Return: 0
  */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
