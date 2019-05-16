#include "lifo_fifo.h"
/**
 *verifier - Verify coincidence on a structure predefined
 *Return: If coincidence 0, else 1
 */
void verifier(char **reception, stack_t **stack, int line)
{
	int j = 0;

	instruction_t instructions[] = {
		{"push", _push},
		{"pall", _pall},
/*		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},*/
		{NULL, NULL}
	};

	/* (void)reception; */
	/* (void)j; */
	/* (void)instructions; */
	/* (void)stack; */
	/* (void)line; */

	for (j = 0; instructions[j].opcode; j++)
	{

		if (!(strcmp(instructions[j].opcode,reception[0])))
		{
			instructions[j].f(stack, (unsigned int)line);
			break;
		}
	}

/*	for (j = 0; instructions[j].opcode; j++).
	{
		if (reception[0] == *(instructions[j].opcode))
			printf("%s", reception[0]);
			}*/
}
