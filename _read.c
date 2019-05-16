#include "lifo_fifo.h"
/**
 *read_file - this is the function to read the file
 *@mystring: entry string
 *@stack: entry stack
 *
 *Return: 0
 */
void read_file(char *mystring, stack_t **stack)
/* int main(int argc, char **argv) */
{
	int count = 0;
	FILE *file = fopen(mystring, "r");

	if (file)
	{
		char line[128];
		char **arguments;

		(void)stack;
		while (fgets(line, sizeof(line), file) != NULL)
		{
			count++;
/*DEBUG::			printf("%s", line);*/
			arguments = _strtok(line);
			verifier(arguments, stack, count);
		}
		fclose(file);
	}
	else
	{
		printf("Error: Can't open file\n, %s", mystring);
		exit(EXIT_FAILURE);
	}
}
