#include <stdio.h>
/**
 * main - print all possible combinations of nums 0-9
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 59)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
