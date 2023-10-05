#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *s;

	if  (s1 == NULL)
		s1 = "";
	if  (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1++;

	for (i = 0; s2[i] != '\0'; i++)
		s2++;

	s = malloc((sizeof(char) * (s1 + s2) + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		s[s1 * i] = s2[i];
	return (s) ;
}
