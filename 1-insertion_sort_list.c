#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - ...
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *mylist, *temp;

	if (!list || !*list || !(*list)->next)
		return;
	mylist = *list;
	do {
		while (mylist->next && (mylist->n > mylist->next->n))
		{
			temp = mylist->next;
			mylist->next = temp->next;
			temp->prev = mylist->prev;

			if (mylist->prev)
				mylist->prev->next = temp;

			if (temp->next)
				temp->next->prev = mylist;

			mylist->prev = temp;
			temp->next = mylist;

			if (temp->prev)
				mylist = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		mylist = mylist->next;
	} while (mylist);
}
