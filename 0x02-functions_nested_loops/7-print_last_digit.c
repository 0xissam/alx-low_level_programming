#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: the number whose last digit is to be printed.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
