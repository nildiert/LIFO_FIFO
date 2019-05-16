# README 

## Prototypes

* int read_file(void): /* Count \n */
* char **_strtok(char *line): /* Tokenizar  */
* veify_args(char *arg args[0]): /* If exists /*
* _push(char *args[i]): /* Push function  */

## Compiler flags
gcc -g -Wall -Werror -Wextra -pedantic *.c -o monty

## Valgrind test
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes  --tool=memcheck ./monty

