#include "main.h"
/**
 * _islower - check for lower case characters
 *
 * Return: returns 1 if islower() and 0 otherwise
 * @c:  parameter  to be printed
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
