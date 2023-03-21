#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @num: the integer to compute the absolute value of.
 *
 * Return: the absolute value of the integer.
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
