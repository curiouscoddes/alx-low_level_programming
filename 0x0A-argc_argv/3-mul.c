#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - main program
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 a success
 *
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 1)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
