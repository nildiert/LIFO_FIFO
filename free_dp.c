#include "lifo_fifo.h"
/**
 *
 */
int *len_stack(stack_t **stack)
{
	stack_t *counter;
	int *size;

	counter = *stack;
	while (counter != NULL)
	{
		counter = counter->next;
		size++;
	}

	return (size);

}
void free_dp(stack_t **stack, int *size)
{ 
	int aux = *size;
	int i;

	for (i = 0; i < aux; i++)
	{
		free(stack[i]);
	}
}
void free_aux(stack_t **stack)
{
	stack_t *actual;

	while (*stack != NULL)
	{
		actual = *stack;
		*stack = (*stack)->next;
		free(actual);
	}
}
