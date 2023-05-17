#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to duplicate oto new memory
 * @str: string to be duplicated
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[i]; j++)
		p[j] = str[j];
	{
		return (p);
	}
}

