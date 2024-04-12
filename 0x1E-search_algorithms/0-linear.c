#include <stdio.h>
#include <stdlib.h>

/**
 * linear - searches for a value in an array of integers 
 * using the Linear search algorithm
 * @array: a pointer to the first element
 * @value: the value to search for
 * @size: number of elements in the array
 * Return: value if array is not NULL
 * else -1.
*/

int linear_search(int *array, size_t size, int value)
{ 
	size_t i;

	if (array == NULL)
	{
		return(-1);
	}
	for (i = 0; i < size; ++1)
	{
		printf("Value cheched array[%lu} =  [%d]\n", 1, array[i];

		if (array[i] == value)
			return(i);
	}
	return (-1;
}
