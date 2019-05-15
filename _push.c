#include "lifo_fifo.h"
/**
 *_push - this is the main function to process all functions
 *
 * @stack: stack that receives
 * @line_number: Number that receives
 *Return: 0
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	stack_t *copy;

	if (!stack)
		/* return (0); */
		return;
	new = malloc(sizeof(stack_t));
	if (!new)
		/* return (NULL); */
		return;
	new->n = line_number;
	new->next = NULL;
	if (!*stack)
	{
		new->prev = NULL;
		*stack = new;
		return;
		/* return (*head); */
	}
	copy = *stack;
	while (copy->next)
		copy = copy->next;
	copy->next = new;
	new->prev = copy;

	/* return (new); */
}
