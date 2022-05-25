#include "lists.h"
/**
 * list_len - a function that returns the number of nodes present
 * @h: parametera
 * Return: returns the number of nodes in an element
 */

size_t list_len(const list_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
