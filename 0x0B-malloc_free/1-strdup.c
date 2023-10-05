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
	char *s;
	int i, count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		count++;

	s = malloc((sizeof(char) * count + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s) ;
}
