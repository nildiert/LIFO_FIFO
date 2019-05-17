#include "monty.h"
int global;
/**
 * *add_dnodeint - check the code for Holberton School students.
 * @head: list
 * @n: New element
 * Return: Always EXIT_SUCCESS.
 */

stack_t *add_dnodeint(stack_t **head, unsigned int n)
{

	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
