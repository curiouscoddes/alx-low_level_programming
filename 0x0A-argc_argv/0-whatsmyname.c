#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: argument count parameter
 * @argv: argument vector parameter
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
