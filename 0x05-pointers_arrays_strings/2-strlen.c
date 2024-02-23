#include "main.h"
/**
 * _strlen - a func that returns the length of a string
 * @s: pointer to string
 * Return: returns the actual lengh of the string
 * .
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len ++;
		s++;
	}
	return (len);
}
