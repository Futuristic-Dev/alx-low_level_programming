#include <stdlib.h>
#include <time.h>
/* Here contains the Headers */
#include <stdio.h>
/* betty style doc for the main function in here */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	$rand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Body of code */
	if (n > 0)
		print("%d is positive", n);
	else if (n == 0)
	 	print("%d is zero", n);
	else
		print("%d is negative", n);	
	return (0);
}
