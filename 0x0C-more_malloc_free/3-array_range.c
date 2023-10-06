#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum limit
 * @max: maximum limit
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int *a, i = 0;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return(NULL);

	while (i < size)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a) ;
}

		

	
