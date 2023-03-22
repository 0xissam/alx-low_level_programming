#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: 0
*/
void positive_or_negative(int i)
{

	/* your code goes there */


	if (i > 0)
	{

	printf("%d is positive\n", i);

	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	printf("%d is zero\n", i);

}
