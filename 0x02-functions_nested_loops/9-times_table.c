#include "main.h"
#include <stdio.h>
/**
 * times_table - prints times table
 * Return: doest have return type
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			printf("%d, ", k);
			if (i <= 9)
				printf("\n");
		}
	}
}
