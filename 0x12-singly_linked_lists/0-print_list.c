#include "lists.h"

/**
 * print_list - a func that prints all the elements of a linked list
 * @h: pointer to a linked list head
 * Return: returns the total number of nodes in a linked list
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	}
	printf("[%u], %s\n", h->len, h->str);
	return (i);
}
