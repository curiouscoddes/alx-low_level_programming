#include "main.h"
/**
 * _isalpha - check whether a parameter is letter
 *
 * Return: return 1 if _isalpha() 0 otherwise
 *
 *  @c: parameter
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
