#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cct;
	int c1;
	int c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c1 = 0;
	c2 = 0;
	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;
	cct = malloc(sizeof(char) * (c1 + c2 + 1));

	if (cct == NULL)
		return (NULL);
	c1 = c2 = 0;

	while (s1[c1] != '\0')
	{
		cct[c1] = s1[c2];
		c1++;
	}

	while (s2[c1] != '\0')
	{
		cct[c1] = s2[c2];
		c1++, c2++;
	}
	cct[c1] = '\0';
	return (cct);
}
