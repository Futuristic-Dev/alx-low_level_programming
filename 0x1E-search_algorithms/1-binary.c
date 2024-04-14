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
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d%s", array[i], i == right ? "\n" : ", ");
		}


		if (array[mid] < value)
		{
			left = mid + 1;
		}

		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
			return (mid);

	}

	return (-1);
}
