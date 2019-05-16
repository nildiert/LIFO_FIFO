#include "lifo_fifo.h"
/**
 *main - this is the main function to process all functions
 *@argc: the two arguemts
 *@argv: stdi for excev
 *Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	if (argc == 2)
		read_file(argv[1]);
	else
		perror("Open file failed");
	return (0);
}
