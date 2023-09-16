#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143w
 * @num: parameter number
 * @largest_prime_factor: prints the output
 *
 * Return: 0
 */

long largest_prime_factor(long num)
{
	long i;

	while (num % 2 == 0)
	{
		num /= 2;
	}
	for (i = 3 ; i * i <= num ; i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}
	return (num);
}

int main(void)
{
	long n = 612852475143;
       	long result = largest_prime_factor(n);

	printf("The largest prime factor of %ld is: %ld\n", n, result);

	return (0);
}
