#include "lifo_fifo.h"
/**
 *main - this is the main function to process all functions
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
        int fd = open(argv[1], O_RDONLY);
        int size= 1024, count = 0;
	FILE *file = fopen ( argv[1], "r" );
	char **arguments;

	(void)argc;
	(void)argv;
	(void)fd;
	(void)size;

	if ( file != NULL )
	{
		char line [ 128 ]; /* or other suitable maximum line size */
		while ( fgets ( line, sizeof line, file ) != NULL )
		{
			count++;
			arguments = _strtok(line);
			printf("Main::[ %s ][ %s ] Strtok Arg\n", arguments[0], arguments[1]);
		}
		fclose ( file );
	}
	return (0);
}
