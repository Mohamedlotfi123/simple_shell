#include "shell.h"
/**
 * check_spaces - check if the user just enter spaces
 * @buf : entered command
 *
 * Return: 0 if not or 1 if yes
 */
int check_spaces(char *buf)
{
	int i = 0;

	for (; buf[i] != '\0'; i++)
	{
		if (buf[i] == ' ' || buf[i] == '\n')
		{
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
