#include "main.h"
/**
 * factorial - calculate factorial of a number
 * @n: parameter to be passed 
 * Return: return -1 for -ve no and 1 for 0 else return fact
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return n * factorial (n - 1);

}
