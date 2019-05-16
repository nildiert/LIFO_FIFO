#include "lifo_fifo.h"
/**
 *read_file - this is the function to read the file
 *
 *Return: 0
 */
void read_file(char *mystring, stack_t **stack)
/* int main(int argc, char **argv) */
{
	int count = 0;
        FILE *file = fopen ( mystring, "r" );
	char line [ 128 ];
	char **arguments;

	printf("::DEBUG:: read_file\n");
	(void)stack;
		while ( fgets ( line, sizeof line, file ) != NULL )
                {
			count++;
/*DEBUG::			printf("%s", line);*/
			arguments = _strtok(line);
			verifier(arguments, stack, count);
			printf("%s %s line:: %d \n", arguments[0], arguments[1], count);

                }
                fclose ( file );
}
