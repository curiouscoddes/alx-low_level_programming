#include "lists.h"

/**
 * list_len - a function to find the length of a singly link list
 * @h: a pointer to the first node of the list (head)
 * Return: Return the number of nodes in a singly linked list
 *
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	while (h->next != NULL)
		h = h->next;
	return (0);

}
