#include "lists.h"

/**
 * free_list - Frees the memory allocated for a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function iterates through each node in the linked list,
 * frees the memory allocated for the string in each node, and then frees the
 * node itself. It ensures that memory is deallocated properly.
 */

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
