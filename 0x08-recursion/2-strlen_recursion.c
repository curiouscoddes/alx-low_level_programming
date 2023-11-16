#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: string parameter to be measured
 * Return: return the actual length of a string
 *
 */
int _strlen_recursion(char *s)
{
	int intlen = 0;

	if (*s)
	{
		intlen++;
		intlen += _strlen_recursion(s + 1);
	}
	return (intlen);
}
