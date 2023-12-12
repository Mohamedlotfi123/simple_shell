#include "shell.h"
/**
 * search_command - search for command
 * @command : command to search for
 *
 * Return: 0 and 1 if found or -1 if not
 */
int search_command(char *command)
{
	int i;
	struct stat x;
	char c[100] = "/usr/bin/";

	if (command == NULL)
	{
		return (0);
	}
	i = stat(command, &x);
	if (i == 0)
	{
		return (1);
	}
	if (i == -1)
	{
		strcat(c, command);
		i = stat(c, &x);
	}
	return (i);
}
