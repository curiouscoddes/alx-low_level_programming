#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * Return: return 0 if 0, 1 if positive, -1 if negative
 *
 * @n: parameter n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
		_putchar('-');
	return (-1);
}
