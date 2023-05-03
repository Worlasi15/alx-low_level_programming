#include "main.h"

/**
  * string_len - length of string
  * @s: checks string
  * Return: length of string
  */

int string_len(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
