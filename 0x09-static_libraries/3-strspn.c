#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - function
 * @s: param 
 * @accept: param
 * Return: always 0 success
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
