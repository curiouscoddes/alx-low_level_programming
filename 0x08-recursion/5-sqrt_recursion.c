#include "main.h"
int sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - return the natural sqrt of a number
 * @n: number (parameter) to calc square root of
 * Return: return the result of the square root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
/**
 * sqrt_recursion - recurses to find natural sqrt
 * @n: number (parameter) to calc sqrt of
 * @i: iterator.
 * Return: the resulting square root
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (sqrt_recursion(n, i + 1));
}
