#include "lists.h"

/**
 * print_list - prints all the elements of list_t list
 * @l: singly linked list
 * Return: number of elements in the list
 */

size_t print_list(const list_t *l)
{
	size_t numofelem;

	numofelem = 0;
	while (l != NULL)
	{
		if (l->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", l->len, l->str);
		l = l->next;
		numofelem++;
	}
	return (numofelem);
}
