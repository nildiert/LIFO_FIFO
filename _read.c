#include "lifo_fifo.h"
/**
 *read_file - this is the function to read the file
 *
 *Return: 0
 */
void read_file(*char mystring)
/* int main(int argc, char **argv) */
{
        int fd = open(mystring, O_RDONLY);
        int size= 1024, count = 0;
        FILE *file = fopen ( mystring, "r" );
	char ch;

        (void)argv;
        (void)fd;
        (void)size;

        if ( argc == 2 )
        {
                char line [ 128 ]; /* or other suitable maximum line size */
                while ( fgets ( line, sizeof line, file ) != NULL )
                {
			while((fgetc(fd)) != "\n")
			printf("%c", ch);
                        count++;
                       printf("%s count: ", line);
                }
                fclose ( file );
        }
	else
	{
		perror("Open file failed");
	}

        printf("File: %s fd: %d count: %d\n", argv[1], fd, count);
}
