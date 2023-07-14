#include <stdio.h>
/**
 * main - print lower case and uppercase
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}

	for (b = 65; b <= 90; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
