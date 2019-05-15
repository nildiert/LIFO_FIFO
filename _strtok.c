#include "lifo_fifo.h"
/**
 * _strtok - tokenize and return an array of tokens
 * @istring: string to be tokenized.
 * @delimit: string to know where to tokenized.
 *
 * Return: array of tokens.
 */
char **_strtok(char *line, char *delimit)
{
	int i = 0;
	char **tokens;
	char *tok;
	char *dup_token;

	dup_token = strcp(line);
	tok = strtok(line, delimit);
	i++;
	while (tok != NULL)
	{
		tok = strtok(NULL, delimit);
		i++;
	}
	tokens = malloc(sizeof(char) * i);
	i = 0;
	tokens[i] = strtok(dup_token, delimit);
	while (tokens[i] != NULL)
	{
		i++;
		tokens[i] = strtok(NULL, delimit);
	}
	return (tokens);
}

/**
 * strcp - copies one string into a duplicate.
 * @str: string to be duplicated.
 *
 * Return: duplicated string.
 */
char *strcp(char *str)
{
	char *dup = NULL;
	int counter = 0;
	int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	dup = malloc((size) * sizeof(char));
	while (counter <= size)
	{
		dup[counter] = str[counter];
		counter++;
	}
	return (dup);
}
