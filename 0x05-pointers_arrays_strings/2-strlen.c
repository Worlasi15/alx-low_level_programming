#include "main.h"

/**
  * string_len - length of string
  * @s: checks string
  * Return: 0
  */

int string_len(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
