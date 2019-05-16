#include "lifo_fifo.h"
/**
 *read_file - this is the function to read the file
 *@mystring: File received on the Standard Input
 *Return: 0
 */
void read_file(char *mystring)
{
	int count = 0;
	FILE *file = fopen(mystring, "r");
	char line[128];
	char **arguments;
	char *opcod;

	while fgets(line, sizeof(line), file) != NULL)
	{
	count++;
	arguments = _strtok(line);
	opcod = get_verifier(arguments[0]);
	}
fclose(file);
}
