#include "lifo_fifo.h"
/**
 *get_verifier - Gets the right function to the monty op string
 *@argue: Operator received, based on the Read file
 *Return: Pointer to the right function
 */
void get_verifier(char *argue)
{
	int comp;

	instruction_t instructions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
/*		{"swap", _swap},
		{"add", _add},*/
		{"nop", _nop},
		{NULL, NULL}
	};
	int i = 0;

	while (instructions[i] != NULL)
	{
		if (strcmp(instructions[i].opcode, argue)
		{
			return (instructions[i].f);
		}
		i++;
	}
	return (0);
}
