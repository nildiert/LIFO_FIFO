#include "lifo_fifo.h"
/**
 *read_file - this is the function to read the file
 *@mystring: File received on the Standard Input
 *Return: 0
 */
<<<<<<< HEAD
void read_file(char *mystring)
=======
void read_file(char *mystring, stack_t **stack)
/* int main(int argc, char **argv) */
>>>>>>> staging
{
	int count = 0;
	FILE *file = fopen(mystring, "r");
	char line[128];
	char **arguments;
	char *opcod;

<<<<<<< HEAD
	while fgets(line, sizeof(line), file) != NULL)
	{
	count++;
	arguments = _strtok(line);
	opcod = get_verifier(arguments[0]);
	}
fclose(file);
=======
	(void)stack;
		while ( fgets ( line, sizeof line, file ) != NULL )
                {

			count++;
/*DEBUG::			printf("%s", line);*/
			arguments = _strtok(line);
			verifier(arguments, stack, count);
	
                }
                fclose ( file );
>>>>>>> staging
}
