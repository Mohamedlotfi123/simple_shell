#include "shell.h"
static char *track_of_strtok;
/**
 * my_strtok - create tokens from string
 * @str : the string that passed to the function
 * @del : delimiter
 *
 * Return: pointer to the created token
*/
char *my_strtok(char *str, char *del)
{
	char *begin;
	int i;

	if (str != NULL)
	{
		track_of_strtok = str;
	}
	if (track_of_strtok == NULL || *track_of_strtok == '\0')
	{
		return (NULL);
	}
	begin = track_of_strtok;
	while (*track_of_strtok != '\0')
	{
		for (i = 0; del[i] != '\0'; i++)
		{
			if (*track_of_strtok == del[i])
			{
				*track_of_strtok = '\0';
				track_of_strtok++;
				return (begin);
			}
		}
		track_of_strtok++;
	}
	return (begin);
}
