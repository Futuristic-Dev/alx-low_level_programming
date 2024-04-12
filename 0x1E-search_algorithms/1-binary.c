#include "search_algos.h"
#include <stddef.h>

/**
 * binary_search - Binary serarch algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
		{
			return (mid);
		}
		else
			right = mid - 1;
	}

	return (-1);
}
