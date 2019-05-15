#include "lifo_fifo.h"
/**
 *read_file - this is the function to read the file
 *
 *Return: 0
 */
int read_file(void)
{
	char filename;
	FILE *fp;

	gets(filename);
	fp = fopen(filename, "r");

	if (fp == NULL)
	{
	perror("Error while opening the file.\n");
	exit(EXIT_FAILURE);
	}
	return (0);
}
