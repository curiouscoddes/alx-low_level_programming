#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - a function
 * @dest: parameter value
 * @src: parameter value
 * @n: parameter value
 * Return: always 0 a success
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
