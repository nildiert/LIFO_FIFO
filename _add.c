#include "lifo_fifo.h"
/**
 *_add - Adds two elements on the stack, and reassign the head
 *@stack: Pointer of the stack
 *@line_number: Priority on the stack
 *Return: nothing
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	int size = 0;

	node = (*stack);

	while (node)
	{
		size++;
		node = node->next;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	node = (*stack)->next;
	node->next->n += node->next;
	free(*stack);
	node->prev = NULL;
	(*stack) = node;
}
