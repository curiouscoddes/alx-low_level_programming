#include "main.h"

/**
 * print_last_digit - A function to  print the last digit of a number
 *
 * @n: number parameter
 * Return: return the n%10
 */
int print_last_digit(int n)
{
	int ln;

	ln = n % 10;

	if (ln < 0)
		ln = -(ln);
	_putchar(ln + '0');
	return (ln);
}
