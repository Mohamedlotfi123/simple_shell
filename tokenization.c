#include "shell.h"
/**
 * tokenization - parise the string
 * @str : string to be parise
 *
 * Return: Array of pointers
 */
char **tokenization(char *str)
{
	int size = 64;
	char *token, **arr, *del = " \n\t\b";
	int i = 0;

	arr = malloc(sizeof(char *) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	token = strtok(str, del);
	while (token != NULL)
	{
		if (*token == '#')
			break;
		arr[i] = token;
		i++;
		if (i >= size)
		{
			size += size;
			arr = realloc(arr, size * sizeof(char *));
			if (arr == NULL)
			{
				return (NULL);
			}
		}
		token = strtok(NULL, del);
	}
	arr[i] = NULL;
	return (arr);
}
