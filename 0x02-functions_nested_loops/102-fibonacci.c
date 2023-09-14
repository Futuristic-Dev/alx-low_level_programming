#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int term_1 = 1;
	unsigned long int term_2 = 2;
	int i;
	unsigned long int next;

	printf("%lu, ", term_1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", term_2);
		next = term_1 + term_2;
		term_1 = term_2;
		term_2 = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
