#include "main.h"
/**
 * _puts_recursion - a recursive function
 * @s: parameter value
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
