#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to be printed
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int _sqrt = i * i;
	
	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

