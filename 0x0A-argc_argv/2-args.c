#include <stdlib.h>
#include <stdio.h>
/**
 * main - main program
 * @argc: argument count param
 * @argv: argument vector param
 * Return: always 0 success
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
