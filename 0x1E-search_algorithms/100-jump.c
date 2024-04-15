#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump - searches for a value in a sorted array of integers with Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present in array, or\n
 * if array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	int block_size, block;
	int i = 0, holder = 0;
	
	if (array == NULL || size == 0)
	{
		return (-1);
	}


	block = sqrt((int)size);
	block_size = block;

	printf("Value checked array[%d] = [%d]\n", holder, array[holder]);

	while (array[block] <= value && block <= (int)size - 1)
	{
		if (array[i] == value || array[block] == value)
		{
			break;
		}
		
		holder = block;
		printf("Value checked array[%d] = [%d]\n", holder, array[block]);
		block = block + block_size;
	}

	printf("Value found between indexes [%d] and [%d]\n", holder, block);

	while (holder <=  block)
	{
		if (holder >= (int)size)
		{
			return (-1);
		}


		if (array[holder] == value)
		{
			return (holder);
		}
		holder++;
	}
	return (-1);
}
