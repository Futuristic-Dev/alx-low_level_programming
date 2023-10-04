#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: 0(success)
 */

char *_strdup(char *str)
{
	int a = 0, i = i;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < 1)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
