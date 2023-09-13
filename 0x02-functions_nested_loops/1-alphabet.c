#include "main.h"

/**
 * main - print alphabet function
 *
 * a function that prints an alphabet
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

