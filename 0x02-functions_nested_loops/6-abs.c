#include "main.h"

/**
 * _abs - a function to print the absolute value of a number
 *
 * @n:  parameter value (input)
 * Return: 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}
