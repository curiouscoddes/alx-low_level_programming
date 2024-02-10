#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - a function
 * @s: param
 * @accept: param
 * Return: always 0 success
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
