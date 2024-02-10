#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - a function
 * @s: parameter list
 * @b: parameter list
 * @n: parameter list
 * Return: always 0 a success
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
