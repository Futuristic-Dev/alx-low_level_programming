#include "main.h"

/**
 * main - main function
 * Description - print out lower case alphabets in with their
 * ASCII values
 *
 * Return: always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
	
