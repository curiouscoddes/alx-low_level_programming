#include "main.h"
/**
 * swap_int - swap int b with int a using &(addrresof)
 * @a: parameter a to be swapped
 * @b: parameter b to be swapped
 * Return: nothing
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
