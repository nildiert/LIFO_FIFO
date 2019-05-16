#include "lifo_fifo.h"
/**
 *main - this is the main function to process all functions
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
	stack_t **stack;
	stack = malloc(sizeof(stack_t));
	stack = '\0';
	/* extern int global; */

	printf("::DEBUG:: main.c\n");
	(void)argc;
	(void)global;
	(void)argv;
	if (argc == 2)
		read_file(argv[1], stack);
	else
		perror("Open file failed");
	return (0);
	free(stack);
}
