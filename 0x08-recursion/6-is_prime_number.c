#include "main.h"
int _prime_no(int n, int i);
/**
 * is_prime_number - determines is a number is prime or not
 * @n: number (parameter) to be evaluated
 * Return: 1 if n is prime, 0 otherwise
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_no(n, n - 1));
}
/**
 * _prime_no - calculate if a number is prime recursively
 * @n: number (parameter) to be evaluated
 * @i: iterator
 * Return: 1 if n is prime, 0 otherwise
 *
 */
int _prime_no(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime_no(n, i - 1));
}
