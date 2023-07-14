#include <stdio.h>
/**
 * main - a program to print lower case letters
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
		putchar('\n');
	}
	return (0);
}
