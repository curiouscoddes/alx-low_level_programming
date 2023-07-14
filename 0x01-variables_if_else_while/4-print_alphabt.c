#include <stdio.h>
/**
 * main - Prints all lower case except e and q
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
