#include "lists.h"

/**
 * print_list - prints all strings in a linked list
 * @h: list parameter
 * Return: numbers of strongs encountered in the list
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	if (*h == NULL)
	{
		i = 0;
		printf("[0] ");
		printf("(nil)\n");
	}

	while(*h != NULL)
	{
		i++;
		char str = *h;
		int j = 0;
		while (str != '\0')
		{
			j++
			printf("[%d] ", j);
		}	
		printf("%s\n", *h);
		h++;
	}
	return (i);
}
