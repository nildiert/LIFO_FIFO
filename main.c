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
			printf("%s count: ", line);
		}
		fclose ( file );
	}
	printf("File: %s fd: %d count: %d\n", argv[1], fd, count);
	return (0);
}
