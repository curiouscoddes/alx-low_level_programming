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
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
