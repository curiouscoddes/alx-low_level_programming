#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the main function
 * @argc: argument count parameter
 * @argv: argument vector parameter
 * Return: always 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
