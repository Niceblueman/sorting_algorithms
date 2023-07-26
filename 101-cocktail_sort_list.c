#include "sort.h"
/**
 * swap - Swaps two nodes of doubly linked list
 * @node: node base to change
 * @list: double link list head
 * Return: void
 */
void swap(listint_t **node, listint_t **list)
{
	listint_t *temp = *node, *temp2, *temp3;

	if (!(*node)->prev)
		*list = (*node)->next;

	temp = temp3 = *node;
	temp2 = temp->next;

	temp->next = temp2->next;
	temp3 = temp->prev;
	temp->prev = temp2;
	temp2->next = temp;
	temp2->prev = temp3;

	if (temp2->prev)
		temp2->prev->next = temp2;
	if (temp->next)
		temp->next->prev = temp;
	*node = temp2;
}

/**
 * cocktail_sort_list - ...
 * @list: head of list to be sortered (Double Linked List)
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *head, *temp;
	int c = 0, n = -1, m = -1;

	if (!list || !(*list) || (!((*list)->prev) && !((*list)->next)))
		return;
	head = *list;
	for (; m >= n; n++)
	{
		for (; head->next && c != m; c++, head = head->next)
		{
			if (head->n > head->next->n)
			{
				temp = head;
				swap(&temp, list);
				print_list(*list);
				head = temp;
			}
		}

		if (n == 0)
			m = c;
		m--;
		for (; head->prev && c >= n; c--, head = head->prev)
		{
			if (head->n < head->prev->n)
			{
				temp = head->prev;
				swap(&temp, list);
				print_list(*list);
				head = temp->next;
			}
		}
	}
}
