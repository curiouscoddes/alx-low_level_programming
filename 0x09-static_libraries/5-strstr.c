#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - a function
 * @haystack: param
 * @needle: param
 * Return: always 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
