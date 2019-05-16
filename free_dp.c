#include "lifo_fifo.h"
/**
 *
 */
int *len_stack(char **stack)
{
	char *counter;
	int *size;

	counter = *stack;
	while (counter != NULL)
	{
		counter = counter->next;
		size++;
	}

	return (size);

}
void free_dp(char **stack, int *size)
{ 
	int aux = *size;
	int i;

	for (i = 0; i < aux; i++)
	{
		free(stack[i]);
	}
}
void free_aux(char **stack)
{
	stack_t *actual;

	while (*stack != NULL)
	{
		actual = *stack;
		*stack = (*stack)->next;
		free(actual);
	}
}
